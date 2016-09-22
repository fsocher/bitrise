//
//  UIViewController+MWValueContainingWidget.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/29/12.
//
//

#import <UIKit/UIKit.h>

@interface UIViewController (MWValueContainingWidget)

-(void)setCurrentValue:(NSString *)value;
-(NSString *)currentValue;

@end
