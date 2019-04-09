#include "inet.h"

void main(void)
{
char *mes="HELL";

int fd=z_socket;
struct z_addr addr;
addr.family=AF_INET;
z_port(addr, 4243);
z_addr(addr, "127.0.0.1");
z_bind(fd, addr);

listen(fd, 1);
int user=accept(fd, NULL, NULL);
send(user, mes, 4, 0);
close(user);
close(fd);
}
