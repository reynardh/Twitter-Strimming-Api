//
//  TSTwitterManagerDelegate.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TSTweet;

@protocol TSTwitterManagerDelegate <NSObject>

-(void)insertedNewTweet:(TSTweet *)tweet;
-(void)deletedTweet:(TSTweet *)tweet;
-(void)fetchingTweetsFailedWithError:(NSString *)error;
-(void)reconnectedToStream;

@end
