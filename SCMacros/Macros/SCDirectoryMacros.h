//
//  SCDirectoryMacros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCDirectoryMacros_h
#define SCDirectoryMacros_h


#define AppHomeDirectory        NSHomeDirectory()
#define AppTmpDirectory         NSTemporaryDirectory()
#define AppDocumentDirectory    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]


#endif
