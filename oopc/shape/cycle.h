/*************************************************************************
	> File Name: cycle.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 03:47:46 PM CST
 ************************************************************************/

#ifndef _CYCLE_H
#define _CYCLE_H

struct shape;
struct shape_vtbl;
struct cycle;

#define cycle_attributes \
	int radius; \

#define cycle_operations \
	shape_operations \

struct cycle {
	struct shape base;
	cycle_attributes
	cycle_operations
};

extern struct cycle* construct_cycle(int radius);
extern void destruct_cycle(struct shape** pthis);

#endif // _CYCLE_H
