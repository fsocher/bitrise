//
//  UIView+MWTapDetectingView.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/29/12.
//
//

#import <UIKit/UIKit.h>

#import "MWWidgetViewDelegate.h"

@interface UIView (MWTapDetectingView)

-(void)setDelegate:(id)delegate;
-(id)delegate;

-(void)touchesBeganOnMovisaView:(NSSet *)touches withEvent:(UIEvent *)event;
-(void)touchesEndedOnMovisaView:(NSSet *)touches withEvent:(UIEvent *)event;
@end
