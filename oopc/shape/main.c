/*************************************************************************
	> File Name: main.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 24 Jan 2021 04:14:21 PM CST
 ************************************************************************/

#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include "shape.h"
#include "cycle.h"
#include "oval.h"

struct shape* largest_shape(struct shape *shapes[], uint32_t nshapes)
{
	struct shape *s = NULL; 
	uint32_t max = 0U;
	
	for (uint32_t i = 0U; i < nshapes; i++) {
		uint32_t area = shapes[i]->area(shapes[i]);
		if (area > max) 
			max = area;
		s = shapes[i];
	}

	return s;
}

int main()
{
	struct shape *s[3] = {NULL};

	s[0] = (struct shape *)construct_cycle(10);
	s[1] = (struct shape *)construct_oval(10, 20);

	s[2] = largest_shape(s, 2);

	printf("largest area: %u\n", s[2]->area(s[2]));

	destruct_cycle(&s[0]);
	destruct_oval(&s[1]);

	return 0;
}



