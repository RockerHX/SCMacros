//
//  SCColorMicros.h
//  SCMacros
//
//  Created by ShiCang on 15/9/5.
//  Copyright (c) 2015年 SCLibrary. All rights reserved.
//

#ifndef SCColorMacros_h
#define SCColorMacros_h


// 通过十六进制的rgb值来返回一个UIColor实例
#define UIColorFromRGB(rgbHexValue)     {\
[UIColor colorWithRed:((float)((rgbHexValue & 0xFF0000) >> 16))/255.0f\
                green:((float)((rgbHexValue & 0xFF00) >> 8))/255.0f\
                 blue:((float)(rgbHexValue & 0xFF))/255.0f\
                alpha:1.0f]\
}

// 通过R,G,B,A四个原生值来返回一个UIColor实例
#define UIColorWithRGBA(r,g,b,a)        [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]


#endif
