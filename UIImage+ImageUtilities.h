//
//  UIImage+ImageUtilities.h
//  
//
//  Created by Matthew Yang on 2/12/15.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *)imageWithFixedOrientation;
- (UIImage *)imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *)imageCroppedToRect:(CGRect)cropRect;
- (UIImage *)imageByScalingToSize:(CGSize)size andCroppingWithRect:(CGRect)rect;

@end
