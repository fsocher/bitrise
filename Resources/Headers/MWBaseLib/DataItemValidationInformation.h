//
//  DataItemValidationInformation.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 28.01.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataItemValidationInformation : NSObject

@property (nonatomic, retain) NSNumber* dataType;
@property (nonatomic, retain) NSNumber* minValue;
@property (nonatomic, retain) NSNumber* maxValue;


@end
