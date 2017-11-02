//
//  BSYUILabel.h
//  Demo
//
//  Created by 白仕云 on 2017/10/24.
//  Copyright © 2017年 SY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSYUILabel : UILabel
/**
 设置frame
 */
-(UILabel *(^)(CGRect))bsy_Rect;

/**
 设置背景颜色
 */
-(UILabel *(^)(UIColor *))bsy_bgColor;


/**
 设置边框宽度
 */
-(UILabel *(^)(CGFloat ))bsy_LayerWith;

/**
 设置边框颜色
 */
-(UILabel *(^)(UIColor *))bsy_LayerColor;
/**
 设置边框圆角度
 */
-(UILabel *(^)(CGFloat))bsy_angle;

/**
 设置边框设置
 */
-(UILabel *(^)(BOOL))bsy_maskBool;

/**
 设置文本颜色
 */
-(UILabel *(^)(UIColor *))bsy_textColor;


/**
 设置文本大小
 */
-(UILabel *(^)(CGFloat ))bsy_textFont;


/**
 设置文本对齐方式
 */
-(UILabel *(^)(NSTextAlignment))bsy_textAlignment;

/**
 设置文本行数模式
 */
-(UILabel *(^)(NSLineBreakMode))bsy_textBreakMode;


/**
 设置文本行数
 */
-(UILabel *(^)(NSInteger))bsy_textnumberOfLines;

/**
 创建View

 @param block 返回所有需要实现的blcok
 @return 返回自己
 */
+(UILabel *)makeCustomView:(void(^)(BSYUILabel *))block;
@end
