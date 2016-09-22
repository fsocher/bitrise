//
//  AlarmMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AlarmMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface AlarmMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *acknowledged;
@property (nullable, nonatomic, retain) NSNumber *activeCount;
@property (nullable, nonatomic, retain) NSString *alarmGate;
@property (nullable, nonatomic, retain) NSString *alarmState;
@property (nullable, nonatomic, retain) NSDate *lastChanged;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *priority;
@property (nullable, nonatomic, retain) DataItemMO *relatedDataItem;
@property (nullable, nonatomic, retain) NSSet<SignalMO *> *signalsOnStatusChange;

@end

@interface AlarmMO (CoreDataGeneratedAccessors)

- (void)addSignalsOnStatusChangeObject:(SignalMO *)value;
- (void)removeSignalsOnStatusChangeObject:(SignalMO *)value;
- (void)addSignalsOnStatusChange:(NSSet<SignalMO *> *)values;
- (void)removeSignalsOnStatusChange:(NSSet<SignalMO *> *)values;

@end

NS_ASSUME_NONNULL_END
