//
//  MWPanelController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 18.09.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWAnimation.h"

@interface MWPanelController : UIViewController

- (void)registerAnimation:(id<MWAnimation>)animation ForSignal:(NSString *)signalName;
- (void)deregisterAnimationForSignal:(NSString *)signalName;

- (void)registerForNotifications;
- (void)deregisterForNotifications;

@end
