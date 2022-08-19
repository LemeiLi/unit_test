/*************************************************************************
	> File Name: pointer.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 12 Aug 2022 03:47:31 PM CST
 ************************************************************************/

#include<stdio.h>

struct xxdk {
	void **ppv;
	int **ppi;
	int x;
};

int main()
{
	struct xxdk x = {(void**)2, (int **)3, 4};
	struct xxdk *o = &x;

	void *p = o->ppv;
	void **ppv = o->ppv;

	int *pi = o->ppi;
	int **ppi = o->ppi;

	printf("%p\n", o->ppv);
	printf("%p\n", o->ppi);
	printf("%p\n", p);
	printf("%p\n", pi);
	printf("%p\n", ppv);
	printf("%p\n", ppi);

	return 0;
}


