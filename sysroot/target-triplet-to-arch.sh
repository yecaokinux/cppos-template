##################################################
# Filename: target-triplet-to-arch.sh
# Author: ChrisZZ
# E-mail: zchrissirhcz@163.com
# Created Time: 2014年10月01日 星期三 15时56分38秒
##################################################
#!/bin/sh
if echo "$1" | grep -Eq 'i[[:digit:]]86-'; then
	echo i386
else
	echo "$1" | grep -Eo '^[[:alnum:]_]*'
fi
