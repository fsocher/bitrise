//
//  MovisaSmallAlarmTableViewCell.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 14.04.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlarmMO.h"
#import "DataItemMO+Extensions.h"
#import "DataItemValueMO+Extensions.h"

@interface MWSmallAlarmTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *triggerLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *dataItemLabel;
@property (weak, nonatomic) IBOutlet UILabel *changedLabel;
@property (weak, nonatomic) IBOutlet UILabel *ackBannerLabel;

@property (weak, nonatomic) AlarmMO *alarm;

@end
