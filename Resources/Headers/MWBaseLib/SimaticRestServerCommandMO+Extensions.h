//
//  SimaticRestServerCommandMO+Extensions.h
//  MovisaBaseLib
//
//  Created by Georgij on 23/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SimaticRestServerCommandMO.h"

typedef NS_ENUM(NSUInteger, SimaticRestCommandType) {
    FLASH_LEDS,
    CHANGE_OPERATING_MODE,
    GET_API_VERSION_NUMBER,
    GET_BASIC_PLC_INFORMATION,
    GET_MODULE_INFORMATION,
    GET_AS_LOG_ENTRIES,
    GET_AS_LOG_ENTRY_LONG_DESCRIPTION
};

@interface SimaticRestServerCommandMO (Extensions)

- (void)setCommandType:(SimaticRestCommandType) commandType;
- (SimaticRestCommandType)commandType;

@end
