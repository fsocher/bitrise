//
//  OpcXmlDaServerMO+CoreDataProperties.h
//  MovisaBaseLib
//
//  Created by Lars Beier on 11.11.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OpcXmlDaServerMO.h"

NS_ASSUME_NONNULL_BEGIN

@interface OpcXmlDaServerMO (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *localeId;

@end

NS_ASSUME_NONNULL_END