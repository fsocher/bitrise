//
//  DataItemValueMO+CoreDataProperties.h
//  MWBaseLib
//
//  Created by Lars Beier on 20.06.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "DataItemValueMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface DataItemValueMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *createdAt;
@property (nullable, nonatomic, retain) NSNumber *timestampCreatedAt;
@property (nullable, nonatomic, retain) DataItemMO *owningDataItem;

@end

NS_ASSUME_NONNULL_END
