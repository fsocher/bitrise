//
//  MWViewController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 24.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "MWEffect.h"
#import "MWInteractionType.h"
#import "MWWriteEnteredDataEffect.h"
#import "MWBaseLib.h"

@interface MWViewController : UIViewController {
    NSString *_currentValue;
}

@property (nonatomic, nullable) NSString *currentValue;

typedef NS_ENUM(NSUInteger, MWRotationDirection) {
    MWRotationDirectionRight,
    MWRotationDirectionLeft
};

typedef NS_ENUM(NSUInteger, MWRotationVelocity) {
    MWRotationVelocityOff,
    MWRotationVelocitySlow,
    MWRotationVelocityModerate,
    MWRotationVelocityFast
};

// Rotation
- (void)rotateOnce;
- (void)rotateAgain;

// Interaction
- (void)addEffect:(nonnull id<MWEffect>)effect ForInteractionType:(MWInteractionType)interactionType;

// Representation
- (void)setRotationWithDirection:(MWRotationDirection)direction andVelocity:(MWRotationVelocity)velocity;
- (void)setPositionX:(nullable NSNumber *)newX;
- (nonnull NSNumber *)positionX;
- (void)setPositionY:(nullable NSNumber *)newY;
- (nonnull NSNumber *)positionY;
- (void)setPositionZ:(nullable NSNumber *)newZ;
- (nonnull NSNumber *)positionZ;

- (void)setWidth:(nullable NSNumber *)newWidth;
- (nonnull NSNumber *)width;
- (void)setHeight:(nullable NSNumber *)newHeight;
- (nonnull NSNumber *)height;

- (void)setForegroundColor:(nonnull UIColor *)color;
- (nullable UIColor *)foregroundColor;
- (void)setBackgroundColor:(nonnull UIColor *)color;
- (nullable UIColor *)backgroundColor;

- (void)setIsVisible:(BOOL)visible;
- (BOOL)isVisible;
- (void)setIsAccessible:(BOOL)accessible;
- (BOOL)isAccessible;
- (void)setIsValid:(BOOL)valid;
- (BOOL)isValid;

- (void)setBorderWidth:(nonnull NSNumber *)borderWidth;
- (nonnull NSNumber *)borderWidth;
- (void)setBorderColor:(nonnull UIColor *)borderColor;
- (nullable UIColor *)borderColor;

- (void)updateRepresentationValues:(nonnull NSDictionary *)dict;

- (void)fireSubmitEffects;
- (void)fireTapEffects;
- (void)fireDoubleTapEffects;
- (void)fireLongTapEffects;


@end
