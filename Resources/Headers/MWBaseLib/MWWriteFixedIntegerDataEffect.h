//
//  MovisaWriteFixedIntegerDataEffect.h
//  SchildknechtDemo
//
//  Created by Christian Schäfer on 06.12.13.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2013] MONKEY WORKS
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


#import "MWWriteDataItemEffect.h"

@interface MWWriteFixedIntegerDataEffect : MWWriteDataItemEffect

/// the static int Value that is assigned to this Effect
@property (nonatomic, assign) int fixedIntegerValue;

/** Initializer for MovisaWriteFixedIntegerDataEffect
 * @param serverName the name of the Server that represents the destination for this write
 * @param di the name of the DataItem that should be written
 * @param intVal the static int Value that is assigned to this Effect
 */
-(id)initWithTargetServer:(NSString*)serverName DataItem:(NSString*)di FixedIntegerValue:(int)intVal;

@end
