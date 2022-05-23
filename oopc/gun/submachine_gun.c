/*************************************************************************
	> File Name: submachine_gun.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 31 Jan 2021 02:04:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include  "gun.h"

#define _submachine_gun_attributes \

#define _submachine_gun_operations \
	_gun_operations

struct submachine_gun {
	struct gun base;
	_submachine_gun_attributes
	_submachine_gun_operations
};


static void submachine_gun_fire(struct gun *pthis)
{
	printf("fire submachine_gun.\n");
}

static void submachine_gun_load(struct gun *pthis, unsigned int bullet_num)
{
	printf("load %u submachine_gun bullet.\n");
}

static struct gun_vopt vopt = {
	.fire = &submachine_gun_fire,
	.load = &submachine_gun_load,
};

void submachine_gun_init(struct submachine_gun *pthis, struct gun_attributes *attr)
{
	gun_init(&pthis->base, &vopt, attr);
	pthis->fire = &submachine_gun_fire;
	pthis->load = &submachine_gun_load;
}

struct submachine_gun *construct_submachine_gun(struct gun_attributes *attr)
{
	struct submachine_gun *pthis = malloc(sizeof(struct submachine_gun));
	submachine_gun_init(pthis, attr);

	return pthis;
}

void destruct_submachine_gun(struct submachine_gun *pthis)
{
	free(pthis);
}


int main()
{
	struct gun_attributes attr = {.length = 45, .weight = 3, .magazine_size = 30};
	struct gun *tmps = construct_submachine_gun(&attr);
	tmps->fire(tmps);
	tmps->load(tmps, 30);
	tmps->fire(tmps);

	destruct_submachine_gun(tmps);

	return 0;
}
