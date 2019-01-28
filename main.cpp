#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/bind_executor.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl/stream.hpp>
#include <boost/asio/strand.hpp>

#include "spdlog/spdlog.h"

int main()
{
	boost::asio::io_context ioc;
	spdlog::info("Welcome to spdlog!");
	return 0;
}