//
//  MWIndicatorAnimation.h
//  MWBaseLib
//
//  Created by Lars Beier on 19.01.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MWAnimation.h"

@interface MWIndicatorAnimation : NSObject <MWAnimation>

- (id)initWithLabel:(NSString *)label andSignalName:(NSString *)signalName ForWidget:(UIViewController *)controller;

@end
