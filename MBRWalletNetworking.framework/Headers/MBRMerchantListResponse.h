//
//  MBRMerchantListResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRMerchant.h"
@interface MBRMerchantListResponse : MBRBaseModel
@property (nonatomic, assign) NSInteger total;

@property (nonatomic, strong) NSArray<MBRMerchant *>* list;
@end
