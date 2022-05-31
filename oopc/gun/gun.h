/*************************************************************************
	> File Name: /home/caesar/xxdk/unit_test/oopc/gun/gun.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 31 Jan 2021 01:58:59 PM CST
 ************************************************************************/

#ifndef _GUN_H
#define _GUN_H

#define _gun_attributes \
	int length; \
	int weight; \
	int caliber; \
	int magazine_size; \

struct  gun_attributes {
	_gun_attributes
};

struct gun;
#define _gun_operations \
	void (*fire)(struct gun *pthis); \
	void (*load)(struct gun *pthis, unsigned int bullet_num); \

struct gun_vopt {
	_gun_operations
};

struct gun {
	_gun_attributes
	_gun_operations
	struct gun_vopt *vptr;
};

extern void gun_init(struct gun *pthis, struct gun_vopt *vptr, struct gun_attributes *attr);

#endif // _GUN_H
