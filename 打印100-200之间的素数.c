#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101;i <= 200;i+=2)
	{
		int j = 0;
		int flag = 1;
		for (j = 2;j <=sqrt(i);j++)
		{
			
			if (i % j == 0)
			{
				flag = 0;
			}
		}
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d", count);
	return 0;
}
