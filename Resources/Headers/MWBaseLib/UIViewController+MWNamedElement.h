//
//  UIViewController+MWNamedElement.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/23/12.
//
//

#import <UIKit/UIKit.h>

@interface UIViewController (MWNamedElement)

- (id)initWithName:(NSString *)name;

-(void)setName:(NSString*)name;
-(NSString*)getName;

@end
