//
//  MovisaAlarmTableViewCell.h
//  AlarmViewTest
//
//  Created by Maximilian Winkler on 10.04.15.
//  Copyright (c) 2015 Maximilian Winkler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlarmMO.h"
#import "DataItemMO+Extensions.h"
#import "DataItemValueMO+Extensions.h"

@interface MWAlarmTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *triggerLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *dataItemLabel;
@property (weak, nonatomic) IBOutlet UILabel *changedLabel;
@property (weak, nonatomic) IBOutlet UILabel *frequencyLabel;
@property (weak, nonatomic) IBOutlet UILabel *ackBannerLabel;

@property (weak, nonatomic) AlarmMO *alarm;



@end
