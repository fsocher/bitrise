//
//  MonkeyBannerViewController.h
//  MonkeyBanner
//
//  Created by Maximilian Winkler on 29.06.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MonkeyBannerViewController : UIViewController {
    __weak UILabel *labelHeader;
    __weak UILabel *labelText;
    __weak UIView *lineHeader;
    __weak UIView *lineFooter;
}

@property (nonatomic) int position;
@property (nonatomic, copy) void(^tappedBlock)(void);

@property (weak, nonatomic) IBOutlet UILabel *labelHeader;
@property (weak, nonatomic) IBOutlet UILabel *labelText;
@property (weak, nonatomic) IBOutlet UIView *lineHeader;
@property (weak, nonatomic) IBOutlet UIView *lineFooter;


- (void)moveUnderStatusBar;
- (void)movePositionDown;
- (void)movePositionUp;

- (void)setBannerWidth:(CGFloat)width;
- (void)setBannerColor:(UIColor *)color;

- (void)setHeader:(NSString *)header;
- (void)setText:(NSString *)text;

- (void)onClick:(UITapGestureRecognizer *)tapGestureRecognizer;
@end
