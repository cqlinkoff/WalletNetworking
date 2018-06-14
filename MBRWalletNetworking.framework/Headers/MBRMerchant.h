//
//  MBRMerchant.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRMerchant : MBRBaseModel
@property (nonatomic, copy) NSString* merchantId;
@property (nonatomic, copy) NSString* name;
@property (nonatomic, copy) NSString* image;
@property (nonatomic, copy) NSString* website;//商家官方网站

/**
 通过merchantId在数组中查找MBRMerchant
 
 @param merchantId 商户Id
 @param merchantArray MBRMerchant 数组
 @return 找到的MBRMerchant
 */
+ (MBRMerchant *)MerchantWithId:(NSString *)merchantId inMerchantArray:(NSArray<MBRMerchant *>*)merchantArray;
@end
