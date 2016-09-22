//
//  MovisaContinuousAnimation.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import "MovisaAnimation.h"

@interface MovisaContinuousAnimation : MovisaAnimation {
    NSString *_propertyToAnimate;
}

@property (nonatomic, retain) NSString *propertyToAnimate;

@end
