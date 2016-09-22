//
//  MovisaRepresentationRotationState.h
//  MovisaBaseLib
//
//  Created by Stefan Hennig on 03/04/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

// The velocity constants define the duration of one complete turn in seconds.
typedef enum {
    OFF = 10000,
    SLOW = 8,
    MODERATE = 4,
    FAST = 2
} Velocity ;

typedef enum {
    LEFT,
    RIGHT
} RotationDirection;

@interface MovisaRepresentationRotationState : NSObject

@property (nonatomic) Velocity velocity;
@property (nonatomic) RotationDirection direction;

-(id)initWithVelocity:(Velocity)velocity direction:(RotationDirection)direction;

@end
