#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
//#include <time.h>
#include <string.h>
char lock1=0;
char lock2=0;
char msg[30];

void *thread1(void* args){
	int i=0;
	while( (i++)<10 ){ 
		printf("questo è un thread\n");
		sleep(1);
	}
	pthread_exit(NULL);
}
int main(){
	pthread_t th1;
	pthread_create(&th1, NULL, thread1, NULL);
	
	int i=0;
	while( (i++)<10 ){ 
		printf("sono il main\n");
		sleep(1);
	}
	
	
	pthread_join(th1, NULL);
	return 0;
}
