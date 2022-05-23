/*************************************************************************
	> File Name: c11_attributes.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Mon 14 Dec 2020 09:03:49 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>
#include <stdnoreturn.h>
#include <assert.h>
#include <threads.h>

//_Noreturn void x(int i)

struct person    
{    
	char    *name;    
	char     gender;    
	int      age;    
	int      weight;    
	struct  
	{    
		int  area_code;    
		long phone_number;    
	};   
};    

noreturn void x(int i)
{
	if (i)
		exit(1);
}


atomic_int acnt;
int cnt;

int f(void* thr_data)
{
    for(int n = 0; n < 1000; ++n) {
        ++cnt;
        ++acnt;
        // 对于此例，宽松内存顺序是足够的，例如
        // atomic_fetch_add_explicit(&acnt, 1, memory_order_relaxed);
    }
    return 0;
}

int main()
{
	/**< 1. _Generic */
	printf("%d\n", _Generic( 'a', char: 1, int: 2, long: 3, default: 0));
	printf("%d\n", _Generic( '.', char: 1, int: 2, long: 3, default: 0));
	printf("%d\n", _Generic( 2L, char: 1, int: 2, long: 3, default: 0));

	/**< 2. static_assert */
	//static_assert(sizeof(int) < sizeof(char), "this program requires that int is less than char");
	static_assert(sizeof(int) > sizeof(char), "this program requires that int is less than char");

	/**< 3. aligned_alloc */
	int *p0 = (int*)aligned_alloc(1024, 10*sizeof *p0);
    printf("1024-byte aligned addr: %p\n", (void*)p0);
	//printf("alignof p2: %lu\n", alignof(p2)); ///< c++ 11
    free(p0);

	/**< 4. anonymous struct */
    struct person jim = {"jim", 'F', 28, 65, {21, 58545566}};  
    printf("%d\n", jim.area_code); 

	/**< 5. atomic object */
	_Atomic const int * p1;
	const atomic_int * p2;   
	const _Atomic(int) * p3; 

	/**< 6. thread, test by gcc8.2.1 with parameter -lpthread */
	thrd_t thr[10];
    for(int n = 0; n < 10; ++n)
        thrd_create(&thr[n], f, NULL);
    for(int n = 0; n < 10; ++n)
        thrd_join(thr[n], NULL);

    printf("The atomic counter is %u\n", acnt);
    printf("The non-atomic counter is %u\n", cnt);
 
	/**< 4. noreturn */
	int i = 10;
	x(i);
	printf("here\n");
}
