#ifndef ZUQ_NET
#define ZUQ_NET

#define z_socket socket(AF_INET,SOCK_STREAM,0)
#define z_port(addr, zport) addr.port=htons(zport)
#define z_addr(zaddr, inet) inet_aton(inet, &zaddr.addr)
#define z_bind(fd, addr) bind(fd, (struct sockaddr *)&addr, 16)

#include <stdio.h>
#include <sys/socket.h>
struct z_addr
{
short family;
unsigned short port;
unsigned long addr;
unsigned char zero[8];
};
#endif
