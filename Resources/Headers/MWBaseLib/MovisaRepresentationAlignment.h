//
//  MovisaRepresentationAlignment.h
//  MovisaViz
//
//  Created by Christian Schäfer on 05.06.13.
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

typedef enum{
    HORIZONTAL_ALIGNMENT_CENTER,
    HORIZONTAL_ALIGNMENT_LEFT,
    HORIZONTAL_ALIGNMENT_RIGHT
} HorizontalAlignmentConstant;

typedef enum{
    VERTICAL_ALIGNMENT_SUPER,
    VERTICAL_ALIGNMENT_BOTTOM,
    VERTICAL_ALIGNMENT_MIDDLE,
    VERTICAL_ALIGNMENT_SUB,
    VERTICAL_ALIGNMENT_TOP,    
} VerticalAlignmentConstant;

@interface MovisaRepresentationAlignment : NSObject

@property (nonatomic) VerticalAlignmentConstant verticalAlignment;
@property (nonatomic) HorizontalAlignmentConstant horizontalAlignment;

-(id)initWithHorizontalAlignment:(HorizontalAlignmentConstant)horAl verticalAlignment:(VerticalAlignmentConstant)verAl;


@end
