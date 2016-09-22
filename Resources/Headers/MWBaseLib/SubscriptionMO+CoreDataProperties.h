//
//  SubscriptionMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "SubscriptionMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface SubscriptionMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *publishingInterval;
@property (nullable, nonatomic, retain) NSSet<MonitoredItemMO *> *ownedMonitoredItems;
@property (nullable, nonatomic, retain) ServerMO *owningServer;

@end

@interface SubscriptionMO (CoreDataGeneratedAccessors)

- (void)addOwnedMonitoredItemsObject:(MonitoredItemMO *)value;
- (void)removeOwnedMonitoredItemsObject:(MonitoredItemMO *)value;
- (void)addOwnedMonitoredItems:(NSSet<MonitoredItemMO *> *)values;
- (void)removeOwnedMonitoredItems:(NSSet<MonitoredItemMO *> *)values;

@end

NS_ASSUME_NONNULL_END
