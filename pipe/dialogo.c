#include <stdio.h>
#include <unistd.h>

int main()
{
	int fd1[2],fd2[2];
	
	if( pipe(fd1)<0 ){
		perror("");
		return 0;
	}
	if( pipe(fd2)<0 ){
		perror("");
		return 0;
	}
	
	int c_pid;
	
	if( (c_pid=fork())==0 ){
		return 0;
	} 
	return 0;
}

