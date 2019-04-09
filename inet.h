#ifndef ZUQ_NET
#define ZUQ_NET 42
#include <stdio.h>
#include <sys/socket.h>
struct z_addr
{
short family=AF_INET;
unsigned short port;
unsigned long addr;
unsigned char zero[8];
};

#define z_socket socket(AF_INET,SOCK_STREAM,0)
#define z_bind(fd, addr) bind(fd, (struct sockaddr *)&addr, 16)
#define z_port(addr, port) addr.port=htons(port)
#define z_addr(addr, inet) inet_aton(inet, &addr.addr)
#define z_bind(fd, addr) bind(fd, (struct sockaddr *)&addr, 16)
#endif
