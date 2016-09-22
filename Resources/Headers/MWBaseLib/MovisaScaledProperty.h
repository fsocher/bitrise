//
//  MovisaScaledProperty.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/9/12.
//
//

#import <Foundation/Foundation.h>

typedef enum {
    CENTIMETER,
    EM,
    EX,
    INCH,
    MILLIMETER,
    NONE,
    PICA,
    PERCENT,
    POINT,
    PIXEL
} UIUnit;

@interface MovisaScaledProperty : NSObject {
    float _value;
    UIUnit _unit;
}

@property (nonatomic) float value;
@property (nonatomic) UIUnit unit;

-(id)initWithValue:(float)value measuredIn:(UIUnit)unit;

@end
