//
//  MBRBasicDataServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/7.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
#import "MBRInitData.h"
#import "MBRIndustry.h"

@protocol MBRBasicDataServiceProtocol <MBRBaseServiceProtocol>

/**
 获取初始化数据
 */
- (void)getInitDatasuccess:(void (^_Nonnull)(NSString* message,MBRInitData *data))success
                   failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 获取行业数据
 */
- (void)getIndustryDatasuccess:(void (^_Nonnull)(NSString* message,NSArray *datas))success
                       failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;

/**
 隐私协议地址
 */
- (NSString *)getPrivacyPolicyUrl;

/**
 关于我们地址
 */
- (NSString *)getAboutUrl;

/**
 矿工费说明地址
 */
- (NSString *)getFeeQuestionUrl;
@end
