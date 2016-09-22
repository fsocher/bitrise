//
//  MovisaRepresentationStateBuilderCfg.h
//  MovisaBaseLib
//
//  Created by Stefan Hennig on 03/04/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovisaRepresentationRotationState.h"

@interface MovisaRepresentationStateCfg : NSObject

@property (nonatomic) BOOL isAccessible;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVisible;
@property (nonatomic, retain) MovisaRepresentationRotationState *rotation;

@end
