#include <stdio.h>

struct xxdk {
	int len;
	char* str;
};

struct xxdk test_xxdk(struct xxdk* x)
{
	struct xxdk lval;

	lval.len = 10;
	lval.str = "xxdk";

	return lval;
}

int main()
{ 
	printf("Hello world\n");
	
	struct xxdk val;
	val = test_xxdk(NULL);

	printf("Hello world: %d\n", val.len);
	printf("Hello world: %s\n", val.str);
	

    return 0;
}

