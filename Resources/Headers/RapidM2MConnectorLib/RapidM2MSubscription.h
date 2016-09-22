//
//  RapidM2MSubscription.h
//  RapidM2MConnectorLib
//
//  Created by Lars Beier on 16.11.15.
//  Copyright © 2015 Monkey Works GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RapidM2MServer.h"
#import "MonitoredItemMO.h"
#import "SignalMO.h"

@class RapidM2MServer;

@interface RapidM2MSubscription : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSSet *monitoredItems;
@property (nonatomic) NSNumber *publishingInterval;

- (id)initWithName:(NSString *)name owningServer:(RapidM2MServer *)server monitoredItems:(NSSet *)monitoredItems publishInterval:(NSNumber *)publishInterval;

- (void)start;
- (void)stop;
@end
