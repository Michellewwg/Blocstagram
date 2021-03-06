//
//  User.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 5/16/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//


#import <UIKit/UIKit.h>


@interface User : NSObject <NSCoding>
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;
- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;
@end
