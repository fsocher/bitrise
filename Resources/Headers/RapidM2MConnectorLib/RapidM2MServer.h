//
//  RapidM2MServer.h
//  RapidM2MConnector
//
//  Created by Lars Beier on 06.11.15.
//  Copyright © 2015 Monkey Works GmbH. All rights reserved.
//

#import "Server.h"
#import "RapidM2MServerMO.h"
#import "RapidM2MServerDataItemMO.h"
#import "RapidM2MSubscription.h"

@interface RapidM2MServer : Server {
    BOOL _serverFetched;
}

- (id)initWithTargetServerID:(NSString *)serverName;
- (void)reconnect;
- (void)disconnect;
- (void)handleReadDataItemEffects:(NSNotification *)notification;
- (void)handleWriteDataItemEffects:(NSNotification *)notification;
- (void)handleTriggerNotificationRequests:(NSNotification *)notification;

#pragma mark - custom methods
- (NSHTTPURLResponse *)writeData:(NSDictionary *)dataToWrite forConfig:(NSNumber *)config;
- (id)readDataForConfig:(NSNumber *)config;
- (void)setUsername:(NSString *)username;
- (void)setPassword:(NSString *)password;
- (BOOL)authenticate:(id)completion;
@end
