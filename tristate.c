/*************************************************************************
	> File Name: tristate.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 26 Aug 2022 11:29:41 AM CST
 ************************************************************************/

#include<stdio.h>

int x()
{
	printf("true\n");
	return 1;
}

int y()
{
	printf("false\n");
	return 0;
}

int main()
{
	0 && x() ? x() : y();
	1 && x() ? x() : y();
	
	return 0;
}
