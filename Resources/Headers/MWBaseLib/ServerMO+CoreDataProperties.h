//
//  ServerMO+CoreDataProperties.h
//  MWBaseLib
//
//  Created by Lars Beier on 11.04.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ServerMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface ServerMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) NSNumber *isLeanHMI;
@property (nullable, nonatomic, retain) NSSet<ServerCommandMO *> *ownedServerCommands;
@property (nullable, nonatomic, retain) NSSet<ServerDataItemMO *> *ownedServerDataItems;
@property (nullable, nonatomic, retain) NSSet<SubscriptionMO *> *ownedSubscriptions;

@end

@interface ServerMO (CoreDataGeneratedAccessors)

- (void)addOwnedServerCommandsObject:(ServerCommandMO *)value;
- (void)removeOwnedServerCommandsObject:(ServerCommandMO *)value;
- (void)addOwnedServerCommands:(NSSet<ServerCommandMO *> *)values;
- (void)removeOwnedServerCommands:(NSSet<ServerCommandMO *> *)values;

- (void)addOwnedServerDataItemsObject:(ServerDataItemMO *)value;
- (void)removeOwnedServerDataItemsObject:(ServerDataItemMO *)value;
- (void)addOwnedServerDataItems:(NSSet<ServerDataItemMO *> *)values;
- (void)removeOwnedServerDataItems:(NSSet<ServerDataItemMO *> *)values;

- (void)addOwnedSubscriptionsObject:(SubscriptionMO *)value;
- (void)removeOwnedSubscriptionsObject:(SubscriptionMO *)value;
- (void)addOwnedSubscriptions:(NSSet<SubscriptionMO *> *)values;
- (void)removeOwnedSubscriptions:(NSSet<SubscriptionMO *> *)values;

@end

NS_ASSUME_NONNULL_END
