//
//  MWCompareResult.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 22.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MWResultType) {
    MWResultTypeText,
    MWResultTypeImage,
    MWResultTypeRepresentation,
};

@interface MWCompareResult : NSObject

@property (nonatomic) id result;
@property (nonatomic) MWResultType type;

- (id)initWithResult:(id)object;

@end
