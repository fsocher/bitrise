//
//  MovisaDropDownViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/27/12.
//
//

#import "MWViewController.h"
#import "MWNavigationController.h"
#import "MWDropdownView.h"
#import "MWDropdownPickerViewController.h"
#import "MWPanelViewController.h"
#import "MWDropdownOption.h"
#import "MWTextDefinition.h"

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWTextContainingWidget.h"
#import "UIViewController+MWWidget.h"

#import "MWWidgetViewDelegate.h"
#import "MWButtonViewController.h"
#import "MWDataItemEffect.h"

@interface MWDropdownViewController : MWButtonViewController {
    MWDropdownView *_dropdownView;
    MWPanelController *_currentPanelController;
    MWDropdownPickerViewController *_dropdownPickerViewController;
}

@property (nonatomic) MWDropdownView *dropdownView;
@property (nonatomic) MWPanelController *currentPanelController;
@property (nonatomic) MWDropdownPickerViewController *dropdownPickerViewController;

- (void)addOptionWithLabel:(NSString *)label andValue:(NSString *)value;
- (void)setDropdownView:(MWDropdownView *)dropdownView;
- (void)showPickerView:(id)sender;
- (void)dismissPickerView;
@end
