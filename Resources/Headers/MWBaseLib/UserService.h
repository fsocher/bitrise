//
//  UserService.h
//  MovisaBaseLib
//
//  Created by Georgij on 30/10/14.
//  Copyright (c) 2014 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - UserService return dictionary keys
extern NSString* const kUserServiceName;
extern NSString* const kUserServicePassword;

@interface UserService : NSObject

/// Returns a Reference to the UserService
+ (UserService*)service;

#pragma mark - General user methods
/**
 * Remembers provied credentials for specified service.
 * <p>
 * Use this method for Remember Me functionality of Login Dialog.
 * @param name Username
 * @param password Password
 * @param service Service string, must be Unique to all Servers (e.g. Simatic for SimaticRestfulServer)
 */
- (void)rememberUsername:(NSString*)name withPassword:(NSString*)password forService:(NSString*)service;

/**
 * Gets remembered credentials for specified service.
 * <p>
 * Use this method for Remember Me functionality of Login Dialog.
 * @param service Service string, must be Unique to all Servers (e.g. Simatic for SimaticRestfulServer)
 * @return `NSDictionary` with username and passowrd values for keys `kUserServiceName` and `kUserServicePassword`
 */
- (NSDictionary*)getRememberedCredentialsForService:(NSString*)service;

/**
 * Deletes remembered credentials for specified user and service
 * @param service Service string, must be Unique to all Servers (e.g. Simatic for SimaticRestfulServer)
 */
- (void)deleteRememberedUsername:(NSString*)name forService:(NSString*)service;

#pragma mark - Application user methods
/**
 * Creates Application/Local user.
 * <p>
 * Use this method from CreateUser dialog.
 * @param name Username
 * @param password Password
 */
- (void)createAppUser:(NSString*)name andPassword:(NSString*)password;

/**
 * Performs login apperation for Application/Local user.
 * <p>
 * Use this method from Login dialog.
 * @param enteredName Username to check
 * @param enteredPassword Password to check
 * @return `YES` if login was successful, otherwise `NO`
 */
- (BOOL)authAppUser:(NSString*)enteredName andPassword:(NSString*)enteredPassword;

/**
 * Checks is Application/Local user was created for current application.
 * <p>
 * Use this method to check if we have to create new user, or show Login dialog.
 * @return `YES` if application user exists, otherwise `NO`
 */
- (BOOL)appUserExists;
@end
