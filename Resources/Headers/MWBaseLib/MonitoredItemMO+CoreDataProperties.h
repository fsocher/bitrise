//
//  MonitoredItemMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "MonitoredItemMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface MonitoredItemMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *deadBand;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *samplingRate;
@property (nullable, nonatomic, retain) DataItemMO *dataItemToMonitor;
@property (nullable, nonatomic, retain) SubscriptionMO *owningSubscription;

@end

NS_ASSUME_NONNULL_END
