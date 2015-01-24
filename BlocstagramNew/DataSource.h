//
//  DataSource.h
//  BlocstagramNew
//
//  Created by Matthew Yang on 1/23/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

+(instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void)deleteMediaItem:(Media *)item;

@end
