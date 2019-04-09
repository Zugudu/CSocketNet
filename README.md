# HOW TO CONNECT
## 1.Create socket
	int fd=z_socket;
	fd.family=AF_INET;		//Need set AF, becouse i am rukojop and cannot solve this for you
## 2.Create & set-up address
	struct z_addr addr;		//Create struct of addr
	z_port(addr, 4242);		//Set port to addr
	z_addr(addr, "127.0.0.1");	//Set ip to addr

## 3.Link socket to our address
	z_bind(fd, addr);
