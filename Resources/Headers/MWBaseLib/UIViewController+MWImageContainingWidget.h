//
//  UIViewController+MWImageContainingWidget.h
//  MovisaViz
//
//  Created by Christian Schäfer on 11.06.13.
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


#import <Foundation/Foundation.h>
#import "MWImageResource.h"

@interface UIViewController (MWImageContainingWidget)

/// sets ImageResource for Widget
///@param imageResource the new ImageResource to set
-(void)setImageResource:(MWImageResource*)imageResource;

/// gets ImageResource of Widget
-(MWImageResource*)ImageResource;


@end
