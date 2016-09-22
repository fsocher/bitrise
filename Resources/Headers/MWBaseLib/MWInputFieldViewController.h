//
//  MovisaInputFieldViewController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 26.01.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "UIViewController+MWWidget.h"
#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWTextContainingWidget.h"
#import "UIViewController+MWValueContainingWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWViewController.h"

@class MWInputFieldView;

@interface MWInputFieldViewController : MWViewController<UITextFieldDelegate> {
    MWInputFieldView *_inputFieldView;
    NSString *validationError;
    BOOL validInput;
}

@property (nonatomic, retain) MWInputFieldView *inputFieldView;

-(void)setCurrentValue:(NSString *)value;
-(NSString *)currentValue;

-(void)setSecureInput:(BOOL)secureInput;
-(BOOL)secureInput;

-(void)setReturnKeyType:(UIReturnKeyType)returnKeyType;
-(UIReturnKeyType)retrunKeyType;
@end
