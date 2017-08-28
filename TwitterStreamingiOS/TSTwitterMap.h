//
//  TSTwitterMap.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "TSTwitterManagerDelegate.h"

@interface TSTwitterMap : UIViewController <TSTwitterManagerDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *theMap;
@property (nonatomic, strong) UIAlertView *theAlert;

@end
