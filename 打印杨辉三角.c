#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[50] [50]= { 0 };
	int i = 0;
	int j = 0;
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <=i;j++)
		{
			if ((j == 0) || (j == i))
			{
				arr[i][j] = 1;
			}
			if (i > 1 && j > 0)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <=i;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
