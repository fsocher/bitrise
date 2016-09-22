//
//  MovisaRepresentationPosition.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/9/12.
//
//

#import <Foundation/Foundation.h>

#import "MovisaScaledProperty.h"

@interface MovisaRepresentationPosition : NSObject {
    MovisaScaledProperty *_x;
    MovisaScaledProperty *_y;
    MovisaScaledProperty *_z;
}

@property (nonatomic) MovisaScaledProperty *x;
@property (nonatomic) MovisaScaledProperty *y;
@property (nonatomic) MovisaScaledProperty *z;

-(id)initWithCoordinateX:(MovisaScaledProperty *)x coodinateY:(MovisaScaledProperty *)y coordinateZ:(MovisaScaledProperty *)z;

@end