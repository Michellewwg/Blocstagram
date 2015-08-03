//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 8/2/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end


@interface CameraViewController : UIViewController
@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;
@end
