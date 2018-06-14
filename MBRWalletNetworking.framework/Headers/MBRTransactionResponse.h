//
//  MBRTransactionResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRTransactionResponse : MBRBaseModel

@property (nonatomic, copy) NSString* txDbId;

@property (nonatomic, copy) NSString* txParams;
@end
