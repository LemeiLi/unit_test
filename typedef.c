/*************************************************************************
	> File Name: typedef.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 31 Mar 2022 02:44:19 PM CST
 ************************************************************************/

#include<stdio.h>

typedef struct xxdk_t
{
	int property;
	int (*operation)(void);
}xxdk_t;

int main()
{
	struct xxdk_t a;
	xxdk_t b;

	a = b;

	return 0;
}
