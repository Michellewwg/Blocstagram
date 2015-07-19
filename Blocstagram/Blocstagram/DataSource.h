//
//  DataSource.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 5/16/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject
@property (nonatomic, strong, readonly) NSString *accessToken;+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
 - (void) deleteMediaItem:(Media *)item;
- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
+ (NSString *) instagramClientID;

@end
