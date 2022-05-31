/*************************************************************************
	> File Name: weak.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 07 Nov 2019 08:53:46 AM CST
 ************************************************************************/

#include<stdio.h>

__attribute__((weak)) void hello(void) 
{
	printf("hello weak symbol\n");
}


int main()
{
	hello();
}
