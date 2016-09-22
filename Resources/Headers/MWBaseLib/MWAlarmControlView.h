//
//  MovisaAlarmControl.h
//  AlarmViewTest
//
//  Created by Maximilian Winkler on 12.04.15.
//  Copyright (c) 2015 Maximilian Winkler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+XibConfiguration.h"

IB_DESIGNABLE
@interface MWAlarmControlView : UIView

@property (nonatomic, assign) BOOL useSmallRows;
@property (nonatomic, strong) IBOutlet UINavigationBar *titleBar;
@property (nonatomic, strong) IBInspectable IBOutlet UITableView *alarmTable;

- (void)setDelegate:(id<UITableViewDelegate>)delegate;
- (void)setDataSource:(id<UITableViewDataSource>)dataSource;

- (void)setTitle:(NSString *)title;
- (void)setEnable:(BOOL)enabled;
- (void)enableSmallTitleBar;

@end
