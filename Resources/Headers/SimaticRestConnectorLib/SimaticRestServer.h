//
//  SimaticRestServer.h
//  SimaticRestConnectorLib
//
//  Created by Georgij on 09/10/14.
//  Copyright (c) 2014 Georgij. All rights reserved.
//
#import "Server.h"
#import "ServerMO.h"
#import "DataItemMO+Extensions.h"

@interface SimaticRestServer : Server

#pragma mark - Server Procotol specific
#pragma mark Protocol properties
// the name of the the (connected) server
@property (nonatomic,retain) NSString *serverName;

// the url of the (connected) server
@property (nonatomic,retain) NSString *serverURL;

// NSMutable Set that contains all Subscriptions to this server as NSStrings
@property (nonatomic,retain) NSMutableSet *subscriptions;

@property (nonatomic, retain) NSMutableDictionary *runningSubscriptions;

/**the connection-state <br/>
 * NO = not connected <br/>
 * YES = connected <br/>
 */
@property (nonatomic, assign) BOOL isConnected;

@property (nonatomic) BOOL initiallyRead;

#pragma mark - Simatic class specific
@property (nonatomic, retain) NSString* userName;
@property (nonatomic, retain) NSString* password;

/**
 * Performs read operation of SIMATIC Variables.
 * <p>
 * Can process from 1 to 50 variables with 1
 * read request.
 * <p>
 * This method doesn't perform any read set creations, and
 * limited to a maximum of 50 SIMATIC var reads as described
 * in <b>SIMATIC RESTful documentation</b>.
 * @param whatToRead Array of SimaticRestServerDataItemMO
 *        we want to read
 *        <p>
 *        If array size is greater than 50,
 *        only first 50 SimaticRestServerDataItemMO will be read
 * @param resultProcess Method for result data processing must take
 *        NSData as argument
 */
- (void)readDataItems:(NSArray*)whatToRead resultProcess:(SEL)resultProcess resultProcessTarget:(id)target;

/**
 * Persists to CoreData new <b>not converted</b> value for specified data item.
 * <p>
 * Converts new value to required data type internally.
 * @param notConvertedValue value to save
 * @param dataItemMOId data item managed object id to use to save value to
 */
- (void)persistValue:(id)notConvertedValue forDataItemMOID:(NSManagedObjectID*)dataItemMOId;
@end
