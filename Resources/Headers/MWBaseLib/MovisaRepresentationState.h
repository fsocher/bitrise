//
//  MovisaRepresentationState.h
//  MovisaBaseLib
//
//  Created by Stefan Hennig on 01/04/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MovisaRepresentationRotationState.h"
#import "MovisaRepresentationStateCfg.h"

@interface MovisaRepresentationState : NSObject {
    BOOL _accessible;
    BOOL _valid;
    BOOL _visible;

    MovisaRepresentationRotationState *_rotation;
}

@property (nonatomic) BOOL isAccessible;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVisible;

@property (nonatomic, retain) MovisaRepresentationRotationState *rotation;

-(id) initWithConfig:(void (^)(MovisaRepresentationStateCfg *)) configBlock;

@end
