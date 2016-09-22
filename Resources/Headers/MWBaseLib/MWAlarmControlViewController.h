//
//  MovisaAlarmControlViewController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 12.04.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWWidget.h"
#import "UIViewController+MWTextContainingWidget.h"

#import "MWTextDefinition.h"
#import "AlarmMO.h"

@class MWAlarmControlView;

@interface MWAlarmControlViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NSFetchedResultsControllerDelegate>

@property (nonatomic, assign) MWAlarmControlView *alarmControlView;

@property (nonatomic, assign) MWTextDefinition *alarmListTitle;

@property (nonatomic) BOOL showAllAlarms;

-(id)initWithShowingAllAlarms:(BOOL)showAllAlarms;

-(void)setAlarmControlView:(MWAlarmControlView *)alarmControlView;

@end
