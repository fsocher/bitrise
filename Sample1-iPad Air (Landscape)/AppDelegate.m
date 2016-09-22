// 
// AppDelegate.m
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate {
    NSNumber *isFirstRun;
    BOOL loggedIn;
    UILocalNotification *localNotification;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // initialize the Data Model Controller, will be created and started later.
    
    [[DataModelController instance] create];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    [[MWNavigationController sharedInstance] start];
    [[MWNavigationController sharedInstance] navigateToRootController:self.window];
    [self.window makeKeyAndVisible];
    
    [self setupApplication:application withLaunchOptions:launchOptions];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
    [[NSNotificationCenter defaultCenter] postNotificationName:kAppWillResignActiveNotification object:nil userInfo:nil];
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    if(loggedIn) {
        [[NSNotificationCenter defaultCenter] postNotificationName:kAppDidEnterBackgroundNotification object:nil userInfo:nil];
        [[DataModelController instance] shutdown];
    }
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    if(loggedIn) {
        [[NSNotificationCenter defaultCenter] postNotificationName:kAppDidBecomeActiveNotification object:nil userInfo:nil];
        [[DataModelController instance] startup];
    }
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    if(loggedIn) {
        [[DataModelController instance] shutdown];
    }
}

#pragma mark - Setup for APN

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devToken {
    [MWBaseLib instance].deviceToken = devToken;
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)err {
    NSDictionary *uinfo = [[NSDictionary alloc] initWithObjectsAndKeys:@"Push Notifications", @"title", @"info", @"category", [NSString stringWithFormat:@"Remote Notifications can not be activated!"], @"subtitle", nil];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:kLocalNotification object:nil userInfo:uinfo];
}

- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings {
    [application registerForRemoteNotifications];
    
    // reset notification center
    // first set to one, because badge count is not used
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:1];
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];
}

#pragma mark - Setup application

- (void)setupApplication:(UIApplication *)application withLaunchOptions:(NSDictionary *)launchOptions {
    [[MWBaseLib instance] setup];
    
    // remote notifications
    UIUserNotificationType userNotificationTypes = (UIUserNotificationTypeAlert |
                                                    UIUserNotificationTypeBadge |
                                                    UIUserNotificationTypeSound);
    UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:userNotificationTypes categories:nil];
    [application registerUserNotificationSettings:settings];
    
    loggedIn = NO;
    
    localNotification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey];
    
    // Check for local user account data
    // data must be in keyhain
    LoginDialogType type = ([[UserService service] appUserExists]) ? LocalUserLogin : LocalUserCreate;
    NSDictionary *payload = [[NSDictionary alloc] initWithObjectsAndKeys:[NSNumber numberWithShort:type], @"type", [^{
        //Continue app execution
        [[NSNotificationCenter defaultCenter] postNotificationName:kLocalUserLoggedInNotification object:nil userInfo:nil];
    } copy], @"onSuccess", nil];
    [[NSNotificationCenter defaultCenter] postNotificationName:kShowLoginDialogNotification object:nil userInfo:payload];
    
    //Subscribe to receive event to conitnue execution
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(userLoggedIn:) name:kLocalUserLoggedInNotification object:nil];
}

- (void)userLoggedIn:(NSNotification*) notification{
    if(!loggedIn) {
        loggedIn = YES;
        
        // If there are pending local notifications, show them
        //
        if (localNotification) {
            [[UIApplication sharedApplication] scheduleLocalNotification:localNotification];
        }
        
        [[DataModelController instance] startup];
    } else {
        DebugLog(@"User logged in called more than once!");
    }
}
@end