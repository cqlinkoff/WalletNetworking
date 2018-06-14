//
//  MBRTransactionRequest.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRTransactionRequest : MBRBaseModel
@property (nonatomic, copy) NSString* addressFrom;
@property (nonatomic, copy) NSString* addressTo;
@property (nonatomic, copy) NSString* amount;
@property (nonatomic, copy) NSString* decimals;
@property (nonatomic, copy) NSString* coinId;
@property (nonatomic, copy) NSString* fee;
@property (nonatomic, copy) NSString* gasLimit;
@property (nonatomic, copy) NSString* gasPrice;
@property (nonatomic, copy) NSString* memo;
@property (nonatomic, copy) NSString* standard;
@property (nonatomic, copy) NSString* signedTx;//签名（创建交易时不需要，发送交易时才需要）
@property (nonatomic, copy) NSString* tokenAddress;
@end
