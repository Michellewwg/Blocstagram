//
//  CropImageViewController.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 8/11/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import "MediaFullScreenViewController.h"
@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>

- (void) cropControllerFinishedWithImage:(UIImage *)croppedImage;

@end

@interface CropImageViewController : MediaFullScreenViewController

- (instancetype) initWithImage:(UIImage *)sourceImage;

@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;

@end
