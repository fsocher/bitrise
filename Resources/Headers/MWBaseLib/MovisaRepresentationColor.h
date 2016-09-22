//
//  MovisaRepresentationColor.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/24/12.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MovisaRepresentationColor : NSObject {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *foregroundColor;

-(id)initWithBackgroundColor:(UIColor *)bgColor foregroundColor:(UIColor *)fgColor;

@end
