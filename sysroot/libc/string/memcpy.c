/*
 * ==================================================
 *
 *       Filename:  memcpy.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时20分03秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <string.h>

void* memcpy(void* restrict dstptr, const void* restrict srcptr, size_t size){
	unsigned char* dst=(unsigned char*)dstptr;
	const unsigned char* src=(const unsigned char*)srcptr;
	for(size_t i=0; i<size; i++){
		dst[i]=src[i];
	}
	return dstptr;
}
