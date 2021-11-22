#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int check(int arr)
{
	char* ps = (char*)&arr;
	return *ps;
}
int main()
{
	int arr = 1;
	int ret=check(arr);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
