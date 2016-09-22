// 
// OverviewPanelController.h
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
#import "MWButtonViewController.h"
#import "MWSimpleContainerView.h"
#import "MWLabelViewController.h"
#import "MWTrendViewController.h"
#import "MWImageView.h"
#import "MWLabelView.h"
#import "MWButtonView.h"
#import "MWSimpleContainerViewController.h"
#import "MWImageViewController.h"
#import "MWTrendView.h"

@interface OverviewPanelController : MWPanelController

@property (weak, nonatomic) IBOutlet MWSimpleContainerView *simplecontainer_f7c4_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *grass_0_view;
@property (weak, nonatomic) IBOutlet MWImageView *img_windmill_0_view;
@property (weak, nonatomic) IBOutlet MWSimpleContainerView *sc_state_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_state_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_state_value_0_view;
@property (weak, nonatomic) IBOutlet MWButtonView *btn_state_on_0_view;
@property (weak, nonatomic) IBOutlet MWButtonView *btn_state_off_0_view;
@property (weak, nonatomic) IBOutlet MWSimpleContainerView *sc_power_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_power_value_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_timestamp_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_power_0_view;
@property (weak, nonatomic) IBOutlet MWImageView *img_windmill_pylon_0_view;
@property (weak, nonatomic) IBOutlet MWSimpleContainerView *sc_nightmode_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_nightmode_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *lbl_nightmode_value_0_view;
@property (weak, nonatomic) IBOutlet MWButtonView *btn_nightmode_on_0_view;
@property (weak, nonatomic) IBOutlet MWButtonView *btn_nightmode_off_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *sky_0_view;
@property (weak, nonatomic) IBOutlet MWTrendView *trend_8e67_0_view;
@property (weak, nonatomic) IBOutlet MWTrendView *trend_c9a4_0_view;
@property (weak, nonatomic) IBOutlet MWTrendView *trend_da6d_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *label_df18_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *label_fd57_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *label_8a63_0_view;
@property (weak, nonatomic) IBOutlet MWImageView *image_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *label_3641_0_view;
@property (weak, nonatomic) IBOutlet MWImageView *image_90f4_0_view;
@property (weak, nonatomic) IBOutlet MWLabelView *label_7df8_0_view;

@end

