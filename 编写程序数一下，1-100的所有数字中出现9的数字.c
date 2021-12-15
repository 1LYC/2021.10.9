#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for ( i = 1; i <=100; i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			count++;
		}
	}
	count = count - 1;//因为这里99被计算了两次，所以减1
	printf("%d", count);
	return 0;
}
