//
//  NSArray+Swizzling.h
//  RuntimeDemo
//
//  Created by huangyibiao on 16/1/12.
//  Copyright © 2016年 huangyibiao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Swizzling)

@property (nonatomic, weak) id delegate;

@end
