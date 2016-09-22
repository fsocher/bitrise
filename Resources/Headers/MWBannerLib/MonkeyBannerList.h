//
//  MonkeyBannerList.h
//  MonkeyBanners
//
//  Created by Maximilian Winkler on 11.06.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MonkeyBannerCategory.h"

@interface MonkeyBannerList : NSObject

@property (nonatomic) NSMutableDictionary *objects;

- (NSNumber *)getCounterForCategory:(MonkeyBannerCategory *)category;
- (void)addCategory:(MonkeyBannerCategory *)category;

- (void)addObject:(NSObject *)object ForCategory:(MonkeyBannerCategory *)category;
- (void)removeObject:(NSObject *)object ForCategory:(MonkeyBannerCategory *)category;

- (NSObject *)getAndRemoveFirstObjectForCategory:(MonkeyBannerCategory *)category;
- (NSArray *)getAndRemoveAllObjectsForCategory:(MonkeyBannerCategory *)category;

- (NSArray *)getAllObjects;

- (void)resetList;

@end
