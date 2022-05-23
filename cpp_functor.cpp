/*************************************************************************
	> File Name: cpp_functor.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 23 Nov 2019 05:24:11 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int add5(int x)
{
	return x + 5;
}

int minus3(int x)
{
	return x - 3;
}

typedef int (*func_t)(int);

class Functor {
public:
	Functor(int val)
	{
		this->_value = val;
	}
/*
	Functor& add5() {
		this->_value += 5;
		return *this;
	}

	Functor& minus3() {
		this->_value -= 3;
		return *this;
	}
*/
	Functor& map(func_t fn) {
		this->_value = fn(this->_value);
		return *this;
	}

	int (*_method)(int);

	int _value;
};


int main()
{
	int val;
	Functor no(5);
	//no.add5().minus3();
	no.map(add5).map(minus3);

	std::cout << no._value << std::endl;
	
	return 0;
}
