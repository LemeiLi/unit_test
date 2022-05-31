/*************************************************************************
	> File Name: container_of.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 31 May 2022 05:21:58 PM CST
 ************************************************************************/

#include<stdio.h>

/**
 * container_of - get the struct for this entry
 * @ptr:	the &struct list_head pointer.
 * @type:	the type of the struct this is embedded in.
 * @member:	the name of the list_struct within the struct.
 */
#define container_of(ptr, type, member) \
	((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))

struct test {
	int x;
	int y;
	int z;
};

int main()
{
	struct test tobj;
	
	int *ptr = &tobj.z;

	printf("obj addr = %p, %p\n", &tobj, container_of(ptr, struct test, z));

	return 0;
}
