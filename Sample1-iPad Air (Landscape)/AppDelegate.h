// 
// AppDelegate.h
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 


#import <UIKit/UIKit.h>

#import "DataModelController.h"
#import "MWNavigationController.h"

#import "LoginViewController.h"
#import "MWBaseLib.h"
#import "UserService.h"
#import "MWNavigationController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) DataModelController* dataModelController;

- (void)setupApplication:(UIApplication *)application withLaunchOptions:(NSDictionary *)launchOptions;

@end

