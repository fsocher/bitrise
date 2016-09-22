//
//  ServerDataItemMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ServerDataItemMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface ServerDataItemMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<DataItemMO *> *accessingDataItem;
@property (nullable, nonatomic, retain) ServerMO *owningServer;

@end

@interface ServerDataItemMO (CoreDataGeneratedAccessors)

- (void)addAccessingDataItemObject:(DataItemMO *)value;
- (void)removeAccessingDataItemObject:(DataItemMO *)value;
- (void)addAccessingDataItem:(NSSet<DataItemMO *> *)values;
- (void)removeAccessingDataItem:(NSSet<DataItemMO *> *)values;

@end

NS_ASSUME_NONNULL_END
