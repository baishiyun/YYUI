//
//  BSYUIButton.h
//  Demo
//
//  Created by 白仕云 on 2017/10/24.
//  Copyright © 2017年 SY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSYUIButton : UIButton
/**
 设置frame
 */
-(BSYUIButton *(^)(CGRect))bsy_Rect;

/**
 设置背景颜色
 */
-(BSYUIButton *(^)(UIColor *))bsy_bgColor;

/**
 设置边框宽度
 */
-(BSYUIButton *(^)(CGFloat ))bsy_LayerWith;

/**
 设置边框颜色
 */
-(BSYUIButton *(^)(UIColor *))bsy_LayerColor;
/**
 设置边框圆角度
 */
-(BSYUIButton *(^)(CGFloat))bsy_angle;

/**
 设置边框设置
 */
-(BSYUIButton *(^)(BOOL))bsy_maskBool;
/**
 设置文本颜色
 */
-(BSYUIButton *(^)(UIColor *))bsy_textColor;

/**
 设置文本大小
 */
-(BSYUIButton *(^)(CGFloat ))bsy_textFont;

/**
 设置文本对齐方式
 */
-(BSYUIButton *(^)(NSTextAlignment))bsy_textAlignment;

/**
 创建View
 @param block 返回所有需要实现的blcok
 @return 返回自己
 */
+(BSYUIButton *)makeCustomView:(void(^)(BSYUIButton *))block;
@end
