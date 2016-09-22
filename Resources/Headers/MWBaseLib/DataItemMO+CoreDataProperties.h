//
//  DataItemMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "DataItemMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface DataItemMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *error;
@property (nullable, nonatomic, retain) NSNumber *maxDataItemValues;
@property (nullable, nonatomic, retain) NSNumber *maxValue;
@property (nullable, nonatomic, retain) NSNumber *minValue;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *type;
@property (nullable, nonatomic, retain) NSSet<AlarmMO *> *alarms;
@property (nullable, nonatomic, retain) NSOrderedSet<DataItemValueMO *> *dataItemValues;
@property (nullable, nonatomic, retain) DimensionMO *dimension;
@property (nullable, nonatomic, retain) ServerDataItemMO *linkedServerDataItem;
@property (nullable, nonatomic, retain) NSSet<MonitoredItemMO *> *monitoringDefinition;
@property (nullable, nonatomic, retain) NSSet<SignalMO *> *signalsOnChange;

@end

@interface DataItemMO (CoreDataGeneratedAccessors)

- (void)addAlarmsObject:(AlarmMO *)value;
- (void)removeAlarmsObject:(AlarmMO *)value;
- (void)addAlarms:(NSSet<AlarmMO *> *)values;
- (void)removeAlarms:(NSSet<AlarmMO *> *)values;

- (void)insertObject:(DataItemValueMO *)value inDataItemValuesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromDataItemValuesAtIndex:(NSUInteger)idx;
- (void)insertDataItemValues:(NSArray<DataItemValueMO *> *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeDataItemValuesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInDataItemValuesAtIndex:(NSUInteger)idx withObject:(DataItemValueMO *)value;
- (void)replaceDataItemValuesAtIndexes:(NSIndexSet *)indexes withDataItemValues:(NSArray<DataItemValueMO *> *)values;
- (void)addDataItemValuesObject:(DataItemValueMO *)value;
- (void)removeDataItemValuesObject:(DataItemValueMO *)value;
- (void)addDataItemValues:(NSOrderedSet<DataItemValueMO *> *)values;
- (void)removeDataItemValues:(NSOrderedSet<DataItemValueMO *> *)values;

- (void)addMonitoringDefinitionObject:(MonitoredItemMO *)value;
- (void)removeMonitoringDefinitionObject:(MonitoredItemMO *)value;
- (void)addMonitoringDefinition:(NSSet<MonitoredItemMO *> *)values;
- (void)removeMonitoringDefinition:(NSSet<MonitoredItemMO *> *)values;

- (void)addSignalsOnChangeObject:(SignalMO *)value;
- (void)removeSignalsOnChangeObject:(SignalMO *)value;
- (void)addSignalsOnChange:(NSSet<SignalMO *> *)values;
- (void)removeSignalsOnChange:(NSSet<SignalMO *> *)values;

@end

NS_ASSUME_NONNULL_END
