//
//  MovisaDiscreteAnimation.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import "MovisaAnimation.h"
#import "MovisaComparison.h"

@interface MovisaDiscreteAnimation : MovisaAnimation {
    NSMutableArray *_comparators;
}

-(void)addComparator:(MovisaComparison *)comparator;

@end
