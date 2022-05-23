/*************************************************************************
	> File Name: thread.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 28 Sep 2019 07:26:12 PM CST
 ************************************************************************/

#include<iostream>
#include<boost/thread/thread.hpp>
#include<boost/thread/mutex.hpp>
#include<boost/function.hpp>

using namespace std;

void hello()
{
	std::cout << "hello world" << std::endl;
}

class HelloWorld
{
public:
	void hello(const std::string& str) {
		std::cout << str << std::endl;		
	}
};

boost::mutex io_mutex;
struct counter
{
	counter(int id): _id(id) {}

	void operator() ()
	{
		for (int i = 0; i < 10; ++i) {
			boost::mutex::scoped_lock lock(io_mutex);
			std::cout << _id << ": " << i << std::endl;
		}
	}

	int _id;
};

class HelloWorldInThread
{
public:
	static void hello() {
		std::cout << "hello world" << std::endl;
	}

	static void start() {
		boost::thread thrd(hello);
		thrd.join();
	}

};

class HelloWorldInThreadNoStatic
{
public:
	void hello() {
		std::cout << "hello world" << std::endl;
	}

	void start() {
		boost::function0<void> f = boost::bind(&HelloWorldInThreadNoStatic::hello, this);
		boost::thread thrd(f);
		thrd.join();
	}
};

int main(int argc, const char* argv[])
{
	HelloWorld obj;
	boost::thread thrd0(&hello);
	boost::thread thrd1(boost::bind(&HelloWorld::hello, &obj, "hello world"));
	
	boost::thread thrd2(counter(1));
	boost::thread thrd3(counter(2));

	HelloWorldInThread::start();
	HelloWorldInThreadNoStatic hello;
	hello.start();

	thrd0.join();
	thrd1.join();
	thrd2.join();
	thrd3.join();

	return 0;
}


