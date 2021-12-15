#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Sum(int i)
{
	//递归实现
	if (i > 9)
	{
		return Sum(i / 10) + i % 10;
	}
	else
	{
		return i;
	}
}
int main()
{
	int i = 1729;
	int n = Sum(i);
	printf("%d", n);
	return 0;
}
