//
//  MBRBalance.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRAccount.h"
@interface MBRBalance : MBRBaseModel
@property (nonatomic, strong) NSArray<MBRAccount *>* accountList;

@property (nonatomic, copy) NSString* minEth;

@property (nonatomic, copy) NSString* defaultEth;

@property (nonatomic, copy) NSString* maxEth;
@end
