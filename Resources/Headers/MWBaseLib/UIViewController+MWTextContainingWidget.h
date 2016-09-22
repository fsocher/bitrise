//
//  UIViewController+MWTextContainingWidget.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/24/12.
//
//

#import <UIKit/UIKit.h>

#import "MovisaRepresentationFormat.h"
#import "MWTextDefinition.h"

@interface UIViewController (MovisaTextContainingWidget)

// Format
-(void)setFormat:(MovisaRepresentationFormat *)format;
-(MovisaRepresentationFormat *)format;

// Text Definition
-(void)setTextDefinition:(MWTextDefinition *)textDefinition;
-(MWTextDefinition *)textDefinition;

@end
