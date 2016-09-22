//
//  Constants.h
//  MovisaBaseLib
//
//  Created by Georgij on 15/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//
#pragma mark - Relates to Presentation Controller
extern NSString* const kShowLoginDialogNotification;
extern NSString* const kToggleActivityIndicatorNotification;
extern NSString* const kMovisaServerLoginFeedbackNotification;

#pragma mark - Relates to General application execution sequence
extern NSString* const kAppDidFinishLaunchingWithOptionsdNotification;
extern NSString* const kAppWillResignActiveNotification;
extern NSString* const kAppDidEnterBackgroundNotification;
extern NSString* const kAppDidBecomeActiveNotification;
extern NSString* const kAppWillTerminatedNotification;

extern NSString* const kDeviceTokenNotification;
extern NSString* const kLocalUserLoggedInNotification;
extern NSString* const kTrialEndsNotification;
extern NSString* const kLocalNotification;
extern NSString* const kLocalDataItemEffects;

#pragma mark - Server Connection
extern NSString* const kServerConnectionStatusChangedNotification;

#pragma mark - Notification's payload keys
extern NSString* const kTargetServer;
extern NSString* const kDataItem;
extern NSString* const kValue;
