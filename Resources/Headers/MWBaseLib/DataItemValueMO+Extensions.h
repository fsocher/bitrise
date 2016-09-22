//
//  DataItemValueMO+Comparable.h
//  MovisaBaseLib
//
//  Created by Georgij on 10/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataItemValueMO.h"

@interface DataItemValueMO (Extensions)

/** 
 * Compares 2 DataItemValues (of the same DataType) with eachother <br/>
 * returns true if the input-value is equal to this DataItemValue <br/>
 * returns false if the input-value is NOT equal to this DataItemValue or NOT the same DataType<br/>
 * @param dataItemValue the DataItemValue that should be compared to this one
 */
- (BOOL)isValueEqualTo:(DataItemValueMO*) aDataItemValue;
- (BOOL)isValueEqualToValue:(id) aDataItemValue;
+ (BOOL)isValue:(id) value1 EqualToValue:(id) value2;
@end
