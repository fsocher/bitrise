//
//  NSString+FormatConversion.h
//  SimaticRestConnectorLib
//
//  Created by Georgij on 21/10/14.
//  Copyright (c) 2014 Georgij. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FormatConversion)

+ (int)toIntFromBin:(NSString*) binStr;

+ (float)toFloatFromBin:(NSString*) binStr;

+ (BOOL)toBoolFromBin:(NSString*) binStr;

@end
