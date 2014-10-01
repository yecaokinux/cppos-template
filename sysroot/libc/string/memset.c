/*
 * ==================================================
 *
 *       Filename:  memset.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时16分26秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <string.h>

void* memset(void* bufptr, int value, size_t size){
	unsigned char* buf=(unsigned char*)bufptr;
	//哎，标准库里面的memset应该不是这么实现的吧，应该有for循环快的方法
	for(size_t i=0; i<size; i++){
		buf[i]=(unsigned char)value;
	}
	return bufptr;
}
