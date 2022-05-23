/*************************************************************************
	> File Name: asm_struct.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 30 Nov 2019 04:52:09 PM CST
 ************************************************************************/

struct xxdk {
	int a; 
	int b;
};

int add(struct xxdk *pthis)
{
	return pthis->a + pthis->b;	
}

int main()
{
	struct xxdk x = {0x666666, 0x888888};

	int c = add(&x);

	while(1);

	return c;
}



