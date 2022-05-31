/*************************************************************************
	> File Name: copy_asign.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 20 Dec 2019 08:43:01 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Test {
public:
	Test(int val): 
		value(val)
	{
	
	}
	Test(const Test &other) = delete;
	Test &operator=(const Test&) = delete;
	void operator()(int val) {
		std::cout << val << std::endl;	
	}
	struct Task {
		void (*func)(void);
		const char* name;
		float rete_hz;
		uint16_t max_time_micros;
	};
	
	struct Task* get_task(void);

private:
	int value;	
};

int main()
{
	int a;
	Test test(10);
	Test test2{10};
	test(10);

	return 0;
}









