#include <stdio.h>

void printA()
{
#define A
#ifdef A
	printf("%s %d\n", __func__, __LINE__);
#endif
#undef A
}

void printB()
{
#ifdef A
	printf("%s %d\n", __func__, __LINE__);
#endif
}

#define debug 0

#if debug
	#define prt(fmt, args...) printf(fmt, ##args)
#else
	#define prt(fmt, args...)
#endif

void printC()
{
	#define debug 1
	prt("xxdk001\n");
	#define debug 0
}

void printD()
{
	prt("xxdk002\n");
}

int main()
{
	printA();
	printB();
	printC();
	printD();

    //printf("Build time: %s\n", __BUILD_STRING__);
    return 0;
}

