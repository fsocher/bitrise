//
//  MovisaRangeComparison.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import "MovisaComparison.h"

@interface MovisaRangeComparison : MovisaComparison {
    void (^_leftFalseEvaluation)(void);
    void (^_rightFalseEvaluation)(void);
    BOOL (^_leftTerm)(NSObject *);
    BOOL (^_rightTerm)(NSObject *);
}

@property (nonatomic, copy) void (^leftFalseEvaluation)(void);
@property (nonatomic, copy) void (^rightFalseEvaluation)(void);
@property (nonatomic, copy) BOOL (^leftTerm)(NSObject *);
@property (nonatomic, copy) BOOL (^rightTerm)(NSObject *);

-(id)init;
-(id)initWithTrueEvaluation:(void (^)(void))trueEvaluation leftFalseEvaluation:(void (^)(void))leftFalseEvaluation rightFalseEvaluation:(void (^)(void))rightFalseEvaluation;

@end
