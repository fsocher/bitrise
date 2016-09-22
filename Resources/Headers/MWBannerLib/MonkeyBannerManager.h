//
//  MonkeyBannerManager.h
//  MonkeyBanners
//
//  Created by Maximilian Winkler on 11.06.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MonkeyBannerCategory.h"

@interface MonkeyBannerManager : NSObject

- (NSArray *)knownCategories;
- (BOOL)addCategory:(MonkeyBannerCategory *)category;

- (void)requestBannerOfCategory:(MonkeyBannerCategory *)category ForView:(UIView *)view WithHeader:(NSString *)header AndText:(NSString *)text;
- (void)requestBannerOfCategory:(MonkeyBannerCategory *)category ForView:(UIView *)view WithHeader:(NSString *)header AndText:(NSString *)text AndTappedBlock:(id)tappedBlock;

- (void)removeAllBannersForView:(UIView *)view;

@end
