//
//  MovisaServerRequestDeviceUpdateMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestDeviceUpdateMessage : MovisaServerRequestMessage

// Additional device property
@property (nonatomic,retain) NSString *deviceToken;

// init with all options
- (id)initWithDeviceToken:(NSString *)deviceToken;

@end
