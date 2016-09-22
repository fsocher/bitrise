//
//  MovisaTextLabelViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/24/12.
//
//

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWTextContainingWidget.h"
#import "UIViewController+MWWidget.h"
#import "UIViewController+MWValueContainingWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWViewController.h"

@class MWLabelView;

@interface MWLabelViewController : MWViewController <MWWidgetViewDelegate> {
    MWLabelView *_textLabelView;
}

@property (nonatomic, retain) MWLabelView *textLabelView;

- (void)setLabelView:(MWLabelView *)view;

-(void)setCurrentValue:(NSString *)value;
-(NSString *)currentValue;
@end
