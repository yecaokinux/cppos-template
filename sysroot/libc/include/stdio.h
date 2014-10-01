/*
 * ==================================================
 *
 *       Filename:  stdio.h
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 14时52分43秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#ifndef _STDIO_H
#define _STDIO_H 1


#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

int printf(const char* __restrict, ...);
int putchar(int);
int puts(const char*);

#ifdef __cplusplus
}
#endif


#endif
