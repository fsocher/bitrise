//
//  MWValueOutputAnimation.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 21.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWAnimation.h"

@interface MWValueOutputAnimation : NSObject <MWAnimation>

- (id)initWithPreText:(NSString *)preTextName PostText:(NSString *)postTextName Replace:(BOOL)replace ForWidget:(UIViewController *)controller;

@end
