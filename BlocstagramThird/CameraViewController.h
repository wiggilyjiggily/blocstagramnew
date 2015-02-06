//
//  CameraViewController.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 2/4/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void)cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;

@end
