//
//  MWContinuousAnimation.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 21.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MWAnimation.h"
#import "MWViewController.h"

typedef NS_ENUM(NSUInteger, MWContinuousAnimationProperty) {
    MWContinuousAnimationPropertyWidth,
    MWContinuousAnimationPropertyHeight,
    MWContinuousAnimationPropertyPositionX,
    MWContinuousAnimationPropertyPositionY,
    MWContinuousAnimationPropertyPositionZ
};

@interface MWContinuousAnimation : NSObject <MWAnimation>

- (id)initWithPropertyToAnimate:(MWContinuousAnimationProperty)property ForWidget:(MWViewController *)controller;

@end
