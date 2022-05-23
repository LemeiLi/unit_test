/*************************************************************************
	> File Name: static_B.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 19 Oct 2021 02:07:26 PM CST
 ************************************************************************/

#include<stdio.h>

extern int add(int a, int b);

static int static_vir = 2;

int main()
{
	printf("static_vir(%d) = %d, %d\n", static_vir, add(1, 2), static_vir);

	return 0;
}
