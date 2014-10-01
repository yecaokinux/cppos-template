##################################################
# Filename: clean.sh
# Author: ChrisZZ
# E-mail: zchrissirhcz@163.com
# Created Time: 2014年10月01日 星期三 15时45分07秒
##################################################
#!/bin/sh
set -e
. ./config.sh

for PROJECT in $PROJECTS; do
	$MAKE -C $PROJECT clean
done

rm -rfv sysroot
rm -rfv isodir
rm -rfv cppos.iso
