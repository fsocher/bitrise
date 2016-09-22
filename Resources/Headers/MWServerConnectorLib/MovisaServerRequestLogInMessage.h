//
//  MovisaServerRequestLogInMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestLogInMessage : MovisaServerRequestMessage

// Additional LogIn properties
@property (nonatomic,retain, readonly) NSString *username;
@property (nonatomic, retain, readonly) NSString *password;

// init with all options
- (id)initWithUsername:(NSString *)user Password:(NSString *)password;

@end
