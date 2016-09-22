//
//  MWSignalTableViewCell.h
//  MWBaseLib
//
//  Created by Lars Beier on 14.03.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWTrendViewController.h"

IB_DESIGNABLE
@interface MWSignalTableViewCell : UITableViewCell <UIAlertViewDelegate, UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *disclosureIcon;

@property (weak, nonatomic) IBOutlet UIView *titleView;
@property (weak, nonatomic) IBOutlet UIView *settingsView;
@property (weak, nonatomic) IBOutlet UITextField *labelTextField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *axisDependencySegmentControl;
@property (weak, nonatomic) IBOutlet UILabel *signalName;
@property (weak, nonatomic) IBOutlet UILabel *axisDependencyLabel;
@property (weak, nonatomic) MWTrendViewController *trendViewController;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) IBOutlet UILabel *indicatorLabel;
@property (weak, nonatomic) IBOutlet UILabel *indicatorColor;
@property (weak, nonatomic) IBOutlet UIButton *changeColorButton;
@property (nonatomic) NSUInteger previousAxisDependencyIndex;

@end
