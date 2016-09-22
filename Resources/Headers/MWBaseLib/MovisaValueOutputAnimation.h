//
//  MovisaValueOutputAnimation.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/25/12.
//
//

#import "MovisaAnimation.h"
#import "MWValueOutput.h"
#import "MWTextDefinition.h"

@interface MovisaValueOutputAnimation : MovisaAnimation {

    MWTextDefinition *_preText;
    MWTextDefinition *_postText;
    BOOL _replaceValue;
    
    NSMutableString *_currentValue;
    MWValueOutput *_valueOutput;
}

@property (nonatomic, retain) MWTextDefinition *preText;
@property (nonatomic, retain) MWTextDefinition *postText;
@property (nonatomic) BOOL replaceValue;

@end
