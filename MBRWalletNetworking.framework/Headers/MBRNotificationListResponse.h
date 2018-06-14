//
//  MBRNotificationListResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRNotification.h"
@interface MBRNotificationListResponse : NSObject

@property (nonatomic, assign) NSInteger total;

@property (nonatomic, strong) NSArray<MBRNotification *>* list;

@end
