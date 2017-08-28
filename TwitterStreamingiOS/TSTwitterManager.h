//
//  TSTwitterManager.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

/*
 
 The Manager assumes the responsibility to maintain the streaming connection, storing the data received and passing it to the delegate
 
 */

#import <Foundation/Foundation.h>
#import <Social/Social.h>
#import <Accounts/Accounts.h>

#import "TSTwitterManagerDelegate.h"
#import "TSTwitterParserDelegate.h"

@interface TSTwitterManager : NSObject <NSFetchedResultsControllerDelegate, TSTwitterParserDelegate>

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, assign) BOOL isConnected;
@property (nonatomic, assign) BOOL isTryingToConnect;
@property (nonatomic, weak) id<TSTwitterManagerDelegate> delegate;

-(void)initManager;
- (void)initStreamingConnectionForPattern:(NSString *)aKeyword;

@end
