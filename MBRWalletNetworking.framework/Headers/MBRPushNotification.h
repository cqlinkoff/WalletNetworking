//
//  MBRPushNotification.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import "MBRBaseModel.h"

@interface MBRPushNotification : MBRBaseModel
@property (nonatomic, copy) NSString* action;

@property (nonatomic, copy) NSString* notificationId;

@property (nonatomic, copy) NSString* payBillId;

@property (nonatomic, copy) NSString* transactionId;

@property (nonatomic, copy) NSString* type;
@end
