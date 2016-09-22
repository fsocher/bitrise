//
//  MWTrendViewOverlayController.h
//  MWBaseLib
//
//  Created by Lars Beier on 07.03.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWPanelViewController.h"
#import "MWTrendView.h"
#import "MWTrendViewController.h"
#import "MWBaseLib.h"
#import "TrendMO.h"

IB_DESIGNABLE
@interface MWTrendViewOverlayController : MWPanelViewController <UITableViewDataSource, UITableViewDelegate>


@property (nonatomic) MWTrendViewController *trendViewController;
@property (nonatomic) TrendMO *trendObject;

- (void)showOverlay;
- (IBAction)done:(UIBarButtonItem *)sender;

@end
