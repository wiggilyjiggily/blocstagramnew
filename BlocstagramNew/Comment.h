//
//  Comment.h
//  BlocstagramNew
//
//  Created by Matthew Yang on 1/23/15.
//  Copyright (c) 2015 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
