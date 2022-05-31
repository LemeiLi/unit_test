#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct xxdk {
	bool a;
	unsigned char priv[120];
};

int main()
{
	char i = 66;
	struct xxdk *x = (struct xxdk *)malloc(sizeof(struct xxdk));
	x->a = true;
	x->priv[0] = i;
	x->priv[1] = i;
	
	int *p = (int*)(&x->priv[1]);
	printf("%d\n", *p);

	printf("%p, %p\n", x, x->priv);
	printf("%p, %p\n", x, &(x->priv));
	printf("%c\n", *(x->priv));


    return 0;
}
