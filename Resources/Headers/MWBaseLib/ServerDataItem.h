//
//  ServerDataItem.h
//  MovisaBaseLib
//
//  Created by Stefan Hennig on 10/03/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

/**
 * Interface for Server Data Items.
 *
 */
@interface ServerDataItem : NSObject {
    NSString *_name;
}

@property (nonatomic,retain) NSManagedObjectID *accessingDataItemID;
@property (nonatomic,retain) NSString *accessingDataItemName;
@property (nonatomic, retain) NSString *name;

-(id)initWithNameAndDataItem:(NSString *)name accessingDataItemId:(NSManagedObjectID *)diId accessingDataItemName:(NSString*)diName;

@end
