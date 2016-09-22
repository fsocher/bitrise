//
//  MovisaSimpleComparator.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import "MovisaComparison.h"

@interface MovisaSimpleComparison : MovisaComparison {
    void (^_falseEvaluation)(void);
    BOOL (^_term)(NSObject *);
}

@property (nonatomic, copy) void (^falseEvaluation)(void);
@property (nonatomic, copy) BOOL (^term)(NSObject *);

-(id)init;
-(id)initWithTrueEvaluation:(void (^)(void))trueEvaluation falseEvaluation:(void (^)(void))falseEvaluation;


@end
