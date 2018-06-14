//
//  MBRQueryTransactionResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRTransaction.h"
@interface MBRQueryTransactionResponse : MBRBaseModel
@property (nonatomic, assign) NSInteger total;

@property (nonatomic, strong) NSArray<MBRTransaction *>* list;

/**
 服务端记录缓存的id（客户端下拉刷新时记录该uuid，上拉加载更多时，传给服务端）
 */
@property (nonatomic, copy) NSString* uuid;
@end
