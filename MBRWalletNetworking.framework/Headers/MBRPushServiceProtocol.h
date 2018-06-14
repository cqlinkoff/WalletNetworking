//
//  MBRPushServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
@protocol MBRPushServiceProtocol <MBRBaseServiceProtocol>
/**
 push设置
 */
- (void)setPush:(BOOL)isOpen
         
        success:(void (^_Nonnull)(NSString* message,id data))success
        failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;
@end
