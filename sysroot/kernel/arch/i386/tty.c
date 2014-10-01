/*
 * ==================================================
 *
 *       Filename:  tty.c
 *
 *    Description:  
 *
 *        Version:  0.01
 *        Created:  2014年10月01日 星期三 14时18分41秒
 *         Author:  ChrisZZ, zchrissirhcz@163.com
 *        Company:  ZJUT
 *
 * ==================================================
 */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

//一下子包含了这么多std开头的文件，有种莫名的违和感
#include <kernel/vga.h>

size_t terminal_row;
size_t terminal_column;
uint8_t terminal_color;
uint16_t* terminal_buffer;

void terminal_initialize(void){
	terminal_row=0;
	terminal_column=0;
	terminal_color=make_color(COLOR_LIGHT_GREY, COLOR_BLACK);//绘制tty终端背景颜色
	terminal_buffer=VGA_MEMORY;
	for(size_t y=0; y<VGA_HEIGHT; y++){
		for(size_t x=0; x<VGA_WIDTH; x++){
			const size_t index=y*VGA_WIDTH + x;
			terminal_buffer[index]=make_vgaentry(' ', terminal_color);
		}
	}
}

//选择终端颜色
void terminal_setcolor(uint8_t color){
	terminal_color = color;
}


//
void terminal_putentryat(char c, uint8_t color, size_t x, size_t y){
	const size_t index=y*VGA_WIDTH + x;
	terminal_buffer[index]=make_vgaentry(c, color);
}

//绘制单个字符具体实现
void terminal_putchar(char c){
	terminal_putentryat(c, terminal_color, terminal_column, terminal_row);
	if(++terminal_column == VGA_WIDTH){
		terminal_column = 0;
		if(++terminal_row == VGA_HEIGHT){
			terminal_row = 0;
		}
	}
}

//打印单个字符
void terminal_write(const char* data, size_t size){
	for(size_t i=0; i<size; i++){
		terminal_putchar(data[i]);
	}
}

//打印字符串
void terminal_writestring(const char* data){
	terminal_write(data, strlen(data));
}
