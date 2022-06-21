/*************************************************************************
	> File Name: pointer_subtract.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Jun 2022 03:17:48 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>

struct page {
	uint32_t flags;
	uint32_t *mapping;
	uint32_t priv;
};

struct page g_pages[10];

int main()
{
	struct page *ph = g_pages;
	struct page *pt = &g_pages[9];

	fprintf(stderr,"ph - pt = %ld\n", pt - ph);  

	return 0;
}
