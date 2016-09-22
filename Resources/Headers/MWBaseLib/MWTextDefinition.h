//
//  TextDefinition.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/21/12.
//
//

#import <Foundation/Foundation.h>

@interface MWTextDefinition : NSObject {
    NSDictionary *_textItems;
    NSString *_currentLanguage;
    
    NSMutableSet *_subscriber;
}

@property (nonatomic, retain) NSString *currentLanguage;

-(id)initWithTextItems:(NSDictionary*)items;

-(NSString*)textForLanguage:(NSString*)language;
-(NSString *)text;

-(void)addSubscriber:(void (^)(NSString*))subscriber;
-(void)languageDidChange:(NSNotification *)notification;

@end
