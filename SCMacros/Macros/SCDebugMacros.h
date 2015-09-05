//
//  SCDebugMicros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCDebugMacros_h
#define SCDebugMacros_h


#pragma mark - Log Debug Macros

#ifdef DEBUG
#define DLog(fmt, ...)  NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DLogMethod()    NSLog(@"%s", __func__)
#else
#define DLog(...)
#define DLogMethod()
#endif


#pragma mark - Alert Debug Macros

#ifdef DEBUG
#define ULog(fmt, ...)  {                                                                                                               \
UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__]   \
                                                message:[NSString stringWithFormat:fmt, ##__VA_ARGS__]                                  \
                                               delegate:nil                                                                             \
                                      cancelButtonTitle:@"Ok"                                                                           \
                                      otherButtonTitles:nil];                                                                           \
[alert show];                                                                                                                           \
}
#else
#define ULog(...)
#endif


#endif
