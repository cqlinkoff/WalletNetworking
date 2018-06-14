//
//  MBRAccount.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBgCoin.h"
#import "MBRBaseModel.h"
@interface MBRAccount : MBRBaseModel

@property (nonatomic, copy) NSString* accountId;//账户ID
@property (nonatomic, strong) NSMutableArray<MBRBgCoin *>* ercTokenList;
@property (nonatomic, copy) NSString* nickName;//账户昵称

@end
