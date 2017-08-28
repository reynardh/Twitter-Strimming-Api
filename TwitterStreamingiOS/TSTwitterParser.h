//
//  TSTwitterParser.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

/*
 
 This parser receives the JSON data from the Twitter Streaming API and parses it into a NSDictionary
 
 */

#import <Foundation/Foundation.h>
#import "TSTwitterParserDelegate.h"

@interface TSTwitterParser : NSObject

@property (nonatomic, weak) id<TSTwitterParserDelegate> delegate;

- (NSDictionary *)getTweetsFromData:(NSData *)data;

@end
