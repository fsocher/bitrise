//
//  MovisaInputMultilineViewController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 02.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "UIViewController+MWWidget.h"
#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWTextContainingWidget.h"
#import "UIViewController+MWValueContainingWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWViewController.h"

@class MWMultilineInputView;

@interface MWInputMultilineViewController : MWViewController<UITextViewDelegate> {
    MWMultilineInputView *_inputMultilineView;
    NSString *validationError;
    BOOL validInput;
    MovisaRepresentationColor *ownColor;

}

@property (nonatomic, retain) MWMultilineInputView *inputMultilineView;

-(void)setCurrentValue:(NSString *)value;
-(NSString *)currentValue;

@end
