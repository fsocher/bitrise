//
//  MWRange.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 15.10.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MWRange : NSObject

@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) BOOL leftIncluding;
@property (nonatomic) BOOL rightIncluding;
@property (nonatomic) id compareResult;

- (id)initWithLeftEndpoint:(double)left isIncluding:(BOOL)leftIncluding andRightEndPoint:(double)right including:(BOOL)rightIncluding withCompareResult:(id)compareResult;

@end
