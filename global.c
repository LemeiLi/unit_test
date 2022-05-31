#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int global_val = add(1, 2);

int main()
{
    printf("Hello World: %d\n", global_val);
    return 0;
}

