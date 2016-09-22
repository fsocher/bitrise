//
//  MWEffect.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 28.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	Protocol, which is implemented by all effects
 */
@protocol MWEffect <NSObject>

- (void)trigger;

@end