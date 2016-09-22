//
//  SignalMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "SignalMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface SignalMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<AlarmMO *> *notifyingAlarms;
@property (nullable, nonatomic, retain) NSSet<DataItemMO *> *notifyingDataItems;

@end

@interface SignalMO (CoreDataGeneratedAccessors)

- (void)addNotifyingAlarmsObject:(AlarmMO *)value;
- (void)removeNotifyingAlarmsObject:(AlarmMO *)value;
- (void)addNotifyingAlarms:(NSSet<AlarmMO *> *)values;
- (void)removeNotifyingAlarms:(NSSet<AlarmMO *> *)values;

- (void)addNotifyingDataItemsObject:(DataItemMO *)value;
- (void)removeNotifyingDataItemsObject:(DataItemMO *)value;
- (void)addNotifyingDataItems:(NSSet<DataItemMO *> *)values;
- (void)removeNotifyingDataItems:(NSSet<DataItemMO *> *)values;

@end

NS_ASSUME_NONNULL_END
