//
//  MBRPayRequest.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRPayRequest : MBRBaseModel
@property (nonatomic, copy) NSString* merchantId;
@property (nonatomic, copy) NSString* refBizNo;
@property (nonatomic, copy) NSString* payBillNo;
@property (nonatomic, copy) NSString* coinId;
@property (nonatomic, copy) NSString* toAddr;
@property (nonatomic, copy) NSString* fromAddr;
@property (nonatomic, copy) NSString* signedTx;
@property (nonatomic, copy) NSString* amount;
@property (nonatomic, copy) NSString* tokenAddr;
@property (nonatomic, copy) NSString* goodsType;
@property (nonatomic, copy) NSString* goodsTag;
@property (nonatomic, copy) NSString* attach;

@property (nonatomic, copy) NSString* orderInfo;
@end
