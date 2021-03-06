#ifndef ZEUS_NET_IO_SERVICE_H_
#define ZEUS_NET_IO_SERVICE_H_

#include <boost/noncopyable.hpp>
#include <boost/asio.hpp>


class IOService : private boost::noncopyable
{
    boost::asio::io_service internal_service;

public:
    IOService()
        : _io_service(internal_service)
    {
    }

public:
    boost::asio::io_service& service()
    {
        return _io_service;
    }

private:
    boost::asio::io_service& _io_service;
};

#endif