/*************************************************************************
	> File Name: gun.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 31 Jan 2021 01:27:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include "gun.h" 

static void gun_fire(struct gun *pthis)
{
	if (pthis->vptr) {
		pthis->vptr->fire(pthis);
	}
	else 
		return;
}

static void gun_load(struct gun *pthis, unsigned int bullet_num)
{
	if (pthis->vptr)
		pthis->vptr->load(pthis, bullet_num);
	else 
		return;
}
   
void gun_init(struct gun *pthis, struct gun_vopt *vptr, struct gun_attributes *attr)
{
	pthis->length  = attr->length;
	pthis->weight = attr->weight;
	pthis->caliber = attr->caliber;
	pthis->magazine_size = attr->magazine_size;
	pthis->vptr = vptr;

	pthis->fire = &gun_fire;
	pthis->load = &gun_load;

	fprintf(stderr, "%s\n", __func__);
}
 
