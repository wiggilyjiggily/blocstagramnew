//
//  Comment.h
//  BlocstagramThird
//
//  Created by Matthew Yang on 1/26/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class User;

@interface Comment : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

- (instancetype)initWithDictionary:(NSDictionary *)commentDictionary;

@end
