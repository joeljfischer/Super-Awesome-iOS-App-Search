//
//  GoogleAppResult.h
//  App Search with Google
//
//  Created by Justin Dickow on 2/3/15.
//  Copyright (c) 2015 objective-awesome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoogleAppResult : NSObject
@property (nonatomic, strong, readonly) NSString *url;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSNumber *ratingCount;
@property (nonatomic, strong, readonly) NSNumber *rating;
@property (nonatomic, strong, readonly) NSNumber *price;
@property (nonatomic, strong, readonly) NSNumber *rank;

- (instancetype)initWithUrl:(NSString *)url name:(NSString *)name ratingCount:(NSNumber *)count rating:(NSNumber *)rating price:(NSNumber *)price rank:(NSNumber *)rank;
@end
