//
//  MBRPayServiceProtocol.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRBaseServiceProtocol.h"
#import "MBRPayRequest.h"
#import "MBRPayResponse.h"
@protocol MBRPayServiceProtocol <MBRBaseServiceProtocol>
/**
 支付
 
 @param payRequest 支付requestModel
 */
- (void) pay:(MBRPayRequest *)payRequest
    
     success:(void (^_Nonnull)(NSString* message,MBRPayResponse *payResponse))success
     failure:(void (^_Nonnull)(NSString* message,NSInteger code))failure;
@end
