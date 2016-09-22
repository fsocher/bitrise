//
//  MovisaSimpleContainerViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWViewController.h"

@class MWSimpleContainerView;

/** Aggregates multiple UIComponents </br>
 *  *(Composite-Pattern)*
 */
@interface MWSimpleContainerViewController : MWViewController <MWWidgetViewDelegate, UIScrollViewDelegate>{
    NSMutableDictionary *_uiComponents;
    
    MWSimpleContainerView *_simpleContainerView;
}

/** the matching View, that aggregates all SubViews */
@property (nonatomic, retain) MWSimpleContainerView *simpleContainerView;

///Method to add UIComponent to ComplexUIComponent
///@param component the UIViewController to add
-(void)addUIComponent:(UIViewController*)component;

- (void)setContentSize:(MWRepresentationSize *)contentSize;
- (void)setContentOffset:(MovisaRepresentationPosition *)contentOffset;

@end
