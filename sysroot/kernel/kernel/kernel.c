/*
 * ==================================================
 *
 *       Filename:  kernel.c
 *
 *    Description:  终于到内核了!!
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 14时16分32秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include <kernel/tty.h>

void kernel_early(void){
	terminal_initialize();
}

void kernel_main(void){
	printf("Hello, kernel World!\n");
}
