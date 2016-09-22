//
//  MWSimpleComparator.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 22.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWComparator.h"
#import "MWCompareResult.h"

typedef NS_ENUM(NSUInteger, MWCompareOperator) {
    MWCompareOperatorEqual,
    MWCompareOperatorNot,
    MWCompareOperatorLarger,
    MWCompareOperatorLargerEqual,
    MWCompareOperatorLess,
    MWCompareOperatorLessEqual
};

typedef NS_ENUM(NSUInteger, MWCompareType) {
    MWCompareTypeBool,
    MWCompareTypeNumber,
    MWCompareTypeString
};

@interface MWSimpleComparator : NSObject <MWComparator>

- (id)initWithOperator:(MWCompareOperator)operator Type:(MWCompareType)type Value:(id)value TrueResult:(id)trueResult FalseResult:(id)falseResult;

@end
