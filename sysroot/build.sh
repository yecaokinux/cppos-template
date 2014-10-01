##################################################
# Filename: build.sh
# Author: ChrisZZ
# E-mail: zchrissirhcz@163.com
# Created Time: 2014年10月01日 星期三 15时43分56秒
##################################################
#!/bin/sh
set -e
. ./headers.sh

for PROJECT in $PROJECTS; do
	DESTDIR="$PWD/sysroot" $MAKE -C $PROJECT install
	#echo $DESTDIR
done
