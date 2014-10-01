/*
 * ==================================================
 *
 *       Filename:  abort.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时08分12秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

__attribute__((__noreturn__))
void abort(void){
	//TODO: 添加proper kernel panic
	printf("Kernel Panic: abort()\n");
	while(1) {}
	__builtin_unreachable();
}
