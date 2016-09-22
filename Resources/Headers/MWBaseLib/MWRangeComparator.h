//
//  MWRangeComparator.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 02.10.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWComparator.h"
#import "MWCompareResult.h"
#import "MWRange.h"

@interface MWRangeComparator : NSObject <MWComparator>

- (id)initWithLeftIncluding:(BOOL)leftIncluding leftLimit:(double)left andRightIncluding:(BOOL)rightIncluding rightLimit:(double)right andOuterLeftResult:(id)leftOuterResult andOuterRightResult:(id)rightOuterResult;
- (void)addRange:(MWRange *)range;

@end
