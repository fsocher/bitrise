//
//  OpcXmlDaServer.h
//  OpcXmlDaConnectorLib
//
//  Created by Christian Schäfer on 13.03.14.
//
//	MONKEY WORKS CONFIDENTIAL
//	__________________
//
//	[2012] - [2014] MONKEY WORKS
//	All Rights Reserved.
//
//	NOTICE:  All information contained herein is, and remains
//	the property of MONKEY WORKS and its suppliers,
//	if any.  The intellectual and technical concepts contained
//	herein are proprietary to MONKEY WORKS GmbH
//	and its suppliers and may be covered by German and Foreign Patents,
//	patents in process, and are protected by trade secret or copyright law.
//	Dissemination of this information or reproduction of this material
//	is strictly forbidden unless prior written permission is obtained
//	from MONKEY WORKS.
//
//

#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>
#import "Server.h"

@class OpcXmlDaItem;

@interface OpcXmlDaServer : Server<NSXMLParserDelegate,NSURLConnectionDelegate> {
    NSURLConnection *_connection;
}

@property (nonatomic, retain) NSString* localeId;
@property (nonatomic, retain) NSMutableDictionary *activeMessages;
@property (nonatomic, retain) NSURLConnection *connection;

-(void)invokeMessage:(id)message;

-(void)notifyConnectionStateChanged:(BOOL)connectionState error:(NSError *)errorOrNil;

@end
