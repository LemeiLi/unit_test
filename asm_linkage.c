/*************************************************************************
	> File Name: asm_linkage.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 23 Jan 2021 06:29:34 PM CST
 ************************************************************************/

#define asmlinkage __attribute__((syscall_linkage)) 
//#define asmlinkage __attribute__((regparm(0)))

asmlinkage int add_syscall_linkage(int a, int b)
{
	return a + b;
}

int add_normal(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 10, y = 20, z, k;

	z = add_normal(x, y);
	k = add_syscall_linkage(x, z);

	return k;	
}
