//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Michelle Rutherford on 8/2/15.
//  Copyright (c) 2015 Michelle Rutherford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end
