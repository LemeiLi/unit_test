/*************************************************************************
	> File Name: ascii2char.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 02 Oct 2021 12:12:40 PM CST
 ************************************************************************/

#include<stdio.h>

char alp[26] = {
	'a', 'A', '0',
};

int main(int argc, const char* argv)
{
	for (int i = 0; i < 26; i++) {
		printf("ascii %u(%#x), char %c; ", alp[0] + i, alp[0] + i, alp[0] + i);
	}
	putchar('\n');
	for (int i = 0; i < 26; i++) {
		printf("ascii %u(%#x), char %c; ", alp[1] + i, alp[1] + i, alp[1] + i);
	}

	putchar('\n');
	for (int i = 0; i < 9; i++) {
		printf("ascii %u(%#x), num %c; ", alp[2] + i, alp[2] + i, alp[2] + i);
	}
	
	return  0;
}



