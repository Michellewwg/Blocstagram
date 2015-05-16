//
//  DataSource.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 5/16/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
