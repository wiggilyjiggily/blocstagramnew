//
//  MediaFullScreenViewController.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 1/27/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype)initWithMedia:(Media *)media;

- (void)centerScrollView;

- (void)sharePressed; // JH

@end
