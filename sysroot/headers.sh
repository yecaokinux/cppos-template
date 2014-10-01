##################################################
# Filename: headers.sh
# Author: ChrisZZ
# E-mail: zchrissirhcz@163.com
# Created Time: 2014年10月01日 星期三 15时51分56秒
##################################################
#!/bin/sh
set -e
. ./config.sh

mkdir -p sysroot

for PROJECT in $SYSTEM_HEADER_PROJECTS; do
	DESTDIR="$PWD/sysroot" $MAKE -C $PROJECT install-headers
done
