//
//  DataSource.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 1/26/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject

+ (instancetype)sharedInstance;
+ (NSString *)instagramClientID;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@property (nonatomic, strong, readonly) NSString *accessToken;


- (void)deleteMediaItem:(Media *)item;

- (void)requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void)requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

- (void)downloadImageForMediaItem:(Media *)mediaItem;

- (void)toggleLikeOnMediaItem:(Media *)mediaItem;
- (void)commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;

@end
