//
//  MovisaDropDownOption.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/27/12.
//
//

#import <Foundation/Foundation.h>

@interface MWDropdownOption : NSObject {
    NSString *_value;
    NSString *_label;
}

@property (nonatomic, retain) NSString *value;
@property (nonatomic, retain) NSString *label;

-(id)initWithLabel:(NSString *)label forValue:(NSString *)value;

@end
