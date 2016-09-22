//
//  MovisaComparator.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import <Foundation/Foundation.h>

@protocol MovisaComparator<NSObject>

+(BOOL)compareValue:(NSObject *)value equalTo:(id)referenceValue;
+(BOOL)compareValue:(NSObject *)value notEqualTo:(id)referenceValue;

+(BOOL)compareValue:(NSObject *)value greaterThan:(id)referenceValue;
+(BOOL)compareValue:(NSObject *)value greaterThanEqual:(id)referenceValue;
+(BOOL)compareValue:(NSObject *)value lessThan:(id)referenceValue;
+(BOOL)compareValue:(NSObject *)value lessThanEqual:(id)referenceValue;

@end
