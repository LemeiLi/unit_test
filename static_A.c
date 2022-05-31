/*************************************************************************
	> File Name: static_A.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 19 Oct 2021 02:06:08 PM CST
 ************************************************************************/

#include<stdio.h>

static int static_vir  = 10;

int add(int a, int b) 
{
	printf("%s static_vir = %d\n", __func__, static_vir);
	static_vir = a + b;
	printf("%s static_vir = %d\n", __func__, static_vir);
	return static_vir;
}
