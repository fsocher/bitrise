//
//  MWRepresentationSize.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/24/12.
//
//

#import <Foundation/Foundation.h>

#import "MovisaScaledProperty.h"

@interface MWRepresentationSize : NSObject {
    MovisaScaledProperty *_height;
    MovisaScaledProperty *_width;
}

@property (nonatomic, retain) MovisaScaledProperty *height;
@property (nonatomic, retain) MovisaScaledProperty *width;

-(id)initWithSizeHeight:(MovisaScaledProperty*)height sizeWidth:(MovisaScaledProperty*)width;

@end
