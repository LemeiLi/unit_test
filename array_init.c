/*************************************************************************
	> File Name: array_init.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 25 May 2022 10:14:30 AM CST
 ************************************************************************/

#include<stdio.h>

#define max 1024

int buf[max] = {[0 ... max-1] = 0xaa};

int main()
{
	printf("%#x\n", buf[5]);
	return 0;
}
