/*************************************************************************
	> File Name: min.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 07 May 2020 10:40:04 AM CST
 ************************************************************************/

#include<stdio.h>

#define min(x, y) ({ \
	const typeof(x) __x = (x); \
	const typeof(y) __y = (y); \
	(void) (&__x == &__y); \
	__x < __y ? __x : __y; })

int main()
{
	printf("min(10, 20): %d\n", min(10, 20));
	printf("min(10, 2.2): %d\n", min(10, 2.2));
	int a = 10;
	double b = 20;
	&a == &b;

	return 0;
}


