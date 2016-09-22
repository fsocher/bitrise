//
//  MWDropdownPickerView.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 26.10.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MWDropdownViewController;
@class MWDropdownView;
@class MWDropdownOption;

@interface MWDropdownPickerViewController : UIViewController  <UIPickerViewDelegate, UIPickerViewDataSource> 

@property (nonatomic) IBOutlet UIPickerView *picker;

@property (nonatomic) NSMutableArray *pickerData;
@property (nonatomic) MWDropdownOption *selectedOption;
@property (nonatomic) MWDropdownViewController *delegate;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *pickerWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *toolbarWidthConstraint;

- (id)initWithDelegate:(MWDropdownViewController *)delegate;
- (IBAction)done:(id)sender;
- (IBAction)cancel:(id)sender;
- (void)addOption:(MWDropdownOption *)option;
- (void)selectOptionAtRow:(int)row;
@end
