//
//  SimaticRestSubscription.h
//  SimaticRestConnectorLib
//
//  Created by Georgij on 21/10/14.
//  Copyright (c) 2014 Georgij. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SimaticRestServer.h"

@interface SimaticRestSubscription : NSObject
@property (nonatomic, copy, readonly) NSString* name;
@property (nonatomic, copy, readonly) NSNumber* publishInterval;
@property (atomic, retain, readonly) SimaticRestServer* server;
@property (atomic, retain, readonly) NSArray* monitoredItems;
/// YES when publishing
@property (nonatomic, readonly) BOOL running;

- (SimaticRestSubscription*)initWithName:(NSString*) name owningServer:(SimaticRestServer*) server monitoredItems:(NSArray*) monitoredItems publishInterval:(NSNumber*) publishInterval;

- (void)start;
- (void)stop;

- (void)destroy;

@end
