//
//  Interaction.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/29/12.
//
//

#import <Foundation/Foundation.h>

#import "MovisaEffect.h"

typedef enum {
    INTERACTION_CLICK,
    INTERACTION_DOUBLE_CLICK,
    INTERACTION_TOUCH,
    INTERACTION_SUBMIT,
    INTERACTION_DONE
} InteractionTrigger;

@interface MovisaInteraction : NSObject {
    // Effects
    NSMutableArray *_effects;
    
    // Trigger
    InteractionTrigger _trigger;
}

@property (assign) InteractionTrigger trigger;

-(id)initWithTrigger:(InteractionTrigger)trigger;
-(void)addEffect:(MovisaEffect *)effect;

-(void)didTrigger;

-(NSMutableArray *)effects;

@end
