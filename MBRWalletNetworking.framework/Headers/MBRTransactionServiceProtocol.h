//
//  MBRTransactionServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
#import "MBRTransactionRequest.h"
#import "MBRQueryTransactionResponse.h"
#import "MBRQueryTransactionRequest.h"
#import "MBRTransactionResponse.h"

@protocol MBRTransactionServiceProtocol <MBRBaseServiceProtocol>
/**
 创建交易
 
 @param transactionRequest 交易requestModel
 */
- (void) createTransaction:(MBRTransactionRequest *)transactionRequest

                   success:(void (^_Nonnull)(NSString* message,MBRTransactionResponse *response))success
                   failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 发送交易
 
 @param transactionRequest 交易requestModel
 */
- (void) sendTransaction:(MBRTransactionRequest *)transactionRequest

                 success:(void (^_Nonnull)(NSString* message,MBRTransactionResponse *response))success
                 failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 查询交易
 
 @param transactionRequest 交易requestModel
 */
- (void) queryTransaction:(MBRQueryTransactionRequest *)transactionRequest

                  success:(void (^_Nonnull)(NSString* message,MBRQueryTransactionResponse *response))success
                  failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 通过billId查询交易
 
 @param billId 订单id
 @param notificationId 通知id
 */
- (void) queryTransactionByBillId:(NSString *)billId
                   notificationId:(long)notificationId

                          success:(void (^_Nonnull)(NSString* message,MBRTransaction *transaction))success
                          failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 通过transactionId查询交易
 
 @param transactionId 交易id
 @param notificationId 通知id
 */
- (void) queryTransactionByTransactionId:(NSString *)transactionId
                          notificationId:(long)notificationId

                                 success:(void (^_Nonnull)(NSString* message,MBRTransaction *transaction))success
                                 failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;
@end
