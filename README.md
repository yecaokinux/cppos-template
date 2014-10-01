cppos-template
==============

自制操作系统时，我在osdev.org上找到了两篇教程，这里是教程对应的代码，本人运行测试通过。
教程中使用grub引导C/C++代码，使用交叉编译器编译出i386下elf格式kernel。


#### 教程地址
1.非常简单的系统
[教程](http://wiki.osdev.org/Bare_Bones)
代码在bare\_bone目录

2.有血有肉的系统
[教程](wiki.osdev.org/Meaty_Skeleton)
代码在sysroot目录

#### 环境说明
##### 基本环境
Elementary OS 0.2
##### 基本工具

```
sudo apt-get update
sudo apt-get install nasm qemu build-essential vim grub xorriso
sudo ln -s /usr/bin/qemu-system-i386 /usr/bin/qemu
```

##### 交叉编译器
[教程](http://wiki.osdev.org/GCC_Cross-Compiler)

