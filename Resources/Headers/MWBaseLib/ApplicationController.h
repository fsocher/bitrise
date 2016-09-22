//
//  ApplicationController.h
//  MobileViz
//
//  Created by Stefan Hennig on 10/15/12.
//
//

#import <Foundation/Foundation.h>

@protocol ApplicationController <NSObject>

-(void)create;
-(void)startup;
-(void)shutdown;

@end
