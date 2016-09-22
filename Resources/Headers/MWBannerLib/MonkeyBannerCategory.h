//
//  MonkeyBannerCategory.h
//  MonkeyBanners
//
//  Created by Maximilian Winkler on 11.06.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MonkeyBannerCategory : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) double displayTime;
@property (nonatomic) int maximalBanners;
@property (nonatomic) UIColor *bannerColor;
@property (nonatomic) int bannerDisplayed;

- (id)initWithName:(NSString *)name;
- (id)initWithName:(NSString *)name DisplayTime:(int)displayTime;
- (BOOL)setBannerColorWithName:(NSString *)colorName;

@end
