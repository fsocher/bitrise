//
//  MovisaButtonViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/8/12.
//
//

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWTextContainingWidget.h"
#import "UIViewController+MWWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWViewController.h"

#import "MWButtonViewController.h"

@class MWButtonView;

@interface MWButtonViewController : MWViewController {
    MWButtonView *_buttonView;
}

@property (nonatomic, retain) MWButtonView *buttonView;

- (void)setImage:(UIImage *)image;

- (UIImage *)imageWithColor:(UIColor *)color;
- (UIColor *)lightenColor:(UIColor *)color by:(CGFloat)scale;
- (UIColor *)darkenColor:(UIColor *)color by:(CGFloat)scale;

-(void)setLabel:(NSString *)label;
-(NSString *)label;

@end
