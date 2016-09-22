//
//  MovisaPanelViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/12/12.
//
//

#import "UIViewController+MWNamedElement.h"

@class MWDropdownPickerViewController;

@interface MWPanelViewController : UIViewController {
    NSMutableDictionary *_uiComponents;
    
    UIViewController *_openedDropDownPicker;
}

- (void)addUIComponent:(UIViewController*)component;
- (void)show;
- (void)hide;
- (void)dismissAsPopup;
- (void)setToast:(NSString *)text;

@end
 