/*************************************************************************
	> File Name: class.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Mon 21 Oct 2019 08:41:09 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
	A() {
		std::cout << "A"<< std::endl;
	}
	~A() {
		std::cout << "~A"<< std::endl;
	}
};

class B {
public:
	B() {
		std::cout << "B"<< std::endl;
	}
	~B() {
		std::cout << "~B"<< std::endl;
	}
private:
	A a;
};

int main()
{
	B b;	
}


