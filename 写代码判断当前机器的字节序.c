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
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}