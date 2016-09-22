//
//  DimensionMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "DimensionMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface DimensionMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *factor;
@property (nullable, nonatomic, retain) NSNumber *fractionDigits;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *unit;
@property (nullable, nonatomic, retain) NSSet<DataItemMO *> *dimensionedDataItems;

@end

@interface DimensionMO (CoreDataGeneratedAccessors)

- (void)addDimensionedDataItemsObject:(DataItemMO *)value;
- (void)removeDimensionedDataItemsObject:(DataItemMO *)value;
- (void)addDimensionedDataItems:(NSSet<DataItemMO *> *)values;
- (void)removeDimensionedDataItems:(NSSet<DataItemMO *> *)values;

@end

NS_ASSUME_NONNULL_END
