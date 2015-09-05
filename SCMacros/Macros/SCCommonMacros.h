//
//  SCCommonMacros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCCommonMacros_h
#define SCCommonMacros_h


#pragma mark - System Framework Macros

#define AppDeleagate            [(AppDelegate*)[UIApplication sharedApplication] delegate]
#define UserDefault             [NSUserDefaults standardUserDefaults]
#define NotificationCenter      [NSNotificationCenter defaultCenter]


#pragma mark - Custom Macros

#define className(classInstance)    NSStringFromClass([classInstance class])
#define labelSystemFont(size)       [UIFont systemFontOfSize:size]

#define WeakSelf(weakSelf)         __weak __typeof(&*self)weakSelf = self


#endif