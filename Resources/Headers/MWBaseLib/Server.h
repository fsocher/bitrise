//
//  Connection.h
//  movisa-lib
//
//  Created by Christian Schäfer on 01.03.14.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2014] MONKEY WORKS
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

#import "MWBaseLib.h"
#import "CoreDataStore.h"
#import "ServerDataItem.h"
#import "ServerDataItemMO.h"
#import "DataItemMO.h"
#import "DataItemValueMO.h"
#import "DimensionMO.h"
#import "SignalMO.h"
#import "SubscriptionMO.h"

#import "LoginViewController.h"
#import "UserService.h"
#import "MWDataItemEffect.h"


@class ServerMO;

@interface Server : NSObject {
    NSManagedObjectContext *_managedObjectContext;

    NSString *_serverName;
    NSString *_serverURL;
    NSMutableSet *_subscriptions;
    NSMutableSet *_serverDataItems;
    NSMutableDictionary *_serverDataItemsMap;
    NSMutableDictionary *_runningSubscriptions;
    
    BOOL _isConnected;
    BOOL _initiallyRead;
}

// the core data managed object context where to operate on data
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

// the name of the the (connected) server
@property (nonatomic,retain) NSString *serverName;

// the url of the (connected) server
@property (nonatomic,retain) NSString *serverURL;

// NSMutable Set that contains all Subscriptions to this server as NSStrings
@property (nonatomic,retain) NSMutableSet *subscriptions;

// Containing Server Data Items
@property (nonatomic, retain) NSMutableSet *serverDataItems;
@property (nonatomic) NSMutableDictionary *serverDataItemsMap;

@property (nonatomic, retain) NSMutableDictionary *runningSubscriptions;

/**the connection-state <br/>
 * NO = not connected <br/>
 * YES = connected <br/>
 */
@property (nonatomic, assign) BOOL isConnected;

@property (nonatomic) BOOL initiallyRead;

/**
 * Init-Method for new ServerConnection
 * @param server the Target-Server for this Websocket
 */
- (id)initWithTargetServerID:(NSString *)serverName;

// (re)open connection to remote WebSocket/Server
- (void)reconnect;

// close connection to remote WebSocket/Server
- (void)disconnect;

- (void)handleTriggerNotificationRequests:(NSNotification *)notification;
- (void)handleWriteDataItemEffects:(NSNotification*)note;
- (void)handleReadDataItemEffects:(NSNotification*)note;

- (ServerDataItem*)getServerDataItemForName:(NSString*)name;

- (void)startSubscriptions;
- (void)stopSubscriptions;
- (void)initialDataRead;
@end
