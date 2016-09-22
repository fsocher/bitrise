//
//  LoginViewController.h
//  MovisaBaseLib
//
//  Created by Georgij on 14/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserService.h"
#import "MWPanelViewController.h"

/// Defines available Login Dialog types
typedef NS_ENUM(NSInteger, LoginDialogType) {
    LocalUserCreate,
    LocalUserLogin,
    RemoteUserLogin
};

/// Defines block types
typedef BOOL (^RemoteLoginBlock)(NSString* username, NSString* password);
typedef void (^SuccessLoginBlock)(void);
typedef void (^FailLoginBlock)(void);
typedef void (^CancelLoginBlock)(void);

/// Defines keys to be used with passed options
extern NSString* const kLoginDialogOptionTitle;
extern NSString* const kLoginDialogOptionSubTitle;
extern NSString* const kLoginDialogOptionRemoteServerName;

@interface LoginViewController : MWPanelViewController <UITextFieldDelegate>

@property (readonly, nonatomic) LoginDialogType loginType;

- (LoginViewController*)initWithType:(LoginDialogType) type
                              bundle:(NSBundle *)nibBundleOrNil
                             options:(NSDictionary*) options
                remoteLoginProcedure:(RemoteLoginBlock) remoteLoginBlock
                             success:(SuccessLoginBlock) successBlock
                                fail:(FailLoginBlock)failBlock
                              cancel:(CancelLoginBlock)cancelBlock;

@end
