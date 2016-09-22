//
//  MovisaTextLabelView.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/24/12.
//
//

#import <UIKit/UIKit.h>
#import "MovisaRepresentationAlignment.h"

@interface MWLabelView : UILabel {
    VerticalAlignmentConstant _verticalAlignment;
}
@property (nonatomic) VerticalAlignmentConstant verticalAlignment;

- (void)setForegroundColor:(UIColor *)color;

@end
