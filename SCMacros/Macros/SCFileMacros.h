//
//  SCFileMacros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCFileMacros_h
#define SCFileMacros_h


#define AppHomeDirectory        NSHomeDirectory()
#define AppTmpDirectory         NSTemporaryDirectory()
#define AppDocumentDirectory    NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject

#define IMAGE(imageName)            [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:imageName ofType:nil]]
#define LOADIMAGE(imageName, type)  [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:imageName ofType:type]]


#endif
