/*************************************************************************
	> File Name: cycle.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 03:24:52 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "shape.h"
#include "cycle.h"

static int area(const struct shape* pthis)
{
	struct cycle *pthis_ = (struct cycle *)pthis;
	return pthis_->radius * pthis_->radius * 3.14;
}

static struct shape_vtbl vtbl = {
	.area = &area,
};

static void cycle_init(struct cycle* pthis, int radius, void* vptr)
{
	shape_init((struct shape *)pthis, vptr);
	pthis->area = &area;
	pthis->radius = radius;
}

struct cycle* construct_cycle(int radius)
{
	struct cycle* pthis = (struct cycle *)malloc(sizeof(struct cycle));
	cycle_init(pthis, radius, &vtbl);

	return pthis;
}

void destruct_cycle(struct shape** pthis)
{
	struct cycle **pthis_ = (struct cycle **)pthis;
	if (*pthis_) {
		free(*pthis_);
		*pthis_ = NULL;
	}
}

