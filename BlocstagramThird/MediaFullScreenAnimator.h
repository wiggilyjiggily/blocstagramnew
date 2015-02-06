//
//  MediaFullScreenAnimator.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 1/27/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
