//
//  BSYUITextField.h
//  Demo
//
//  Created by 白仕云 on 2017/10/24.
//  Copyright © 2017年 SY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSYUITextField : UITextField
/**
 设置frame
 */
-(BSYUITextField *(^)(CGRect))bsy_Rect;

/**
 设置背景颜色
 */
-(BSYUITextField *(^)(UIColor *))bsy_bgColor;


/**
 设置边框宽度
 */
-(BSYUITextField *(^)(CGFloat ))bsy_LayerWith;

/**
 设置边框颜色
 */
-(BSYUITextField *(^)(UIColor *))bsy_LayerColor;
/**
 设置边框圆角度
 */
-(BSYUITextField *(^)(CGFloat))bsy_angle;

/**
 设置边框设置
 */
-(BSYUITextField *(^)(BOOL))bsy_maskBool;
/**
 设置文本颜色
 */
-(BSYUITextField *(^)(UIColor *))bsy_textColor;


/**
 设置文本大小
 */
-(BSYUITextField *(^)(CGFloat ))bsy_textFont;

/**
 设置文本对齐方式
 */
-(BSYUITextField *(^)(NSTextAlignment))bsy_textAlignment;

/**
 设置文本距左距离
 */
-(BSYUITextField *(^)(CGRect ))bsy_LeftViewRect;
/**
 创建View
 @param block 返回所有需要实现的blcok
 @return 返回自己
 */
+(BSYUITextField *)makeCustomView:(void(^)(BSYUITextField *))block;
@end
