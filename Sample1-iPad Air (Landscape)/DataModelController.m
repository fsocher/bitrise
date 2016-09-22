#import "DataModelController.h"

@implementation DataModelController{
    NSMutableArray *connections;
}

+ (DataModelController *)instance {
    static DataModelController *_sharedInstance = NULL;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[DataModelController alloc] init];
    });
    return _sharedInstance;
}

-(id)init{
    self = [super init];
    if(self){
        connections = [[NSMutableArray alloc]init];
    }
    return self;
}

/// Checks if the Data Model has already been populated to the Database.
///
-(BOOL)isCreated {
    NSError *error;
    NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"DataItemMO"];
    [request setFetchLimit:1];
    NSUInteger count = [[[CoreDataStore sharedManager] backgroundMOC] countForFetchRequest:request error:&error];
    
    return count != NSNotFound && count > 0;
}

-(void)create {
    [[MWBaseLib instance] populateData];
}

#pragma mark "Start the Data Model Controller"

-(void)startup {
    ///check if DB was initialized from PLIST
    if([self isCreated]){
        DebugLog(@"DataModel is initialized, Connections can be opened");
        [self connectServers];
    }
    ///if DB is not initialized yet, wait 2 Seconds and try again to connect Servers
    else {
        DebugLog(@"DataModel has not finished Initialization yet to connectServers");
        
        double delayInSeconds = 2.0;
        dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, delayInSeconds * NSEC_PER_SEC);
        dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
            [self startup];
        });
    }
}

#pragma mark Server-Connections

-(void)connectServers{
    if([[[MWBaseLib instance] connections] count]==0){
        
        NSArray *servers = [[CoreDataStore sharedManager] fetchAll:NSStringFromClass(ServerMO.class) withPredicate:nil];
        
        if(servers.count > 0){
            for (ServerMO *server in servers) {
                Server *servImpl;
                
				if ([server isKindOfClass:[MovisaServerMO class]]) {
					servImpl = [[MovisaServer alloc] initWithTargetServerID:[server name]];
				}  else {
					continue;
				}

                [[[MWBaseLib instance] connections] addObject:servImpl];
            }
        }
        else DebugLog(@"No Server was found in DB");
        
    }
    
    [[MWBaseLib instance] connect];
}

-(void)startSubscriptions {
    [[MWBaseLib instance] startSubscriptions];
}

-(void)stopSubscriptions {
    [[MWBaseLib instance] stopSubscriptions];
}

-(void)disconnectServers{
    [[MWBaseLib instance] disconnect];
}

-(void) shutdown {
    [[MWBaseLib instance] shutdown];
}

@end