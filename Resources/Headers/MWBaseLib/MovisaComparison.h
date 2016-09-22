//
//  MovisaComparator.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import <Foundation/Foundation.h>

@interface MovisaComparison : NSObject {
    void (^_trueEvaluation)(void);
}

@property (nonatomic, copy) void (^trueEvaluation)(void);

-(id)init;
-(id)initWithTrueEvaluation:(void (^)(void))trueEvaluation;

-(void)evaluate:(NSObject *)value;

@end
