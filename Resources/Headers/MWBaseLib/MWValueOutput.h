//
//  MovisaValueOutput.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/25/12.
//
//

#import <Foundation/Foundation.h>

#import "UIViewController+MWValueContainingWidget.h"
#import "MWTextDefinition.h"

@interface MWValueOutput : NSObject {
    UIViewController *_delegate;
    MWTextDefinition *_preText;
    MWTextDefinition *_postText;
    
    NSString *_currentValue;
}

@property (nonatomic, retain) MWTextDefinition *preText;
@property (nonatomic, retain) MWTextDefinition *postText;
@property (nonatomic, retain) UIViewController *delegate;

-(void)updateValue:(NSString *)currentValue;

@end
