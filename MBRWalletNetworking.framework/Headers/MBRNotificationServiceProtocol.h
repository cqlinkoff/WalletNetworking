//
//  MBRNotificationServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
#import "MBRNotification.h"
#import "MBRNotificationListResponse.h"
@protocol MBRNotificationServiceProtocol <MBRBaseServiceProtocol>

/**
 获取通知列表
 
 @param pageNo 第几页（从第0页开始）
 @param pageSize 每页多少行
 */
- (void)getNotificationList:(NSInteger)pageNo
                   pageSize:(NSInteger)pageSize
                    
                    success:(void (^_Nonnull)(NSString* message, MBRNotificationListResponse *notificationList))success
                    failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 设置通知已读
 */
- (void)setNotificationRead:(long long)notificationId
                    
                    success:(void (^_Nonnull)(NSString* message, id data))success
                    failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 通过id查询通知
 
 @param notificationId 通知id
 */
- (void)getNotificationById:(long long)notificationId
                     
                    success:(void (^_Nonnull)(NSString* message, MBRNotification* notification))success
                    failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

@end
