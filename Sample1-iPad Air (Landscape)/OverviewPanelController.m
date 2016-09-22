// 
// OverviewPanelController.m
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 

#import "OverviewPanelController.h"

@interface OverviewPanelController ()

@property (nonatomic) MWSimpleContainerViewController *simplecontainer_f7c4_0_controller;
@property (nonatomic) MWLabelViewController *grass_0_controller;
@property (nonatomic) MWImageViewController *img_windmill_0_controller;
@property (nonatomic) MWSimpleContainerViewController *sc_state_0_controller;
@property (nonatomic) MWLabelViewController *lbl_state_0_controller;
@property (nonatomic) MWLabelViewController *lbl_state_value_0_controller;
@property (nonatomic) MWButtonViewController *btn_state_on_0_controller;
@property (nonatomic) MWButtonViewController *btn_state_off_0_controller;
@property (nonatomic) MWSimpleContainerViewController *sc_power_0_controller;
@property (nonatomic) MWLabelViewController *lbl_power_value_0_controller;
@property (nonatomic) MWLabelViewController *lbl_timestamp_0_controller;
@property (nonatomic) MWLabelViewController *lbl_power_0_controller;
@property (nonatomic) MWImageViewController *img_windmill_pylon_0_controller;
@property (nonatomic) MWSimpleContainerViewController *sc_nightmode_0_controller;
@property (nonatomic) MWLabelViewController *lbl_nightmode_0_controller;
@property (nonatomic) MWLabelViewController *lbl_nightmode_value_0_controller;
@property (nonatomic) MWButtonViewController *btn_nightmode_on_0_controller;
@property (nonatomic) MWButtonViewController *btn_nightmode_off_0_controller;
@property (nonatomic) MWLabelViewController *sky_0_controller;
@property (nonatomic) MWTrendViewController *trend_8e67_0_controller;
@property (nonatomic) MWTrendViewController *trend_c9a4_0_controller;
@property (nonatomic) MWTrendViewController *trend_da6d_0_controller;
@property (nonatomic) MWLabelViewController *label_df18_0_controller;
@property (nonatomic) MWLabelViewController *label_fd57_0_controller;
@property (nonatomic) MWLabelViewController *label_8a63_0_controller;
@property (nonatomic) MWImageViewController *image_0_controller;
@property (nonatomic) MWLabelViewController *label_3641_0_controller;
@property (nonatomic) MWImageViewController *image_90f4_0_controller;
@property (nonatomic) MWLabelViewController *label_7df8_0_controller;

@end

@implementation OverviewPanelController

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
	self.simplecontainer_f7c4_0_controller = [[MWSimpleContainerViewController alloc] init];
	self.grass_0_controller = [[MWLabelViewController alloc] init];
	self.img_windmill_0_controller = [[MWImageViewController alloc] init];
	self.sc_state_0_controller = [[MWSimpleContainerViewController alloc] init];
	self.lbl_state_0_controller = [[MWLabelViewController alloc] init];
	self.lbl_state_value_0_controller = [[MWLabelViewController alloc] init];
	self.btn_state_on_0_controller = [[MWButtonViewController alloc] init];
	self.btn_state_off_0_controller = [[MWButtonViewController alloc] init];
	self.sc_power_0_controller = [[MWSimpleContainerViewController alloc] init];
	self.lbl_power_value_0_controller = [[MWLabelViewController alloc] init];
	self.lbl_timestamp_0_controller = [[MWLabelViewController alloc] init];
	self.lbl_power_0_controller = [[MWLabelViewController alloc] init];
	self.img_windmill_pylon_0_controller = [[MWImageViewController alloc] init];
	self.sc_nightmode_0_controller = [[MWSimpleContainerViewController alloc] init];
	self.lbl_nightmode_0_controller = [[MWLabelViewController alloc] init];
	self.lbl_nightmode_value_0_controller = [[MWLabelViewController alloc] init];
	self.btn_nightmode_on_0_controller = [[MWButtonViewController alloc] init];
	self.btn_nightmode_off_0_controller = [[MWButtonViewController alloc] init];
	self.sky_0_controller = [[MWLabelViewController alloc] init];
	self.trend_8e67_0_controller = [[MWTrendViewController alloc] init];
	self.trend_c9a4_0_controller = [[MWTrendViewController alloc] init];
	self.trend_da6d_0_controller = [[MWTrendViewController alloc] init];
	self.label_df18_0_controller = [[MWLabelViewController alloc] init];
	self.label_fd57_0_controller = [[MWLabelViewController alloc] init];
	self.label_8a63_0_controller = [[MWLabelViewController alloc] init];
	self.image_0_controller = [[MWImageViewController alloc] init];
	self.label_3641_0_controller = [[MWLabelViewController alloc] init];
	self.image_90f4_0_controller = [[MWImageViewController alloc] init];
	self.label_7df8_0_controller = [[MWLabelViewController alloc] init];
}

