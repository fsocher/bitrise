//
//  MWWidgetViewDelegate.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/30/12.
//
//

#import <Foundation/Foundation.h>

@class MWWidgetView;

@protocol MWWidgetViewDelegate <NSObject>

-(void)viewDidReceiveSingleTap:(MWWidgetView *)view;
-(void)viewDidReceiveDoubleTap:(MWWidgetView *)view;
-(void)viewDidReceiveLongTap:(MWWidgetView *)view;

@end
