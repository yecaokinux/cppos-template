/*
 * ==================================================
 *
 *       Filename:  strlen.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时12分43秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <string.h>
size_t strlen(const char* string){
	size_t counter=0;
	while(string[counter])
		counter++;
	return counter;
}
