/*************************************************************************
	> File Name: static_disassembly.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Sep 2021 03:36:34 PM CST
 ************************************************************************/

//#include<stdio.h>

static const int a = 0;

static int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int main()
{
	add(1, 2);
	sub(1, 2);


	do {

	} while(1);

	return  0;
}
