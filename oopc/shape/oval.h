/*************************************************************************
	> File Name: oval.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 04:07:46 PM CST
 ************************************************************************/

#ifndef _OVAL_H
#define _OVAL_H

struct shape;
struct shape_vtbl;
struct oval;

#define oval_attributes \
	int a; \
	int b; \

#define oval_operations \
	shape_operations \

struct oval {
	struct shape base;
	oval_attributes
	oval_operations
};

extern struct oval* construct_oval(int a, int b);
extern void destruct_oval(struct shape** pthis);


#endif // _OVAL_H
