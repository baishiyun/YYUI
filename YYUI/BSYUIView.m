//
//  BSYUIView.m
//  Demo
//
//  Created by Mac on 2017/10/12.
//  Copyright © 2017年 SY. All rights reserved.
//

#import "BSYUIView.h"

@implementation BSYUIView
-(UIView *(^)(CGRect))bsy_Rect
{
    return ^BSYUIView *(CGRect fra){
        self.frame = fra;
        return self;
    };
}
-(UIView *(^)(UIColor *))bsy_bgColor
{
    return ^BSYUIView *(UIColor *sy_color){
        self.backgroundColor = sy_color;
        return self;
    };
}


-(UIView *(^)(CGFloat ))bsy_LayerWith
{
    return ^BSYUIView *(CGFloat bsy_with){
        self.layer.borderWidth = bsy_with;
        return self;
    };
}

/**
 设置边框颜色
 */
-(UIView *(^)(UIColor *))bsy_LayerColor
{
    
    return ^BSYUIView *(UIColor *LayerColor){
        self.layer.borderColor = LayerColor.CGColor;
        return self;
    };
    
}
/**
 设置边框圆角度
 */
-(UIView *(^)(CGFloat))bsy_angle
{
    return ^BSYUIView *(CGFloat angle){
        self.layer.cornerRadius = angle;
        return self;
    };
}

-(UIView *(^)(BOOL))bsy_maskBool
{
    return ^BSYUIView *(BOOL angleBool){
        self.layer.masksToBounds  =angleBool;
        return self;
    };
}

+(UIView *)makeCustomView:(void(^)(BSYUIView *))block
{
    BSYUIView *customeView = [[BSYUIView alloc]init];
    block(customeView);
    return customeView;

}

@end
