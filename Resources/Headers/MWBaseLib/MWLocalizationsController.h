//
//  MWLocalizationsController.h
//  MWBaseLib
//
//  Created by Lars Beier on 18.03.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MWLocalizationsController : NSObject

+ (MWLocalizationsController *)instance;
- (NSString *)localizedString:(NSString *)key;

@end
