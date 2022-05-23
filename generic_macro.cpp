/*************************************************************************
	> File Name: max_macro.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 23 Jan 2021 05:33:32 PM CST
 ************************************************************************/

#include<stdio.h>

/* Indirect macros required for expanded argument pasting, eg. __LINE__. */
#define ___PASTE(a, b) a##b
#define __PASTE(a, b) ___PASTE(a, b)

/* gcc Common-Predefined-Macros __COUNTER__ */
#define __UNIQUE_ID(prefix) __PASTE(__PASTE(__UNIQUE_ID_, prefix), __COUNTER__)

#define __max(t1, t2, max1, max2, x, y) ({		\
	t1 max1 = (x);					\
	t2 max2 = (y);					\
	(void) (&max1 == &max2);		\
	max1 > max2 ? max1 : max2; })

/**
 * max - return maximum of two values of the same or compatible types
 * @x: first value
 * @y: second value
 */
#define max(x, y)					\
	__max(typeof(x), typeof(y),			\
	      __UNIQUE_ID(max1_), __UNIQUE_ID(max2_),	\
	      x, y)


int main()
{
	int x = 10, y = 100;	

	printf("max(a, b): %d\n", max(x, y));

	printf("unique_id: %d\n", __COUNTER__);
	printf("unique_id: %d\n", __COUNTER__);
	printf("unique_id: %d\n", __COUNTER__);

	return 0;
}




