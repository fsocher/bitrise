//
//  MovisaServerRequestAlarmAckMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 14.04.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestAlarmAckMessage : MovisaServerRequestMessage

// Additional AlarmAck properties
@property (nonatomic,retain, readonly) NSArray *alarmNames;

// init with all options
- (id)initWithAlarmNames:(NSArray *)alarmNames;

@end
