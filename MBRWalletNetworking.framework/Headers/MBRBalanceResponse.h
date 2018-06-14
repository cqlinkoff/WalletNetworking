//
//  MBRBalanceResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRAccount.h"
@interface MBRBalanceResponse : MBRBaseModel


@property (nonatomic, copy) NSString* defaultEth;

@property (nonatomic, copy) NSString* maxEth;

@property (nonatomic, copy) NSString* minEth;

@property (nonatomic, strong) NSArray<MBRAccount *>* balanceList;

@end
