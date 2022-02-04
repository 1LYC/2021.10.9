#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int prime_num(int num)
{
	int i = 0;
	for (i = 3;i < num;i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 101;i < 201;i+=2)
	{
		int is_num = prime_num(i);
		if (is_num == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


