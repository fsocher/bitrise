//
//  CommandMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "CommandMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface CommandMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSSet<CommandValueMO *> *commandValues;
@property (nullable, nonatomic, retain) ServerCommandMO *linkedServerCommand;

@end

@interface CommandMO (CoreDataGeneratedAccessors)

- (void)addCommandValuesObject:(CommandValueMO *)value;
- (void)removeCommandValuesObject:(CommandValueMO *)value;
- (void)addCommandValues:(NSSet<CommandValueMO *> *)values;
- (void)removeCommandValues:(NSSet<CommandValueMO *> *)values;

@end

NS_ASSUME_NONNULL_END
