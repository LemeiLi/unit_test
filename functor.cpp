/*************************************************************************
	> File Name: functor.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Mon 25 Nov 2019 09:46:23 AM CST
 ************************************************************************/

#include<iostream>
#include<assert.h>
#include<vector>
#include <algorithm>

struct add_x {
	add_x(int x): x(x) {}
	int operator()(int y) const { return x + y; }

private:
	int x;
};

int main()
{
	add_x add42(42);
	int i = add42(8);

	std::vector<int> in;
	std::vector<int> out(in.size());

	std::transform(in.begin(), in.end(), out.begin(), out.end(), add_x(1));

}
