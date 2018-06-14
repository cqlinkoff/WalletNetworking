//
//  MBRInitData.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"
#import "MBRAdvertise.h"
#import "MBRBgCoin.h"
#import "MBRUpdate.h"
#import "MBRMerchant.h"
@interface MBRInitData : MBRBaseModel


@property (nonatomic, strong) MBRAdvertise* advertise;

@property (nonatomic, strong) NSArray<MBRBgCoin *>* coinList;

@property (nonatomic, strong) MBRUpdate* appUpdate;

@property (nonatomic, copy) NSString* push;   //推送开关 1:关 0:开 （有点怪异）

@property (nonatomic, assign) BOOL pushOn;
@end
