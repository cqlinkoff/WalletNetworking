//
//  MBRIndustry.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRIndustry : MBRBaseModel
/**
 key
 */
@property (nonatomic, copy) NSString *key;


/**
 名称
 */
@property (nonatomic, copy) NSString *value;
@end
