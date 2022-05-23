/*************************************************************************
	> File Name: xor7.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 17 Sep 2021 04:30:32 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	for (int i = 0, j = 100;  i < 100; i++) {
		j&=~7;
		printf("i &~7 = %d\n", j++);
	}

	return 0;
}
