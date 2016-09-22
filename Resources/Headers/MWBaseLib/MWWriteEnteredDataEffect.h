//
//  MWWriteEnteredDataEffect.h
//  SchildknechtDemo
//
//  Created by Christian Schäfer on 07.12.13.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2013] MONKEY WORKS
//	All Rights Reserved.
//
//	NOTICE:  All information contained herein is, and remains
//	the property of MONKEY WORKS and its suppliers,
//	if any.  The intellectual and technical concepts contained
//	herein are proprietary to MONKEY WORKS GmbH
//	and its suppliers and may be covered by German and Foreign Patents,
//	patents in process, and are protected by trade secret or copyright law.
//	Dissemination of this information or reproduction of this material
//	is strictly forbidden unless prior written permission is obtained
//	from MONKEY WORKS.
//
//


#import "MWWriteDataItemEffect.h"
#import "UIViewController+MWValueContainingWidget.h"
#import "DataItemValidationInformation.h"

@interface MWWriteEnteredDataEffect : MWWriteDataItemEffect

@property (nonatomic, retain) UIViewController *valueInputWidget;
@property (nonatomic, retain) NSString *currentValue;
@property (nonatomic, retain) DataItemValidationInformation *validationInformation;


-(id)initWithTargetServer:(NSString*)serverName DataItem:(NSString*)di ValueInputWidget:(UIViewController*)inputComponent;

@end
