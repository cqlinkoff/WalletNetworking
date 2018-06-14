//
//  MBRUpdate.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRUpdate : MBRBaseModel

/**
 版本说明
 */
@property (nonatomic, copy) NSString* releaseNote;

/**
 是否更新
 */
@property (nonatomic, copy) NSString* update; //0-不更新；1-普通更新；2-强制更新

/**
 更新的plist文件地址
 */
@property (nonatomic, copy) NSString* url;

/**
 版本号
 */
@property (nonatomic, copy) NSString* version;
@end
