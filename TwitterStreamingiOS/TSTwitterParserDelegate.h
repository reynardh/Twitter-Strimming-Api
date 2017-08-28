//
//  TSTwitterParserDelegate.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TSTwitterParserDelegate <NSObject>

// Invoked when the parser fails
- (void)parsingTweetsFailedWithError:(NSError *)error;

@end
