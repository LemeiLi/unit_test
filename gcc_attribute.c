#include <stdio.h>

#define __compiletime_object_size(obj) __builtin_object_size(obj, 0)
#define __compiletime_warning(message) __attribute__((__warning__(message)))
#define __compiletime_error(message) __attribute__((__error__(message)))
#define __must_check		__attribute__((warn_unused_result))

#define GCC_VERSION (__GNUC__ * 10000	\
		     + __GNUC_MINOR__ * 100	    \
		     + __GNUC_PATCHLEVEL__)

#if GCC_VERSION > 60000
# error gcc id too new!
#endif


#define xxdk (2 << 30)
#define xxdkUL (2UL << 40)

 __compiletime_warning("warning\n") int add (int a, int b)
{
	return a + b;
}

int __must_check check_add(int a, int b)
{
	return a + b;
}

__compiletime_error("error\n") int sub (int a, int b)
{
	return a - b;
}

enum Tank {
	M1A2,
	K90,
};

struct xxdk_a {
	int a;
	int b;
};

struct xxdk_b {
	char a;
	char b;
};

int struct_add(void* addr_a, void* addr_b)
{
	printf("objsize %lu\n", __compiletime_object_size(addr_a));
	printf("objsize %lu\n", __compiletime_object_size(addr_b));

	return 0;
}

int main()
{
    printf("sizeof macro xxdk: %lu\n", sizeof(xxdk));
    printf("xxdk: %u\n", xxdk);
    printf("sizeof macro xxdkUL: %lu\n", sizeof(xxdkUL));
    printf("xxdk: %ld\n", xxdkUL);
	printf("sizeof enum: %lu\n", sizeof(enum Tank));
    printf("gcc version: %u\n", GCC_VERSION);

	add(1, 2);       ///< warning: call to ‘add’ declared with attribute warning: warning 
	//sub(1, 2);       ///< error: call to ‘sub’ declared with attribute error: error
	check_add(1, 2); ///< warning: ignoring return value of ‘check_add’, declared with attribute warn_unused_result [-Wunused-result]
	struct xxdk_a a;
	struct xxdk_b b;
	struct_add(&a, &b);

	printf("1 is constant? %d\n", __builtin_constant_p(1));
	printf("a is constant? %d\n", __builtin_constant_p(a));

	printf("%s\n", __PRETTY_FUNCTION__);

	char here[] = "A"__PRETTY_FUNCTION__"in"__FILE__;

    return 0;
}

