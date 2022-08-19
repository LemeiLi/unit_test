#########################################################################
# File Name: time.sh
# Author: Caesar
# Email: v.manstein@qq.com
# Created Time: Thu 18 Aug 2022 10:39:13 AM CST
#########################################################################
#!/bin/bash
date1=$(date +"%Y-%m-%d %H:%M:%S")
sys_date1=$(date -d "$date1" +%s)


date2=$(date +"%Y-%m-%d %H:%M:%S")
sys_date2=$(date -d "$date2" +%s)

time=`expr $sys_date2 - $sys_date1`
echo "时间1和时间2的差值: $time"


