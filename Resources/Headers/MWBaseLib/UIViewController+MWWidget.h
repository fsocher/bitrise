//
//  UIView+MovisaWidget.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/9/12.
//
//

#import <UIKit/UIKit.h>

#import "MovisaAnimation.h"
#import "MovisaInteraction.h"
#import "MWTextDefinition.h"

#import "MovisaRepresentationAlignment.h"
#import "MovisaRepresentationBorder.h"
#import "MovisaRepresentationColor.h"
#import "MovisaRepresentationPosition.h"
#import "MWRepresentationSize.h"
#import "MovisaRepresentationState.h"

#import "MWWidgetViewDelegate.h"

@interface UIViewController (MovisaWidget) <MWWidgetViewDelegate>

// Behaviors
-(void)addBehavior:(MovisaAnimation *)behavior;

// Interaction
-(void)addInteraction:(MovisaInteraction *)interaction;
-(NSArray *)interactions;

// Color
-(void)setColor:(MovisaRepresentationColor *)color;
-(MovisaRepresentationColor *)color;
-(void)setForegroundColor:(UIColor *)fgColor;
-(void)setBackgroundColor:(UIColor *)bgColor;

// Position
-(void)setPosition:(MovisaRepresentationPosition *)position;
-(MovisaRepresentationPosition *)position;
-(void)setX:(id)xPos;
-(MovisaScaledProperty*)x;
-(void)setY:(id)yPos;
-(MovisaScaledProperty*)y;
-(void)setZ:(id)zPos;
-(MovisaScaledProperty*)z;

// Size
-(void)setSize:(MWRepresentationSize *)size;
-(MWRepresentationSize *)size;
-(void)setWidth:(id)width;
-(MovisaScaledProperty *)width;
-(void)setHeight:(id)height;
-(MovisaScaledProperty*)height;

// Border
-(void)setBorder:(MovisaRepresentationBorder *)border;
-(MovisaRepresentationBorder *)border;

// Alignment
-(void)setAlignment:(MovisaRepresentationAlignment *)alignment;
-(MovisaRepresentationAlignment *)alignment;

// State
-(void)setState:(MovisaRepresentationState *)state;
-(MovisaRepresentationState *)state;

// Tooltips
- (void)setTooltip:(MWTextDefinition *)toolTipText;
- (MWTextDefinition *)toolTipText;

- (void)showTooltip;
-(void)fireInteractionForTrigger:(InteractionTrigger)trigger;
-(NSMutableArray *)getEffectsForTrigger:(InteractionTrigger)trigger;

@end
