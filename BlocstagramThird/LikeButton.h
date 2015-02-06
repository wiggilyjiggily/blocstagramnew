//
//  LikeButton.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 2/4/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LikeState) {
    LikeStateNotLiked             = 0,
    LikeStateLiking               = 1,
    LikeStateLiked                = 2,
    LikeStateUnLiking             = 3
};

@interface LikeButton : UIButton

/*
 The current state of the like button. Setting to BLCLikeButtonNotLiked or BLCLikeButtonLiked will display an empty heart or a heart, respectively. Setting to BLCLikeButtonLiking or BLCLikeButtonUnliking will display an activity indicator and disable button taps until the button is set to BLCLikeButtonNotLiked or BLCLikeButtonLiked.
*/
@property (nonatomic, assign) LikeState likeButtonState;

@end
