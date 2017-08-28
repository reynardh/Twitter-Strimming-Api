//
//  TSMapAnnotation.h
//  TwitterStreamingiOS
//
//  Created by Rey on 02/5/2017.
//  Copyright (c) 2017 Rey. All rights reserved.
//

/*
 
 This class represents a Tweet annotation in the map
 
 */

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface TSMapAnnotation : NSObject <MKAnnotation>

@property (nonatomic, copy) NSString *id_str;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign)CLLocationCoordinate2D coordinate;

@end
