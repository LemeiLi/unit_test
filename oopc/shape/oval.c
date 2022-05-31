/*************************************************************************
	> File Name: oval.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 04:09:23 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "shape.h"
#include "oval.h"

static int area(const struct shape* pthis)
{
	const struct oval *pthis_ = (struct oval *)pthis;
	return pthis_->a * pthis_->b * 3.14;
}

static struct shape_vtbl vtbl = {
	.area = &area,
};

static void oval_init(struct oval* pthis, int a, int b, void* vptr)
{
	shape_init((struct shape *)pthis, vptr);
	pthis->area = &area;
	pthis->a = a;
	pthis->b = b;
}

struct oval* construct_oval(int a, int b)
{
	struct oval* pthis = (struct oval *)malloc(sizeof(struct oval));
	oval_init(pthis, a, b, &vtbl);

	return pthis;
}

void destruct_oval(struct shape** pthis)
{
	struct oval **pthis_ = (struct oval **)pthis;
	if (*pthis_) {
		free(*pthis_);
		*pthis_ = NULL;
	}
}




