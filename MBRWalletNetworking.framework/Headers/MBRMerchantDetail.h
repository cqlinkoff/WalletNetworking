//
//  MBRMerchantDetail.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRMerchantDetail : MBRBaseModel
@property (nonatomic, copy) NSString* name;// 商家名称
@property (nonatomic, copy) NSString* logoBill;// 商家支付logo
@property (nonatomic, copy) NSString* desc;//商家介绍
@property (nonatomic, copy) NSString* website;//商家官方网站
@property (nonatomic, copy) NSString* logoIntro;//商家介绍logo
@property (nonatomic, copy) NSString* rsaPublic;
@end
