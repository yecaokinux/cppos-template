/* bootloader会查看镜像并从符号表指定的起始位置开始执行*/
ENTRY(_start)

SECTIONS
{
	. = 1M;

	.text BLOCK(4K) : ALIGN(4K)
	{
		*(.multiboot)
		*(.text)
	}

	/* 只读数据 */
	.rodata BLOCK(4K) : ALIGN(4K)
	{
		*(.rodata)
	}

	/* 可读可写数据 (初始化的)*/
	.data BLOCK(4K) : ALIGN(4K)
	{
		*(.data)
	}

	/* 可读可写数据（未初始化的）和栈 */
	.bss BLOCK(4K) : ALIGN(4K)
	{
		*(COMMON)
		*(.bss)
		*(.bootstrap_stack)
	}

	/* 如果想在最终的kernel中添加其他段，也可以防到这里，不过要放到恰当的位置。。。*/

}
