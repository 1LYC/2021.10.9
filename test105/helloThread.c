#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

void* threadFunc(void* grg) {//线程函数
	printf("In NEW thread\n");
}

int main()
{
	pid_t cid;
	pthread_t tid;
	pthread_create(&tid, NULL, threadFunc, NULL);
	//pthread_join(tid,NULL);
	printf("In main thread\n");
	cid = fork();
	if (cid == 0) {
		int count = 3;
		while (count--) {
			printf("子进程In main thread\n");
		}
	}
	else {
		int count = 3;
		while (count--) {
			printf("父进程In main thread\n");
		}
	}
	return 0;
}
