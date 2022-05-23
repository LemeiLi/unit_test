/*************************************************************************
	> File Name: tcp_server.cpp
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 28 Sep 2019 09:02:21 PM CST
 ************************************************************************/

#include<iostream>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/asio.hpp>
#include <boost/enable_shared_from_this.hpp>

using namespace std;
using namespace boost::asio;
using namespace boost::posix_time;
using boost::system::error_code;

io_service service;

size_t read_complete(char* buf, const error_code& err, size_t bytes)
{
	if (err) return 0;
	bool found = std::find(buf,buf + bytes,'\n') < buf + bytes;
	return found ? 0 : 1;
}

void handle_connections()
{
	ip::tcp::acceptor acceptor(service, ip::tcp::endpoint(ip::tcp::v4(), 8001));
	char buf[1024];

	while (true) {
		ip::tcp::socket sock(service);
		acceptor.accept(sock);
		int bytes = read(sock, buffer(buf), boost::bind(read_complete, buf, _1, _2));
		std::string msg(buf, bytes);
		sock.write_some(buffer(msg));
		sock.close();
	}
}

int main(int argc, const char* argv[])
{
	handle_connections();	
}

