//
//  MediaTableViewCell.h
//  BlocstagramNew
//
//  Created by Matthew Yang on 1/23/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
