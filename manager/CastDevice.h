//
//  CastDevice.h
//  ConnectSDK
//
//  Created by Rahul on 16/12/20.
//  Copyright © 2020 LG Electronics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <core/Devices/ConnectableDevice.h>

NS_ASSUME_NONNULL_BEGIN

@interface CastDevice : NSObject
@property (nonatomic, copy) NSString *Id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;

+(CastDevice) fromConnectableDevice:(ConnectableDevice)connectableDevice;
+(CastDevice) forDeviceNotAvailable;
@end

NS_ASSUME_NONNULL_END
