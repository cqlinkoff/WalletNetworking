//
//  MBRBalanceServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBatchBalanceRequest.h"
#import "MBRBalanceResponse.h"
#import "MBRBaseServiceProtocol.h"
@protocol MBRBalanceServiceProtocol <MBRBaseServiceProtocol>
/**
 查询余额
 @param balanceRequest 查询余额requestModel
 */
- (void) batchQueryBalance:(MBRBatchBalanceRequest*)balanceRequest 
                   success:(void (^_Nonnull)(NSString* message,MBRBalanceResponse *response))success
                   failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 查询单个币余额
 @param account 查询的账户
 */
- (void) queryBalanceByOne:(MBRAccount*)account  
                   success:(void (^_Nonnull)(NSString* message,MBRBalanceResponse *response))success
                   failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;
@end
