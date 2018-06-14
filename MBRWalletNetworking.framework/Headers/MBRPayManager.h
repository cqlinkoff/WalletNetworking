//
//  MBRPayManager.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseService.h"
#import "MBRBaseServiceProtocol.h"
#import "MBRBasicDataServiceProtocol.h"
#import "MBRTransactionServiceProtocol.h"
#import "MBRBalanceServiceProtocol.h"
#import "MBRPushServiceProtocol.h"
#import "MBRNotificationServiceProtocol.h"
#import "MBRPayServiceProtocol.h"
#import "MBRMerchantServiceProtocol.h"


/**
 环境
 */
@interface MBRPayConfig : NSObject

/**
 默认：zh_CN
 */
@property (nonatomic, copy, nullable) NSString* languageCode;

/**
 渠道号(必须)
 */
@property (nonatomic, copy, nonnull) NSString* channel;

/**
 pushId
 */
@property (nonatomic, copy, nullable) NSString* jPushId;

/**
 主机域名(必须）
 */
@property (nonatomic, copy, nonnull) NSString* apiHost;

@end

@interface MBRPayManager : NSObject
//基础数据接口
@property (nonatomic, strong) MBRBaseService<MBRBasicDataServiceProtocol>* basicDataService;
//交易相关接口
@property (nonatomic, strong) MBRBaseService<MBRTransactionServiceProtocol>* transactionService;
//余额相关接口
@property (nonatomic, strong) MBRBaseService<MBRBalanceServiceProtocol>* balanceService;
//推送相关接口
@property (nonatomic, strong) MBRBaseService<MBRPushServiceProtocol>* pushService;
//通知相关接口
@property (nonatomic, strong) MBRBaseService<MBRNotificationServiceProtocol>* notificationService;
//支付相关接口
@property (nonatomic, strong) MBRBaseService<MBRPayServiceProtocol>* payService;
//商家相关接口
@property (nonatomic, strong) MBRBaseService<MBRMerchantServiceProtocol>* merchantService;

+(instancetype )sharedInstance;

/**
 设置环境配置
 使用接口前请配置环境
 @param config MBRPayConfig
 */
- (void)setEnvironmentConfig:(MBRPayConfig*)config;

/**
 切换语言

 @param languageCode 语言码：如zh_CN
 */
- (void)changeLanguage:(NSString*)languageCode;

@end
