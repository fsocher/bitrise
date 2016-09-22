//
//  MovisaImageAnimation.h
//  MovisaBaseLib
//
//  Created by Georgij on 29/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import "MovisaAnimation.h"

typedef NS_ENUM(NSUInteger, MovisaImageAnimType) {
    CONTINUOUS_ANIMATION_LOOP
};

@interface MovisaImageAnimation : MovisaAnimation

@property (nonatomic, readonly) MovisaImageAnimType type;

+ (MovisaImageAnimation*)animationOfType:(MovisaImageAnimType) type images:(NSArray*) imageUrls forSignalName:(NSString *)signal usingPropertyOfSignal:(NSString *)propertyOrNil;
+ (MovisaImageAnimation*)animationOfType:(MovisaImageAnimType) type images:(NSArray*) imageUrls imagesStartIndex:(NSUInteger) startIndex forSignalName:(NSString *)signal usingPropertyOfSignal:(NSString *)propertyOrNil;

@end
