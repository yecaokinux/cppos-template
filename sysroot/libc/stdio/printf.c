/*
 * ==================================================
 *
 *       Filename:  printf.c
 *
 *    Description: 我去，终于到了关键的一个函数printf()了！ 
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 15时26分31秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#if defined(__is_cppos_kernel)
#include <kernel/tty.h>
#endif

//printf要用print实现
static void print(const char* data, size_t data_length){
	for(size_t i=0; i<data_length; i++){
		putchar((int) ((const unsigned char*)data)[i]);
	}
}

int printf(const char* restrict format, ...){
	va_list parameters;  //va_list是一个宏，定义在stdarg.h中，用来解决变参问题
	va_start(parameters, format);

	int written=0;
	size_t amount;
	bool rejected_bad_specifier=false;

	while(*format != '\0'){
		if(*format !='%'){
print_c:
			amount=1;
			while(format[amount] && format[amount] != '%')
				amount++;
			printf(format, amount);
			format+=amount;
			written+=amount;
			continue;
		}
		const char* format_begun_at=format;

		if(*(++format) == '%')
			goto print_c;//我去，还是用了goto语句。这语句我只在最开始学谭C++时用过

		if(rejected_bad_specifier){ //格式错误...
incomprehensible_conversion:
			rejected_bad_specifier = true;
			format=format_begun_at;
			goto print_c;
		}

		if (*format=='c'){
			format++;
			char c=(char)va_arg(parameters, int /* char类型自动转为int类型 */);
			print(&c, sizeof(c));
		} else if(*format == 's') {
			format++;
			const char* s=va_arg(parameters, const char*);
			print(s, strlen(s));
		} else {
			goto incomprehensible_conversion;
		}
	}
	va_end(parameters);
	return written;
}
