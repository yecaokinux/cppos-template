##################################################
# Filename: qemu.sh
# Author: ChrisZZ
# E-mail: zchrissirhcz@163.com
# Created Time: 2014年10月01日 星期三 15时55分28秒
##################################################
#!/bin/sh

set -e
. ./iso.sh

qemu-system-$(./target-triplet-to-arch.sh $HOST) -cdrom cppos.iso
