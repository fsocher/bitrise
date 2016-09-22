//
//  DataItemMO+Extensions.h
//  MovisaBaseLib
//
//  Created by Georgij on 10/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataItemMO.h"
#import "DimensionMO.h"
#import "DataItemValueMO+Extensions.h"

typedef NS_ENUM(NSUInteger, DIType_t) {
    DIType_UNKNOWN,
    DIType_INTEGER,
    DIType_DOUBLE,
    DIType_STRING,
    DIType_BOOLEAN
};

@interface DataItemMO (Extensions)

- (DataItemValueMO*) lastValue;

- (void)setDataItemType:(DIType_t) dataItemType;
- (DIType_t)dataItemType;

@end
