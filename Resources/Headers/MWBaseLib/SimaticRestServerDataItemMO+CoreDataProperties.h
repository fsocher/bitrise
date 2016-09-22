//
//  SimaticRestServerDataItemMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "SimaticRestServerDataItemMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface SimaticRestServerDataItemMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *format;
@property (nullable, nonatomic, retain) NSNumber *validFormatFlags;
@property (nullable, nonatomic, retain) NSString *variableId;

@end

NS_ASSUME_NONNULL_END
