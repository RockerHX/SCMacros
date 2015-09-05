//
//  SCSizeMicros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCSizeMicros_h
#define SCSizeMicros_h


#import <Foundation/Foundation.h>


#pragma mark - Macros

#define viewWidth(view)                 (view.frame.size.width)
#define viewHeight(view)                (view.frame.size.height)

#define controllerWidth(controller)     viewWidth(controller.view)
#define controllerHeight(controller)    viewHeight(controller.view)

#define SELF_WIDTH                      viewWidth(self)                                 // 获取视图宽度
#define SELF_HEIGHT                     viewHeight(self)                                // 获取视图高度
#define SELF_CONTROLLER_WIDTH           controllerViewWidth(self)                       // 获取视图控制器宽度
#define SELF_CONTROLLER_HEIGHT          controllerViewHeight(self)                      // 获取视图控制器高度
#define SCREEN_WIDTH                    ([UIScreen mainScreen].bounds.size.width)       // 获取屏幕宽度
#define SCREEN_HEIGHT                   ([UIScreen mainScreen].bounds.size.height)      // 获取屏幕高度


#pragma mark - Constants

FOUNDATION_EXPORT const double ZeroPoint;                       // 原点值

FOUNDATION_EXPORT const double StatusBarHeight;                 // 电池条固定高度

FOUNDATION_EXPORT const double NavigationBarHeight;             // 导航条(NavigationBar)固定高度
FOUNDATION_EXPORT const double TabBarHeight;                    // Tabbar固定高度

FOUNDATION_EXPORT const double BarItemWithHeight;               // BarItem固定高度
FOUNDATION_EXPORT const double TableViewCellDefaultHeight;      // TableViewCell默认高度


#endif