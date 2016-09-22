//
//  MovisaSliderViewController.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/27/12.
//
//

#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWWidget.h"
#import "UIViewController+MWValueContainingWidget.h"

#import "MWSliderView.h"

@interface MWSliderViewController : UIViewController {
    MWSliderView *_sliderView;
}

@property (nonatomic, retain) MWSliderView *sliderView;

@end
