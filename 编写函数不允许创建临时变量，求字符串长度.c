#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//相当于模拟实现strlen
int my_strlen(char* pc)
{
	char* pt = pc;
	while (*pc)
	{
		pc++;
	}
	return pc - pt;//指针-指针
}

int main()
{
	char arr[] = { "abcdef" };
	int ret=my_strlen(arr);
	printf("%d", ret);
	return 0;
}