- (void)initializeViews {
	[self.simplecontainer_f7c4_0_controller setSimpleContainerView:self.simplecontainer_f7c4_0_view];
	[self.grass_0_controller setLabelView:self.grass_0_view];
	[self.img_windmill_0_controller setImageView:self.img_windmill_0_view];
	[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityModerate];
	[self.sc_state_0_controller setSimpleContainerView:self.sc_state_0_view];
	[self.lbl_state_0_controller setLabelView:self.lbl_state_0_view];
	[self.lbl_state_value_0_controller setLabelView:self.lbl_state_value_0_view];
	[self.btn_state_on_0_controller setButtonView:self.btn_state_on_0_view];
	[self.btn_state_off_0_controller setButtonView:self.btn_state_off_0_view];
	[self.sc_power_0_controller setSimpleContainerView:self.sc_power_0_view];
	[self.lbl_power_value_0_controller setLabelView:self.lbl_power_value_0_view];
	[self.lbl_timestamp_0_controller setLabelView:self.lbl_timestamp_0_view];
	[self.lbl_power_0_controller setLabelView:self.lbl_power_0_view];
	[self.img_windmill_pylon_0_controller setImageView:self.img_windmill_pylon_0_view];
	[self.sc_nightmode_0_controller setSimpleContainerView:self.sc_nightmode_0_view];
	[self.lbl_nightmode_0_controller setLabelView:self.lbl_nightmode_0_view];
	[self.lbl_nightmode_value_0_controller setLabelView:self.lbl_nightmode_value_0_view];
	[self.btn_nightmode_on_0_controller setButtonView:self.btn_nightmode_on_0_view];
	[self.btn_nightmode_off_0_controller setButtonView:self.btn_nightmode_off_0_view];
	[self.sky_0_controller setLabelView:self.sky_0_view];
	[self.trend_8e67_0_controller setTrendView:self.trend_8e67_0_view];
	[self.trend_8e67_0_controller setBackgroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	[self.trend_8e67_0_controller setXAxisWithColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisLineWidth:[NSNumber numberWithDouble:1.0] range:NULL gridEnabled:YES];
	[self.trend_8e67_0_controller setYAxis:MWAxisTypeYAxisLeft withColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisScale:[NSNumber numberWithInt:1.0] axisLineWidth:[NSNumber numberWithDouble:1.0] rangeMin:[NSNumber numberWithDouble:0.0] rangeMax:[NSNumber numberWithDouble:3.0] gridEnabled:YES];
	[self.trend_8e67_0_controller addDataSetWithLabel:@"power_indicator" forYAxis:MWAxisDependencyLeft color:[UIColor colorWithRed:1.0 green:0.6470588235294118 blue:0.0 alpha:1.0] lineWidth:1.0];
	[self.trend_c9a4_0_controller setTrendView:self.trend_c9a4_0_view];
	[self.trend_c9a4_0_controller setBackgroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	[self.trend_c9a4_0_controller setXAxisWithColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisLineWidth:[NSNumber numberWithDouble:1.0] range:NULL gridEnabled:YES];
	[self.trend_c9a4_0_controller setYAxis:MWAxisTypeYAxisLeft withColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisScale:NULL axisLineWidth:[NSNumber numberWithDouble:1.0] rangeMin:[NSNumber numberWithDouble:0.0] rangeMax:[NSNumber numberWithDouble:1.0] gridEnabled:NO];
	[self.trend_c9a4_0_controller addDataSetWithLabel:@"nightmode_indicator" forYAxis:MWAxisDependencyLeft color:[UIColor colorWithRed:0.5019607843137255 green:0.0 blue:0.5019607843137255 alpha:1.0] lineWidth:1.0];
	[self.trend_da6d_0_controller setTrendView:self.trend_da6d_0_view];
	[self.trend_da6d_0_controller setBackgroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	[self.trend_da6d_0_controller setXAxisWithColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisLineWidth:[NSNumber numberWithDouble:1.0] range:NULL gridEnabled:YES];
	[self.trend_da6d_0_controller setYAxis:MWAxisTypeYAxisLeft withColor:[UIColor colorWithRed:0.7490196078431373 green:0.7647058823529411 blue:0.7647058823529411 alpha:1.0] axisScale:NULL axisLineWidth:[NSNumber numberWithDouble:1.0] rangeMin:[NSNumber numberWithDouble:0.0] rangeMax:[NSNumber numberWithDouble:1.0] gridEnabled:NO];
	[self.trend_da6d_0_controller addDataSetWithLabel:@"state_indicator" forYAxis:MWAxisDependencyLeft color:[UIColor colorWithRed:1.0 green:0.0 blue:0.0 alpha:1.0] lineWidth:1.0];
	[self.label_df18_0_controller setLabelView:self.label_df18_0_view];
	[self.label_fd57_0_controller setLabelView:self.label_fd57_0_view];
	[self.label_8a63_0_controller setLabelView:self.label_8a63_0_view];
	[self.image_0_controller setImageView:self.image_0_view];
	[self.label_3641_0_controller setLabelView:self.label_3641_0_view];
	[self.image_90f4_0_controller setImageView:self.image_90f4_0_view];
	[self.label_7df8_0_controller setLabelView:self.label_7df8_0_view];
}

- (void)initializeAnimations {
	
	MWDiscreteAnimation *grass_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.grass_0_controller];
	[self registerAnimation:grass_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *grass_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.grass_0_controller setBackgroundColor:[UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:1.0]];
	[self.grass_0_controller setForegroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	} FalseResult:^{[self.grass_0_controller setBackgroundColor:[UIColor colorWithRed:0.6823529411764706 green:0.8823529411764706 blue:0.7333333333333333 alpha:1.0]];
	[self.grass_0_controller setForegroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	}];
	[grass_0_dis_1 addComparator:grass_0_dis_1_com];
	
	MWDiscreteAnimation *img_windmill_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.img_windmill_0_controller];
	[self registerAnimation:img_windmill_0_dis_1 ForSignal:@"power_has_changed"];
		MWRangeComparator *img_windmill_0_dis_1_com = [[MWRangeComparator alloc] initWithLeftIncluding:true leftLimit:0.0 andRightIncluding:false rightLimit:3.0 andOuterLeftResult:^{
		[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.img_windmill_0_controller setIsAccessible:true];
		[self.img_windmill_0_controller setIsVisible:true];
		[self.img_windmill_0_controller setIsValid:true];
		
	} andOuterRightResult:^{
		[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.img_windmill_0_controller setIsAccessible:true];
		[self.img_windmill_0_controller setIsVisible:true];
		[self.img_windmill_0_controller setIsValid:true];
		
	}];
	[img_windmill_0_dis_1 addComparator:img_windmill_0_dis_1_com];
	[img_windmill_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:0.0 isIncluding:false andRightEndPoint:1.0 including:true withCompareResult:^{
		[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocitySlow];
		[self.img_windmill_0_controller setIsAccessible:true];
		[self.img_windmill_0_controller setIsVisible:true];
		[self.img_windmill_0_controller setIsValid:true];
		
	}]];
	[img_windmill_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:1.0 isIncluding:false andRightEndPoint:2.0 including:true withCompareResult:^{
		[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityModerate];
		[self.img_windmill_0_controller setIsAccessible:true];
		[self.img_windmill_0_controller setIsVisible:true];
		[self.img_windmill_0_controller setIsValid:true];
		
	}]];
	[img_windmill_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:2.0 isIncluding:false andRightEndPoint:3.0 including:true withCompareResult:^{
		[self.img_windmill_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityFast];
		[self.img_windmill_0_controller setIsAccessible:true];
		[self.img_windmill_0_controller setIsVisible:true];
		[self.img_windmill_0_controller setIsValid:true];
		
	}]];
	
	MWDiscreteAnimation *lbl_state_value_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.lbl_state_value_0_controller];
	[self registerAnimation:lbl_state_value_0_dis_1 ForSignal:@"state_has_changed"];
		MWRangeComparator *lbl_state_value_0_dis_1_com = [[MWRangeComparator alloc] initWithLeftIncluding:true leftLimit:0.0 andRightIncluding:false rightLimit:2.0 andOuterLeftResult:^{
		[self.lbl_state_value_0_controller setCurrentValue:@"off"];
		
	} andOuterRightResult:^{
		[self.lbl_state_value_0_controller setCurrentValue:@"stoping"];
		
	}];
	[lbl_state_value_0_dis_1 addComparator:lbl_state_value_0_dis_1_com];
	[lbl_state_value_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:0.0 isIncluding:false andRightEndPoint:1.0 including:true withCompareResult:^{
		[self.lbl_state_value_0_controller setCurrentValue:@"starting"];
		
	}]];
	[lbl_state_value_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:1.0 isIncluding:false andRightEndPoint:2.0 including:true withCompareResult:^{
		[self.lbl_state_value_0_controller setCurrentValue:@"on"];
		
	}]];
	
	MWDiscreteAnimation *btn_state_on_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.btn_state_on_0_controller];
	[self registerAnimation:btn_state_on_0_dis_1 ForSignal:@"state_has_changed"];
		MWRangeComparator *btn_state_on_0_dis_1_com = [[MWRangeComparator alloc] initWithLeftIncluding:true leftLimit:0.0 andRightIncluding:false rightLimit:2.0 andOuterLeftResult:^{
		[self.btn_state_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_on_0_controller setIsAccessible:true];
		[self.btn_state_on_0_controller setIsVisible:true];
		[self.btn_state_on_0_controller setIsValid:true];
		
	} andOuterRightResult:^{
		[self.btn_state_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_on_0_controller setIsAccessible:false];
		[self.btn_state_on_0_controller setIsVisible:true];
		[self.btn_state_on_0_controller setIsValid:true];
		
	}];
	[btn_state_on_0_dis_1 addComparator:btn_state_on_0_dis_1_com];
	[btn_state_on_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:0.0 isIncluding:false andRightEndPoint:1.0 including:true withCompareResult:^{
		[self.btn_state_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_on_0_controller setIsAccessible:false];
		[self.btn_state_on_0_controller setIsVisible:true];
		[self.btn_state_on_0_controller setIsValid:true];
		
	}]];
	[btn_state_on_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:1.0 isIncluding:false andRightEndPoint:2.0 including:true withCompareResult:^{
		[self.btn_state_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_on_0_controller setIsAccessible:false];
		[self.btn_state_on_0_controller setIsVisible:true];
		[self.btn_state_on_0_controller setIsValid:true];
		
	}]];
	
	MWDiscreteAnimation *btn_state_off_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.btn_state_off_0_controller];
	[self registerAnimation:btn_state_off_0_dis_1 ForSignal:@"state_has_changed"];
		MWRangeComparator *btn_state_off_0_dis_1_com = [[MWRangeComparator alloc] initWithLeftIncluding:true leftLimit:0.0 andRightIncluding:false rightLimit:2.0 andOuterLeftResult:^{
		[self.btn_state_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_off_0_controller setIsAccessible:false];
		[self.btn_state_off_0_controller setIsVisible:true];
		[self.btn_state_off_0_controller setIsValid:true];
		
	} andOuterRightResult:^{
		[self.btn_state_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_off_0_controller setIsAccessible:false];
		[self.btn_state_off_0_controller setIsVisible:true];
		[self.btn_state_off_0_controller setIsValid:true];
		
	}];
	[btn_state_off_0_dis_1 addComparator:btn_state_off_0_dis_1_com];
	[btn_state_off_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:0.0 isIncluding:false andRightEndPoint:1.0 including:true withCompareResult:^{
		[self.btn_state_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_off_0_controller setIsAccessible:true];
		[self.btn_state_off_0_controller setIsVisible:true];
		[self.btn_state_off_0_controller setIsValid:true];
		
	}]];
	[btn_state_off_0_dis_1_com addRange:[[MWRange alloc] initWithLeftEndpoint:1.0 isIncluding:false andRightEndPoint:2.0 including:true withCompareResult:^{
		[self.btn_state_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
		[self.btn_state_off_0_controller setIsAccessible:true];
		[self.btn_state_off_0_controller setIsVisible:true];
		[self.btn_state_off_0_controller setIsValid:true];
		
	}]];
	
	MWValueOutputAnimation *lbl_power_value_0_valOut_1 = [[MWValueOutputAnimation alloc] initWithPreText:NULL PostText:NULL Replace:true ForWidget:self.lbl_power_value_0_controller];
	[self registerAnimation:lbl_power_value_0_valOut_1 ForSignal:@"power_has_changed"];
	
	MWValueOutputAnimation *lbl_timestamp_0_valOut_1 = [[MWValueOutputAnimation alloc] initWithPreText:NULL PostText:NULL Replace:true ForWidget:self.lbl_timestamp_0_controller];
	[self registerAnimation:lbl_timestamp_0_valOut_1 ForSignal:@"timestamp_power_has_changed"];
	
	MWDiscreteAnimation *lbl_nightmode_value_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.lbl_nightmode_value_0_controller];
	[self registerAnimation:lbl_nightmode_value_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *lbl_nightmode_value_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.lbl_nightmode_value_0_controller setCurrentValue:@"on"];
	} FalseResult:^{[self.lbl_nightmode_value_0_controller setCurrentValue:@"off"];
	}];
	[lbl_nightmode_value_0_dis_1 addComparator:lbl_nightmode_value_0_dis_1_com];
	
	MWDiscreteAnimation *btn_nightmode_on_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.btn_nightmode_on_0_controller];
	[self registerAnimation:btn_nightmode_on_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *btn_nightmode_on_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.btn_nightmode_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
	[self.btn_nightmode_on_0_controller setIsAccessible:false];
	[self.btn_nightmode_on_0_controller setIsVisible:true];
	[self.btn_nightmode_on_0_controller setIsValid:true];
	} FalseResult:^{[self.btn_nightmode_on_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
	[self.btn_nightmode_on_0_controller setIsAccessible:true];
	[self.btn_nightmode_on_0_controller setIsVisible:true];
	[self.btn_nightmode_on_0_controller setIsValid:true];
	}];
	[btn_nightmode_on_0_dis_1 addComparator:btn_nightmode_on_0_dis_1_com];
	
	MWDiscreteAnimation *btn_nightmode_off_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.btn_nightmode_off_0_controller];
	[self registerAnimation:btn_nightmode_off_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *btn_nightmode_off_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.btn_nightmode_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
	[self.btn_nightmode_off_0_controller setIsAccessible:true];
	[self.btn_nightmode_off_0_controller setIsVisible:true];
	[self.btn_nightmode_off_0_controller setIsValid:true];
	} FalseResult:^{[self.btn_nightmode_off_0_controller setRotationWithDirection:MWRotationDirectionRight andVelocity:MWRotationVelocityOff];
	[self.btn_nightmode_off_0_controller setIsAccessible:false];
	[self.btn_nightmode_off_0_controller setIsVisible:true];
	[self.btn_nightmode_off_0_controller setIsValid:true];
	}];
	[btn_nightmode_off_0_dis_1 addComparator:btn_nightmode_off_0_dis_1_com];
	
	MWDiscreteAnimation *sky_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.sky_0_controller];
	[self registerAnimation:sky_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *sky_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.sky_0_controller setBackgroundColor:[UIColor colorWithRed:0.0 green:0.2 blue:0.29411764705882354 alpha:1.0]];
	[self.sky_0_controller setForegroundColor:[UIColor colorWithRed:0.9529411764705882 green:0.9529411764705882 blue:0.9568627450980393 alpha:1.0]];
	} FalseResult:^{[self.sky_0_controller setBackgroundColor:[UIColor colorWithRed:0.8274509803921568 green:0.9372549019607843 blue:0.9764705882352941 alpha:1.0]];
	[self.sky_0_controller setForegroundColor:[UIColor colorWithRed:0.0 green:0.2 blue:0.29411764705882354 alpha:1.0]];
	}];
	[sky_0_dis_1 addComparator:sky_0_dis_1_com];
	
	MWIndicatorAnimation *trend_8e67_0_ind_1 = [[MWIndicatorAnimation alloc] initWithLabel:@"power_indicator" andSignalName:@"power_has_changed" ForWidget:self.trend_8e67_0_controller];
	[self registerAnimation:trend_8e67_0_ind_1 ForSignal:@"power_has_changed"];
	[self.trend_8e67_0_controller registerDataSetWithLabel:@"power_indicator" forSignal:@"power_has_changed"];
	
	MWIndicatorAnimation *trend_c9a4_0_ind_1 = [[MWIndicatorAnimation alloc] initWithLabel:@"nightmode_indicator" andSignalName:@"nightmode_has_changed" ForWidget:self.trend_c9a4_0_controller];
	[self registerAnimation:trend_c9a4_0_ind_1 ForSignal:@"nightmode_has_changed"];
	[self.trend_c9a4_0_controller registerDataSetWithLabel:@"nightmode_indicator" forSignal:@"nightmode_has_changed"];
	
	MWIndicatorAnimation *trend_da6d_0_ind_1 = [[MWIndicatorAnimation alloc] initWithLabel:@"state_indicator" andSignalName:@"state_has_changed" ForWidget:self.trend_da6d_0_controller];
	[self registerAnimation:trend_da6d_0_ind_1 ForSignal:@"state_has_changed"];
	[self.trend_da6d_0_controller registerDataSetWithLabel:@"state_indicator" forSignal:@"state_has_changed"];
	
	MWDiscreteAnimation *label_df18_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.label_df18_0_controller];
	[self registerAnimation:label_df18_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *label_df18_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.label_df18_0_controller setForegroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:1.0]];
	} FalseResult:^{[self.label_df18_0_controller setForegroundColor:[UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:1.0]];
	}];
	[label_df18_0_dis_1 addComparator:label_df18_0_dis_1_com];
	
	MWDiscreteAnimation *label_fd57_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.label_fd57_0_controller];
	[self registerAnimation:label_fd57_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *label_fd57_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.label_fd57_0_controller setForegroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:1.0]];
	} FalseResult:^{[self.label_fd57_0_controller setForegroundColor:[UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:1.0]];
	}];
	[label_fd57_0_dis_1 addComparator:label_fd57_0_dis_1_com];
	
	MWDiscreteAnimation *label_8a63_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.label_8a63_0_controller];
	[self registerAnimation:label_8a63_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *label_8a63_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.label_8a63_0_controller setForegroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:1.0]];
	} FalseResult:^{[self.label_8a63_0_controller setForegroundColor:[UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:1.0]];
	}];
	[label_8a63_0_dis_1 addComparator:label_8a63_0_dis_1_com];
	
	MWDiscreteAnimation *label_3641_0_dis_1 = [[MWDiscreteAnimation alloc] initForWidget:self.label_3641_0_controller];
	[self registerAnimation:label_3641_0_dis_1 ForSignal:@"nightmode_has_changed"];
	MWSimpleComparator *label_3641_0_dis_1_com = [[MWSimpleComparator alloc] initWithOperator:MWCompareOperatorEqual Type:MWCompareTypeBool Value:@YES TrueResult:^{[self.label_3641_0_controller setBackgroundColor:[UIColor colorWithRed:0.0 green:0.2 blue:0.29411764705882354 alpha:1.0]];
	[self.label_3641_0_controller setForegroundColor:[UIColor colorWithRed:0.9490196078431372 green:0.3803921568627451 blue:0.00392156862745098 alpha:1.0]];
	} FalseResult:^{[self.label_3641_0_controller setBackgroundColor:[UIColor colorWithRed:0.8274509803921568 green:0.9372549019607843 blue:0.9764705882352941 alpha:1.0]];
	[self.label_3641_0_controller setForegroundColor:[UIColor colorWithRed:0.9490196078431372 green:0.3803921568627451 blue:0.00392156862745098 alpha:1.0]];
	}];
	[label_3641_0_dis_1 addComparator:label_3641_0_dis_1_com];
}

