//
//  DataItemValidator.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 28.01.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataItemValidationInformation.h"

@interface DataItemValidator : NSObject

+ (BOOL)validate:(NSString *)value validationArguments:(DataItemValidationInformation*)validationArguments errorOutput:(NSString **)errorOutput;

@end
