/*************************************************************************
	> File Name: elf.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 08 Sep 2019 01:51:46 AM PDT
 ************************************************************************/

#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

extern long __bss_start_xxdk, __bss_end_xxdk;

int main()
{
	int a = 3, b = 4;
	int ret = add(a, b);
	
	/**< access the value at symbol __bss_start_xxdk memory's address: long v = __bss_start_xxdk; */
	/**< access symbol __bss_start_xxdk memory's address: we need this symbol address */
	long* p = &__bss_start_xxdk;
	long  v =  __bss_start_xxdk;
	printf("%p\n", p);
	printf("%ld\n", v); ///< zero

	p = &__bss_end_xxdk;
	printf("%p\n", p);


	return 0;
}
