//
//  MWNavigationController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 18.09.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWPanelController.h"

@interface MWNavigationController : NSObject

@property (nonatomic) NSMutableDictionary *knownPanels;
@property (nonatomic) NSMutableDictionary *knownNavigationFlows;
@property (nonatomic) MWPanelController *currentPanelController;


+ (MWNavigationController *)sharedInstance;

- (void)start;
- (void)stop;
- (void)navigateToRootController:(UIWindow *)mainWindow;
- (void)setBundle:(NSBundle *)bundle;

@end
