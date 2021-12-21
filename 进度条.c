#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
#define NUM 101
#include <windows.h>
int main()
{
	char arr[NUM] = { '\0'};
	//或者 memset(arr,'\0',sizeof(arr));
	memset(arr, '__', sizeof(arr)-1);
	const char* pr = "|/-\\" ;
	int i = 0;
	while (i <= 100)
	{
		printf("[%-100s][%-3d%%] [ %c ]\r", arr, i,pr[i%4]);
		fflush(stdout);//这个是为了解决缓冲区的问题
		arr[i++] = '#';
		Sleep(100);
	}
	printf("\n");
	return 0;
}
