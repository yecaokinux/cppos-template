/*
 * ==================================================
 *
 *       Filename:  putchar.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时23分11秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <stdio.h>

#if defined(__is_cppos_kernel)
#include <kernel/tty.h>
#endif

int putchar(int ic){
#if defined(__is_cppos_kernel)
	char c=(char)ic;//为啥要复制一份？不懂
	terminal_write(&c, sizeof(c));
#else
	//TODO: 需要自行实现系统调用的写操作
#endif
	return ic;//这个返回值也很诡异，感觉没有作用
}
