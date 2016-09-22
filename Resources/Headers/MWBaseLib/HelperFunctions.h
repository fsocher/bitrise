//
//  HelperFunctions.h
//  MovisaBaseLib
//
//  Created by Christian Schäfer on 14.03.14.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2014] MONKEY WORKS
//	All Rights Reserved.
//
//	NOTICE:  All information contained herein is, and remains
//	the property of MONKEY WORKS and its suppliers,
//	if any.  The intellectual and technical concepts contained
//	herein are proprietary to MONKEY WORKS GmbH
//	and its suppliers and may be covered by German and Foreign Patents,
//	patents in process, and are protected by trade secret or copyright law.
//	Dissemination of this information or reproduction of this material
//	is strictly forbidden unless prior written permission is obtained
//	from MONKEY WORKS.
//
//


#import <Foundation/Foundation.h>

@interface HelperFunctions : NSObject

+(HelperFunctions*) instance;

-(NSNumber*)interpretIntWithValue:(NSNumber*)val Factor:(NSNumber*)factor;
-(NSNumber*)interpretDoubleWithValue:(NSNumber*)val Factor:(NSNumber*)factor FractionDigits:(NSNumber*)digits;

-(NSString*)getNiceStringFromDate:(NSDate*)date;

@end
