#include <stdio.h>
#include <sys/socket.h>
/*
int bind(int sockfd, struct sockaddr *addr, int addrlen);
int socket(int domain, int type, int protocol);
int listen(int sockfd, int backlog);
int accept(int sockfd, void *addr, int *addrlen);
int send(int sockfd, const void *msg, int len, int flags);
int close(int fd);
*/
struct sockaddr_in
{
short family;
unsigned short port;
unsigned long addr;
unsigned char zero[8];
};

void main(void)
{
char *mes="HELL";

int fd=socket(AF_INET,SOCK_STREAM,0);
struct sockaddr_in addr;
addr.family=AF_INET;
addr.port=htons(4242);
inet_aton("127.0.0.1", &addr.addr);
bind(fd, (struct sockaddr *)&addr, 16);
listen(fd, 2);
int user=accept(fd, NULL, NULL);
send(user, mes, 4, 0);

close(user);
close(fd);
}
