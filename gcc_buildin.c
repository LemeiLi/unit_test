/*************************************************************************
	> File Name: gcc_buildin.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 13 Dec 2020 01:07:56 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	void *faddr = __builtin_frame_address(0); ///< get the frame address of this function
	void *raddr = __builtin_return_address(0); ///< get the return address of this function
	printf("%p\n", faddr);
	printf("%p\n", raddr);

	return 0;
}

