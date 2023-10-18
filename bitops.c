/*************************************************************************
	> File Name: bitops.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 30 Jun 2023 06:36:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int x = 127;

	for (int i = 0; i <= x; i++)
	printf("%d & 31 = %d\n", i, i & 31);

}
