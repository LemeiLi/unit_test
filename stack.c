/*************************************************************************
	> File Name: stack.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 29 Sep 2021 09:26:52 AM CST
 ************************************************************************/
static int g_val = 10;

int callee(int a, int b, int c, int d, int e, int f, int h)
{
	int l_val = a + b + c + d + e + f + h + g_val;

	return l_val;
}

int caller(void)
{
	return callee(1, 2, 3, 4, 5, 6, 7);
}
