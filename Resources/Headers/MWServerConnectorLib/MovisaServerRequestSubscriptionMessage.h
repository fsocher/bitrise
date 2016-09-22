//
//  MovisaServerRequestSubscriptionMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

// enum for subscription actions
typedef NS_ENUM(NSInteger, MovisaServerRequestSubscriptionAction) {
    SUBSCRIBE,
    UNSUBSCRIBE
};

@interface MovisaServerRequestSubscriptionMessage : MovisaServerRequestMessage

// Additional subscription properties
@property (nonatomic,retain) NSArray *dataItems;
@property (nonatomic) MovisaServerRequestSubscriptionAction action;
@property (nonatomic,retain) NSString *subscriptionID;

// init with single item
- (id)initWithDataItem:(NSString *)dataItem;
// init with multiple items
- (id)initWithMultipleDataItems:(NSArray *)dataItems SubscriptionID:(NSString *)subID;

@end
