//
//  CastState.h
//  ConnectSDK
//
//  Created by Rahul on 16/12/20.
//  Copyright © 2020 LG Electronics. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    NO_DEVICE_AVAILABLE = 0,
    NOT_CONNECTED,
    CONNECTING,
    CONNECTED,
} CastState;
