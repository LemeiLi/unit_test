/*************************************************************************
	> File Name: roundupdown.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 28 Feb 2021 03:44:30 PM CST
 ************************************************************************/

#include<stdio.h>

/* The `const' in roundup() prevents gcc-3.3 from calling __divdi3 */
#define roundup(x, y) (					\
{							\
	const typeof(y) __y = y;			\
	(((x) + (__y - 1)) / __y) * __y;		\
}							\
)
#define rounddown(x, y) (				\
{							\
	typeof(x) __x = (x);				\
	__x - (__x % (y));				\
}							\
)

int main()
{
	int x = 1, y = 2;
	printf("roudup(%d, %d) = %d\n", x, y, roundup(x, y));
	printf("rounddown(%d, %d) = %d\n", x, y, rounddown(x, y));

	x = 3, y = 4;
	printf("roudup(%d, %d) = %d\n", x, y, roundup(x, y));
	printf("rounddown(%d, %d) = %d\n", x, y, rounddown(x, y));

	x = 3, y = 10;
	printf("roudup(%d, %d) = %d\n", x, y, roundup(x, y));
	printf("rounddown(%d, %d) = %d\n", x, y, rounddown(x, y));

	x = 10, y = 2;
	printf("roudup(%d, %d) = %d\n", x, y, roundup(x, y));
	printf("rounddown(%d, %d) = %d\n", x, y, rounddown(x, y));

	return 0;
}
