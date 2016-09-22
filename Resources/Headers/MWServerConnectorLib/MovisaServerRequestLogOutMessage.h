//
//  MovisaServerRequestLogOutMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestLogOutMessage : MovisaServerRequestMessage

// Additional LogOut properties
@property (nonatomic,retain) NSString *username;

// init with all options
// only with token, because token is required for log off
- (id)initWithUsername:(NSString *)user Token:(NSString *)token;

@end
