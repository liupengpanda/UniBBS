//
//  BBSBoardReader.h
//  UniBBS
//
//  Created by Meng Shengbin on 3/11/12.
//  Copyright (c) 2012 Peking University. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BBSBoardReader : NSObject

@property (nonatomic, retain) NSString *dataAddress;
@property (nonatomic, retain) NSString *boardName;
@property (nonatomic, assign) BOOL showSticky;

- (id)initWithBoardName:(NSString *)name;


- (NSURLSessionDataTask *)getBoardTopicsWithBlock:(void (^)(NSMutableArray *topics, NSError *error))block;

- (NSURLSessionDataTask *)getBoardPostsWithBlock:(void (^)(NSMutableArray *posts, NSError *error))block;
- (NSURLSessionDataTask *)getBoardNextTopicsWithBlock:(void (^)(NSMutableArray *topics, NSError *error))block;
- (NSURLSessionDataTask *)getBoardNextPostsWithBlock:(void (^)(NSMutableArray *posts, NSError *error))block;
@end
