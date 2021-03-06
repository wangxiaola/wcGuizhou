//
//  TBMainCollectionViewCell.h
//  Telecom
//
//  Created by 王小腊 on 2017/3/19.
//  Copyright © 2017年 王小腊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TBMainCollectionViewCell : UICollectionViewCell

- (void)setBackImageData:(NSDictionary *)data;

/**
 设置红点数量

 @param number 数量
 @param section 区
 */
- (void)setTheRedDotNumber:(NSInteger)number cellSection:(NSInteger)section;

/**
 清除红点
 */
- (void)removeRedDot;
@end
