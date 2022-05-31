/*************************************************************************
	> File Name: priv_member.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 18 Dec 2019 09:46:33 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdint>

using namespace std;

class Test {
public:
	int get_extra_time(void) {
		return _extra_time;
	}
private:
	int _extra_time;
};
	
Test test;

int main()
{
	std::cout << test.get_extra_time() << std::endl;

	return 0;
}
