// 
// AlarmViewPanelController.m
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 

#import "AlarmViewPanelController.h"

@interface AlarmViewPanelController ()

@property (nonatomic) MWButtonViewController *button_74da_0_controller;
@property (nonatomic) MWImageViewController *image_b8cf_0_controller;
@property (nonatomic) MWAlarmControlViewController *alarmcontrol_74bf_0_controller;

@end

@implementation AlarmViewPanelController

- (void)viewDidLoad {
    // Initialize Controllers
    [self initializeControllers];
    // Assign Views
    [self initializeViews];
    // Initialize Animations
    [self initializeAnimations];
    // Initialize Interactions
    [self initializeInteractions];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    // Register for Notifications
    [self registerForNotifications];
    
    // Initialize Subscriptions
    [[DataModelController instance] startSubscriptions];
}

- (void)initializeControllers {
	self.button_74da_0_controller = [[MWButtonViewController alloc] init];
	self.image_b8cf_0_controller = [[MWImageViewController alloc] init];
	self.alarmcontrol_74bf_0_controller = [[MWAlarmControlViewController alloc] init];
}

- (void)initializeViews {
	[self.button_74da_0_controller setButtonView:self.button_74da_0_view];
	[self.image_b8cf_0_controller setImageView:self.image_b8cf_0_view];
	[self.alarmcontrol_74bf_0_controller setAlarmControlView:self.alarmcontrol_74bf_0_view];
}

- (void)initializeAnimations {
}

- (void)initializeInteractions {
	
	[self.button_74da_0_controller addEffect:[[MWNavigationEffect alloc] initWithFlowName:@"alarm_overview"] ForInteractionType:MWInteractionTypeTap];	
}

@end
