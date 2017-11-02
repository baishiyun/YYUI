//
//  BSYUIView.h
//  Demo
//
//  Created by Mac on 2017/10/12.
//  Copyright © 2017年 SY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSYUIView : UIView
/**
 设置frame
 */
-(UIView *(^)(CGRect))bsy_Rect;

/**
 设置背景颜色
 */
-(UIView *(^)(UIColor *))bsy_bgColor;


/**
 设置边框宽度
 */
-(UIView *(^)(CGFloat ))bsy_LayerWith;

/**
 设置边框颜色
 */
-(UIView *(^)(UIColor *))bsy_LayerColor;
/**
 设置边框圆角度
 */
-(UIView *(^)(CGFloat))bsy_angle;

/**
 设置边框设置
 */
-(UIView *(^)(BOOL))bsy_maskBool;

/**
 创建View

 @param block 返回所有需要实现的blcok
 @return 返回自己
 */
+(UIView *)makeCustomView:(void(^)(BSYUIView *))block;
@end
