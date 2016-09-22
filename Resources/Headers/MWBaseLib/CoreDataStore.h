//
//  DataModel.h
//  MovisaViz
//
//  Created by Christian Schäfer on 02.09.13.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2013] MONKEY WORKS
//	All Rights Reserved.
//
//	NOTICE:  All information contained herein is, and remains
//	the property of MONKEY WORKS and its suppliers,
//	if any.  The intellectual and technical concepts contained
//	herein are proprietary to MONKEY WORKS GmbH
//	and its suppliers and may be covered by German and Foreign Patents,
//	patents in process, and are protected by trade secret or copyright law.
//	Dissemination of this information or reproduction of this material
//	is strictly forbidden unless prior written permission is obtained
//	from MONKEY WORKS.
//
//


#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DataItemMO, SignalMO;

/**The local DataModel for as Singleton, it handles the persistent Store (SQLITE) by using CoreData */
@interface CoreDataStore : NSObject

///Reference to the Managed-Object-Context that keeps track of all the DB-Changes
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
///Reference to the background-MOC that is used for persisting received Messages
@property (readonly, strong, nonatomic) NSManagedObjectContext *backgroundMOC;
///Reference to the Managed-Object-Model that describes the DB-Model (Entities, Attributes, Relations)
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
///Reference to the Persistent-Store-Coordinator that manages the Connection to the SQLITE-Database
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

///Returns a path to Applicationsfolder in the Filesystem
+(NSString*)applicationDocumentsDirectory;

///returns a Reference to the DataModel-Singleton 
+(CoreDataStore*) sharedManager;

- (NSFetchedResultsController *)fetchEntitiesWithClassName:(NSString *)className
                                           sortDescriptors:(NSArray *)sortDescriptors
                                        sectionNameKeyPath:(NSString *)sectionNameKeypath
                                                 predicate:(NSPredicate *)predicate;

- (DataItemMO *)fetchDataItemWithName:(NSString *)dataItemName;
- (SignalMO *)fetchSignalForName:(NSString *)signalName;
- (NSArray *)fetchSignalsWithPredicate:(NSPredicate *)predicate;
- (id)fetch:(NSString *)klassName withPredicate:(NSPredicate *)predicate;
- (NSArray *)fetchAll:(NSString *)klassName withPredicate:(NSPredicate *)predicate;
- (NSArray *)fetchLeanHMIs;
@end