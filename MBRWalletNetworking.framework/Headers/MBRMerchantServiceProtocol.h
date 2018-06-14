//
//  MBRMerchantServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
#import "MBRMerchant.h"
#import "MBRMerchantListResponse.h"
@protocol MBRMerchantServiceProtocol <MBRBaseServiceProtocol>
/**
 获取商家列表
 
 @param pageNo 第几页（从0开始）
 @param pageSize 一页多少条
 */
- (void)getMerchantList:(NSInteger)pageNo
               pageSize:(NSInteger)pageSize
                
                success:(void (^_Nonnull)(NSString* message, MBRMerchantListResponse *response))success
                failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 通过商家id查询商家
 
 @param merchantId 商户id
 */
- (void)getMerchantById:(NSString *)merchantId
                
                success:(void (^_Nonnull)(NSString* message, MBRMerchant *merchant))success
                failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

@end
