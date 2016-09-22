//
//  ServerCommandMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ServerCommandMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface ServerCommandMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *type;
@property (nullable, nonatomic, retain) NSString *version;
@property (nullable, nonatomic, retain) CommandMO *accessingCommand;
@property (nullable, nonatomic, retain) ServerMO *owningServer;

@end

NS_ASSUME_NONNULL_END
