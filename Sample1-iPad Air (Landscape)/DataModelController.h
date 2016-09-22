// 
// DataModelController.h
// Sample1
// 
// Created by HMI Suite Workbench on 22.09.16.
// Copyright (c) 2015 MONKEY WORKS GmbH. All rights reserved.
// 


#import <Foundation/Foundation.h>

#import "ApplicationController.h"
#import "CoreDataStore.h"

#import "ServerMO.h"
#import "Server.h"
#import "MovisaServer.h"
#import "MovisaServerMO.h"


@interface DataModelController : NSObject <ApplicationController> {
@private CoreDataStore* dataModel;
}

+ (DataModelController *)instance;
- (void)connectServers;
- (BOOL)isCreated;
- (void)startSubscriptions;
- (void)stopSubscriptions;
@end