// 
// AlarmViewPanelController.h
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 

#import <UIKit/UIKit.h>
#import "DataModelController.h"
#import "MWPanelController.h"
#import "MWContinuousAnimation.h"
#import "MWDiscreteAnimation.h"
#import "MWValueOutputAnimation.h"
#import "MWIndicatorAnimation.h"
#import "MWRangeComparator.h"
#import "MWRange.h"

#import "MWWriteFixedIntegerDataEffect.h"
#import "MWNavigationEffect.h"
#import "MWWriteFixedBooleanDataEffect.h"
#import "MWImageView.h"
#import "MWAlarmControlView.h"
#import "MWButtonView.h"
#import "MWButtonViewController.h"
#import "MWImageViewController.h"
#import "MWAlarmControlViewController.h"

@interface AlarmViewPanelController : MWPanelController

@property (weak, nonatomic) IBOutlet MWButtonView *button_74da_0_view;
@property (weak, nonatomic) IBOutlet MWImageView *image_b8cf_0_view;
@property (weak, nonatomic) IBOutlet MWAlarmControlView *alarmcontrol_74bf_0_view;

@end

