//
//  CastStatus.h
//  ConnectSDK
//
//  Created by Rahul on 16/12/20.
//  Copyright © 2020 LG Electronics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CastDevice.h>
#import <CastState.h>

NS_ASSUME_NONNULL_BEGIN
@class CastDevice

@interface CastStatus : NSObject
@property (nonatomic, copy) CastState *castState;
@property (nonatomic, copy) CastDevice *castDevice;
@end

NS_ASSUME_NONNULL_END
