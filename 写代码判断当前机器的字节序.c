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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}