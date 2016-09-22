//
//  MovisaServerRequestWriteMessage.h
//  MovisaServerConnectorLib
//
//  Created by Maximilian Winkler on 19.02.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MovisaServerRequestMessage.h"

@interface MovisaServerRequestWriteMessage : MovisaServerRequestMessage

// Additional dataItem property
@property (nonatomic,retain) NSArray *dataItems;

// init with single item
- (id)initWithDataItem:(NSString *)dataItem Value:(NSObject *)value;
// init with multiple items
- (id)initWithMultipleDataItems:(NSArray *)dataItems;

@end
