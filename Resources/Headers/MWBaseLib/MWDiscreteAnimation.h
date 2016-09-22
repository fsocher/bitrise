//
//  MWDiscreteAnimation.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 21.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MWAnimation.h"
#import "MWComparator.h"
#import "MWCompareResult.h"
#import "MWSimpleComparator.h"

@interface MWDiscreteAnimation : NSObject <MWAnimation>

- (id)initForWidget:(UIViewController *)controller;
- (void)addComparator:(id<MWComparator>)comparator;

@end
