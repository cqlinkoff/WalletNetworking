//
//  MBRBgCoin.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseModel.h"
@interface MBRBgCoin : MBRBaseModel

@property(nonatomic, strong)NSString *coinId;

@property(nonatomic, strong)NSString *abbr;

@property(nonatomic, strong)NSString *name;

@property(nonatomic, strong)NSString *chain;

@property(nonatomic, strong)NSString *avatarUrl;

@property(nonatomic, strong)NSString *icon;

@property(nonatomic, strong)NSString *decimals;

@property(nonatomic, strong)NSString *gasLimit;

@property(nonatomic, strong)NSString *tokenAddress;

@property(nonatomic, strong)NSString *standard;

@property(nonatomic, assign)double   exchangeRate;

@property(nonatomic, strong)NSString *isForceShow;

@property(nonatomic, assign)double   amount;

@property(nonatomic, assign)BOOL     isCollected;

/**
 通过coinId在数组中查找MBRBgCoin
 
 @param coinId coinId
 @param coinArray MBRBgCoin 数组
 @return 找到的MBRBgCoin
 */
+ (MBRBgCoin *)coinInfoWithCoinId:(NSString *)coinId inCoinArray:(NSArray<MBRBgCoin *>*)coinArray;

/**
 返回界面上显示的数量
 
 @param coinInfo 币（暂时用字典，因为钱包还没映射到MBRBgCoin）
 @return 显示的数量
 */
+ (NSDecimalNumber *)getShowAmountValue:(NSDictionary *)coinInfo;
@end
