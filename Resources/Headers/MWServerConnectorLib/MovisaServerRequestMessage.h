//
//  MovisaServerRequestMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

// enum for status of request
typedef enum {
    BASE_CREATED,
    CREATED,
    SENDED,
    NOT_AUTH
} MovisaServerRequestStatus;

@interface MovisaServerRequestMessage : NSObject

// properties of all messages
@property (nonatomic,retain) NSString *type;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) MovisaServerRequestStatus status;

// must be overwritten!!!
- (NSString *)toJSON;
// export general JSON
- (NSString *)toJSON:(NSMutableDictionary *)jsonDict;
// export general dict
- (NSMutableDictionary *)createBaseDict;

@end
