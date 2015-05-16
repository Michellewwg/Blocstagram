//
//  Comment.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 5/16/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
