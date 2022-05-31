/*************************************************************************
	> File Name: anonymous_struct.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 31 Jan 2021 02:08:08 PM CST
 ************************************************************************/

#include<stdio.h>

struct A {
	int A_a;
	int A_b;
};

struct B {
	struct A;
	int B_a;
	int B_b;
};

struct C {
	struct {  // unnamed structure 
		int D_a;
		int D_b;
	};
	int C_a;
	int C_b;
};

int main()
{
	//struct B b = { .A_a = 1, .A_b = 2,  .B_a = 3, .B_b = 4,}; // error
	struct C c = {.C_a = 1, .C_b = 2, .D_a = 3, .D_b = 4};

	return 0;
}
