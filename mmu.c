/*************************************************************************
	> File Name: ../../unit_test/mmu.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Sep 2021 11:38:38 PM CST
 ************************************************************************/

#include<stdio.h>

unsigned int r0 = 0xC0004000;
unsigned int r1 = 0xC12;
unsigned int r2 = 0xC0008000;
unsigned int r6 = 0x0E;
unsigned int r9 = 0xC0000000; //  <--- start of RAM
unsigned int r10 = 0xD0000000;

volatile int r10gr1 = 0;
int i = 0;

int main()
{
  here:
  if (r1 >= r9) {
	if (r10 >= r1) {
			r10gr1 = 1;
		} else {
			r10gr1 = 0;
		}
  }
  r1 &= ~0x1c;
	if (!r10gr1)
		r1 |= 0x10;
	else 
		r1 |= r6;

	printf("%d r0 = %#x, r1 = %#x\n", i++, r0, r1);
	r0 += 4;

	r1 += 1048576;
	if (r0 != r2)
		goto here;

	printf(" i = %d\n", i);

  return 0;
}


