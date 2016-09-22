//
//  Animation.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/25/12.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MovisaAnimation : NSObject {
    UIViewController *_uiComponent;
    NSString *_propertyOfSignal;
}

@property (nonatomic, retain) UIViewController *delegate;

-(id)initAnimationForSignal:(NSString *)signal usingPropertyOfSignal:(NSString *)propertyOrNil;

-(void)didTriggerAnimation:(NSNotification *)notification;

@end
