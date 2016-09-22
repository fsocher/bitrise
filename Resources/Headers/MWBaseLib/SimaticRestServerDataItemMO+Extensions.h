//
//  SimaticRestServerDataItemMO+Extensions.h
//  MovisaBaseLib
//
//  Created by Georgij on 22/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SimaticRestServerDataItemMO.h"

typedef NS_OPTIONS(NSUInteger, SimaticFormatFlags) {
    SIMATIC_FORMAT_BOOL_FLAG            = (1 << 0),
    SIMATIC_FORMAT_BIN_FLAG             = (1 << 1),
    SIMATIC_FORMAT_DEC_FLAG             = (1 << 2),
    SIMATIC_FORMAT_DEC_UNSIGNED_FLAG    = (1 << 3),
    SIMATIC_FORMAT_HEX_FLAG             = (1 << 4),
    SIMATIC_FORMAT_CHARACTER_FLAG       = (1 << 5),
    SIMATIC_FORMAT_FLOATING_POINT_FLAG  = (1 << 6),
    SIMATIC_FORMAT_TIME_FLAG            = (1 << 7),
    SIMATIC_FORMAT_TIME_OF_DAY_FLAG     = (1 << 8)
};

@interface SimaticRestServerDataItemMO (Extensions)

- (void)setFormatWithFlag:(SimaticFormatFlags) flag;

- (void)setValidFormatsWithFlags:(SimaticFormatFlags) flags;
- (NSString*)getValidFormatsAsString;
- (NSArray*)getValidFormats;

@end
