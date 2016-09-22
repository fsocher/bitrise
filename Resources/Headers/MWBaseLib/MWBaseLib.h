//
//  MovisaBaseLib.h
//  MovisaBaseLib
//
//  Created by Christian Schäfer on 06.03.14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ApplicationController.h"
#import "MWPanelViewController.h"
#import "MWNavigationController.h"
#import "Constants.h"
#import "MWDataItemEffect.h"
#import "CoreDataStore.h"

@interface MWBaseLib : NSObject {
    NSData *_deviceToken;
    MWPanelController *currentPanel;
    NSMutableArray *connections;
}

@property (nonatomic, retain) MWPanelViewController *activePanel;
@property (nonatomic, retain) UIWindow *mainViewController;
@property (nonatomic, retain) NSDictionary *panels;
@property (nonatomic, retain, getter=getDeviceToken, setter=setDeviceToken:) NSData *deviceToken;
@property (nonatomic, strong) MWPanelController *currentPanel;
@property (nonatomic, strong) NSMutableArray *connections;
@property (nonatomic) BOOL firstTimeLaunch;
@property (nonatomic) BOOL isConnected;

- (void)setup;
- (void)populateData;
- (void)fetchInitialData;
- (NSString *)activePanelName;
- (void)openPopup:(MWPanelViewController *)popupViewCtrl;

- (void)requestNewBanner:(NSDictionary *)options;

+ (NSBundle*)movisaBaseResourceBundle;
+ (MWBaseLib *)instance;
- (NSString *)getMD5Hash:(NSString *)string;
- (NSString *)localizedString:(NSString *)key;
- (UIColor *)randomColor;
- (NSArray *)availableColors;
- (UIImage *)imageNamed:(NSString *)imageName;

#pragma mark - Life Cycle
- (void)reconnect;
- (void)disconnect;
- (void)connect;
- (void)shutdown;

- (void)startSubscriptions;
- (void)stopSubscriptions;

# pragma mark - APN
- (void)setupPushNotifications:(UIApplication *)application;

#pragma mark - DataHandling
- (void)handleLocalDataItemEffects:(NSNotification *)notification;
- (void)persistNewValueWith:(DataItemMO*)di Value:(NSObject*)val Timestamp:(long)timestamp;
- (void)updateUIForDataItem:(DataItemMO *)dataItem withValue:(NSString *)value;
- (void)persistValue:(NSString *)value withDataType:(ValueDataType)valueDataType forDataItemName:(NSString *)dataItemName;
- (id)determine:(NSString *)value forValueDataType:(ValueDataType)valueDataType;
@end