- (void)initializeInteractions {
	
	[self.btn_state_on_0_controller addEffect:[[MWWriteFixedIntegerDataEffect alloc] initWithTargetServer:@"windmill_server_hub" DataItem:@"state" FixedIntegerValue:1] ForInteractionType:MWInteractionTypeTap];	
	
	[self.btn_state_off_0_controller addEffect:[[MWWriteFixedIntegerDataEffect alloc] initWithTargetServer:@"windmill_server_hub" DataItem:@"state" FixedIntegerValue:3] ForInteractionType:MWInteractionTypeTap];	
	
	[self.btn_nightmode_on_0_controller addEffect:[[MWWriteFixedBooleanDataEffect alloc] initWithTargetServer:@"windmill_server_hub" DataItem:@"nightMode" FixedBooleanValue:true] ForInteractionType:MWInteractionTypeTap];	
	
	[self.btn_nightmode_off_0_controller addEffect:[[MWWriteFixedBooleanDataEffect alloc] initWithTargetServer:@"windmill_server_hub" DataItem:@"nightMode" FixedBooleanValue:false] ForInteractionType:MWInteractionTypeTap];	
	
	[self.image_90f4_0_controller addEffect:[[MWNavigationEffect alloc] initWithFlowName:@"overview_alarm"] ForInteractionType:MWInteractionTypeTap];	
	
	[self.label_7df8_0_controller addEffect:[[MWNavigationEffect alloc] initWithFlowName:@"overview_alarm"] ForInteractionType:MWInteractionTypeTap];	
}

@end
