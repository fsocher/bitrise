//
//  CALayer+XibConfiguration.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 23.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface UIView (XibConfiguration) 

@property (nonatomic) IBInspectable UIColor *borderColor;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable CGFloat cornerRadius;

@end
