/*************************************************************************
	> File Name: base.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 03:06:33 PM CST
 ************************************************************************/

#include <stdio.h>
#include "shape.h"

static int area(const struct shape* pthis)
{
	if (pthis->vptr->area)
		return pthis->vptr->area(pthis);
	else 
		return 0;
}

void shape_init(struct shape* pthis, void* vptr)
{
	pthis->vptr = vptr;
	pthis->area = &area;
}


