//
//  MovisaRepresentationBorder.h
//  MovisaViz
//
//  Created by Christian Schäfer on 30.06.13.
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
#import <UIKit/UIKit.h>
#import "MovisaScaledProperty.h"

typedef enum {
    BORDER_TYPE_DASHED,
    BORDER_TYPE_DOTTED,
    BORDER_TYPE_DOUBLE,
    BORDER_TYPE_GROOVE,
    BORDER_TYPE_HIDDEN,
    BORDER_TYPE_INSET,
    BORDER_TYPE_OUTSET,
    BORDER_TYPE_RIDGE,
    BORDER_TYPE_SOLID,   
}BorderTypeConstant;

/** Representation Object to define the Border for UIComponents */
@interface MovisaRepresentationBorder : NSObject

/// the BorderStyle (solid, dotted, ...)
@property (nonatomic) BorderTypeConstant borderType;
/// the Color of the Border
@property (nonatomic, retain) UIColor *lineColor;
/// the Padding of the Border
@property (nonatomic, retain) MovisaScaledProperty *padding;
/// the Thickness of the Border
@property (nonatomic, retain) MovisaScaledProperty *width;

/** Initializer
 * @param color the Color of the Border
 * @param borderType the BorderType (solid, dotted, ..)
 * @param pad the Padding of the Border
 * @param w the Thickness of the Border
 */
-(id)initWithLineColor:(UIColor *)color BorderType:(BorderTypeConstant)borderType Padding:(MovisaScaledProperty *)pad Width:(MovisaScaledProperty *)w;

@end
