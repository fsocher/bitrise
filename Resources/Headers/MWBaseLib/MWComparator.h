//
//  MWComparator.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 22.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MWComparator <NSObject>

- (NSArray *)evaluate:(id)value;

@end
