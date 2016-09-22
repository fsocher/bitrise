//
//  MovisaDataItemEffect.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/30/12.
//
//

#import <Foundation/Foundation.h>
#import "MovisaEffect.h"
#import "MWEffect.h"

@interface MWDataItemEffect : MovisaEffect <MWEffect> {
    NSString *_signalName;
    NSMutableDictionary *_payload;
}

/// represents the different WriteDataItemEffects
typedef enum {
    ENTERED,
    FIXED_BOOLEAN,
    FIXED_INTEGER,
    FIXED_RATIONAL,
    FIXED_STRING,
} ValueDataType;

@property (nonatomic, retain) NSString *signalName;
@property (nonatomic, retain) NSMutableDictionary *payload;

@end
