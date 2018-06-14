//
//  MBRBatchBalanceRequest.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRAccount.h"
@interface MBRBatchBalanceRequest : MBRBaseModel
@property (nonatomic, strong) NSMutableArray<MBRAccount *>* list;
@end
