//
//  XMDetailCell.h
//  WSY_XMHelper
//
//  Created by 袁仕崇 on 14/12/7.
//  Copyright (c) 2014年 wilson-yuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMYouKuModel.h"
@interface XMDetailCell : UITableViewCell

@property (nonatomic, strong) XMYouKuModel *youku;

- (void)setCellData: (NSDictionary *)data;

@end