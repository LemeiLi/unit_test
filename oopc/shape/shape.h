/*************************************************************************
	> File Name: shape.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 03:45:40 PM CST
 ************************************************************************/

#ifndef _SHAPE_H
#define _SHAPE_H

struct shape;

#define shape_attributes \

#define shape_operations \
	int (*area)(const struct shape* pthis); \

struct shape_vtbl {
	shape_operations
};

struct shape {
	const struct shape_vtbl *vptr;
	shape_attributes
	shape_operations
};

void shape_init(struct shape* pthis, void* vptr);

#endif // _SHAPE_H
