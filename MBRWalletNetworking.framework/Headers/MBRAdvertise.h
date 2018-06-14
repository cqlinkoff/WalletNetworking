//
//  MBRAdvertise.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRBanner.h"
@interface MBRAdvertise : MBRBaseModel
@property (nonatomic, strong) NSArray<MBRBanner *>* balanceBannerList;

@property (nonatomic, strong) NSArray<MBRBanner *>* paymentBannerList;

@property (nonatomic, strong) NSArray<MBRBanner *>* merchantBannerList;
@end
