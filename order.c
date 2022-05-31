/*************************************************************************
	> File Name: order.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 11 Mar 2022 05:12:06 PM CST
 ************************************************************************/

#include<stdio.h>

#define min(a, b) ((a) > (b) ? (b) : (a))

int ffs(int x)
{
	int sum = 0;

	if ((x & 0xFFFF) == 0) {
		x >>= 16;	
		sum += 16;
	}
	if ((x & 0xFF) == 0) {
		x >>= 8;	
		sum += 8;
	}
	if ((x & 0xF) == 0) {
		x >>= 4;	
		sum += 4;
	}
	if ((x & 0x7) == 0) {
		x >>= 3;	
		sum += 3;
	}
	if ((x & 0x3) == 0) {
		x >>= 2;	
		sum += 2;
	}

	if ((x & 0x1) == 0) {
		sum += 1;
	}

	return sum;
}

int main()
{
	int order;
	//int start = 0xc0000, end = 0xf0000;
	int start = 0xc1001, end = 0xf0000;

	while(start < end) {
		order = min(11, ffs(start))	;
		printf("start = %#x, order = %d\n", start, order);

		while((start + (1 << order ) ) > end)
			order--;

		start += 1 << order;
	}

	return 0;
}




