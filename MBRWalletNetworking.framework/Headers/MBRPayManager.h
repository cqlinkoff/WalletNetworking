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
 环境配置类
 */
@interface MBRPayConfig : NSObject

/**
 * @abstract 语言码
 * @discussion 可选 默认值：zh_CN
 */
@property (nonatomic, copy, nullable) NSString* languageCode;

/**
 * @abstract 渠道号
 * @discussion 必填
 */
@property (nonatomic, copy, nonnull) NSString* channel;

/**
 * @abstract 推送Id
 * @discussion 可选
 */
@property (nonatomic, copy, nullable) NSString* jPushId;

/**
 * @abstract 服务端主机域名
 * @discussion 可选
 */
@property (nonatomic, copy, nullable) NSString* apiHost;

@end

@interface MBRPayManager : NSObject
/// 基础数据接口
@property (nonatomic, strong) MBRBaseService<MBRBasicDataServiceProtocol>* basicDataService;
/// 交易相关接口
@property (nonatomic, strong) MBRBaseService<MBRTransactionServiceProtocol>* transactionService;
/// 余额相关接口
@property (nonatomic, strong) MBRBaseService<MBRBalanceServiceProtocol>* balanceService;
/// 推送相关接口
@property (nonatomic, strong) MBRBaseService<MBRPushServiceProtocol>* pushService;
/// 通知相关接口
@property (nonatomic, strong) MBRBaseService<MBRNotificationServiceProtocol>* notificationService;
/// 支付相关接口
@property (nonatomic, strong) MBRBaseService<MBRPayServiceProtocol>* payService;
/// 商家相关接口
@property (nonatomic, strong) MBRBaseService<MBRMerchantServiceProtocol>* merchantService;

/**
 获取实例

 @return MBRPayManager
 */
+(instancetype )sharedInstance;

/**
 设置环境配置
 
 @param config MBRPayConfig
 @discussion 使用MBRWalletNetworking提供的功能前，请先配置环境
 */
- (void)setEnvironmentConfig:(MBRPayConfig*)config;

/**
 切换语言

 @param languageCode 语言码：如zh_CN
 @discussion 语言环境变化后调用该方法
 */
- (void)changeLanguage:(NSString*)languageCode;

@end
