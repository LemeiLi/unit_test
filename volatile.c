/*************************************************************************
	> File Name: volatile.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Mon 14 Mar 2022 04:37:26 PM CST
 ************************************************************************/

#include <stdio.h>
 
int main(void)
{
    const int local = 10;
    int *ptr = (int*) &local;
 
    printf("Initial value of local : %d \n", local);
 
    *ptr = 100;
 
    printf("Modified value of local: %d \n", local);
 
    return 0;
}
