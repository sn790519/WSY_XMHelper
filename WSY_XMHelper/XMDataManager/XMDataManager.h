//
//  XMDataManager.h
//  WSY_LOLHelper
//
//  Created by 袁仕崇 on 14/12/6.
//  Copyright (c) 2014年 wilson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XMAPI.h"


typedef NS_ENUM(NSInteger, XMVideoDownloadQuality) {
    XMVideoDownloadQualityNormal,
    XMVideoDownloadQualityHigher,
    XMVideoDownloadQualitySuper,
};

@class RACSignal;
@interface XMDataManager : NSObject

@property (nonatomic, strong) NSArray *videoList;
@property (nonatomic, strong) NSArray *detailList;
@property (nonatomic, strong) NSMutableArray *downloadList;
@property (nonatomic, strong) NSMutableDictionary *downloadNow;
@property (nonatomic, assign) XMVideoDownloadQuality quality;


+ (instancetype)defaultDataManager;

- (RACSignal *)requestVideoListWithVideoType: (VIDEO_TYPE)type;
- (void)requestVideoDetailListWithType: (VIDEO_TYPE)type name: (NSString *)name page: (NSInteger)page;
//download
- (void)addVideoDownloadWithVideoDic: (NSDictionary *)videoDic;
- (void)deleteLocalDownloadFileWithFileUUID: (NSString *)uuid;

@end

//@protocol XMVideoDownloadDelegate <NSObject>
//
//- (void)xmVideoDownloadSetProgress: (float)progress withInfo: (NSDictionary *)info;
//
//@end