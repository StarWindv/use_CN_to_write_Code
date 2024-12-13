/*仅用于娱乐性质的C语言头文件，不建议用在生产环境中
如遇什么问题，均由使用者自行承担
一定要捆绑 sbpro.h 使用，不然就需要你自己修改引用部分以及后续的定义了
有事请联系 StarWindv@vip.qq.com
*/

#ifndef stv_cnh
#define stv_cnh

#if _MSC_VER >= 1600
// -*- coding: utf-8 -*-
#pragma execution_character_set("utf-8")
#endif

#include <stdio.h> // 标准输入输出库
#include <stdlib.h>  // 标准库，包含常用的函数如malloc、free、exit等
#include <string.h>  // 字符串处理库
#include <math.h>    // 数学函数库
#include <ctype.h>   // 字符处理库
#include <time.h>    // 时间处理库
#include <assert.h>  // 断言库
#include <signal.h>  // 信号处理库
#include <setjmp.h>  // 非局部跳转库
#include <locale.h>  // 本地化支持库
#include <errno.h>   // 错误码库
#include <limits.h>  // 定义各种数据类型的极限
#include <float.h>   // 定义浮点数的极限
#include <iso646.h>  // 提供标准C中的逻辑运算符宏定义
#include <wchar.h> // 宽字符支持库
#include <wctype.h> // 宽字符分类库

#define 主函数 main
#define 空 void
#define 无 void
#define 整型 int
#define 浮点 float
#define 双浮点 double
#define 字符 char
#define 字符串 char*
#define 长整型 long
#define 短整型 short
#define 无符号 unsigned
#define 有符号 signed
#define 空指针 NULL
#define 长长整型 long long
#define 无类型 void

#define 如果 if
#define 或者 else if
#define 否则 else
#define 返回 return
#define 当 while
#define 令 for
#define 让 for
#define 继续 continue
#define 中断 break

#define 静态 static
#define 全局 extern
#define 局部 auto
#define 常量 const
#define 易失 volatile
#define 寄存 register


#define 赋值 =
#define 等于 ==
#define 不等于 !=
#define 小于 <
#define 大于 >
#define 小于等于 <=
#define 大于等于 >=
#define 条件 switch
#define 情况 case
#define 输出 printf
#define 输入 scanf
#define 输出字符串 puts
#define 吸收字符串 gets
#define 报错 errno
#define 报错 perror
#define 报错 strerror
#define 跳转 goto
#define 释放 free
#define 分配 malloc
#define 清空 calloc
#define 重新分配 realloc
#define 字符串长度 strlen
#define 复制字符串 strcpy
#define 比较字符串 strcmp
#define 正弦 sin
#define 余弦 cos
#define 平方根 sqrt
#define 时间 time
#define 计时 clock
#define 串转整型 atoi
#define 串转浮点 atof
#define 串转长整型 atol

#define 断言 assert
#define 发送信号 signal
#define 设为本地 setlocale

#define 宽字符 wchar_t
#define 宽字符串 wchar_t*
#define 宽输出 wprintf
#define 宽输入 wscanf
#define 宽输出字符串 wputs
#define 宽吸收字符串 wgets
#define 宽字符串长度 wcslen
#define 宽复制字符串 wcscpy
#define 宽比较字符串 wcscmp
#define 宽串转整型 wcstol
#define 宽串转浮点 wcstof
#define 宽串转长整型 wcstod

#endif
