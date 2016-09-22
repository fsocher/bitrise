//
//  MovisaServerRequestServiceSupportMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 12.03.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestServiceSupportMessage : MovisaServerRequestMessage

// Additional service property
@property (nonatomic,retain) NSArray *services;

@end
