//
//  MonkeyBannerRequest.h
//  MonkeyBanners
//
//  Created by Maximilian Winkler on 11.06.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MonkeyBannerCategory.h"

@interface MonkeyBannerRequest : NSObject

@property (nonatomic) UIView *view;
@property (nonatomic) NSString *header;
@property (nonatomic) NSString *text;
@property (nonatomic) MonkeyBannerCategory *category;
@property (nonatomic, copy) void(^tappedBlock)(void);

- (id)initWithView:(UIView *)view Header:(NSString *)header Text:(NSString *)text Category:(MonkeyBannerCategory *)category;

@end
