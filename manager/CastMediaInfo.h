//
//  CastMediaInfo.h
//  ConnectSDK
//
//  Created by Rahul on 16/12/20.
//  Copyright © 2020 LG Electronics. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CastMediaInfo : NSObject
@property (nonatomic, copy) NSString *mediaURL;
@property (nonatomic, copy) NSString *iconURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *mimeType;
@end

NS_ASSUME_NONNULL_END
