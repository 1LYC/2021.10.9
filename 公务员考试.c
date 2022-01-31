#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score = 0;
	int i = 0;
	int sum = 0;
	int max = 0;
	int min = 100;
	for (i = 0;i < 7;i++)
	{
		scanf("%d", &score);
		sum += score;
		if (max < score)
		{
			max = score;
		}
		if (min > score)
		{
			min = score;
		}
	}
	printf("%.2f", (sum - min - max) / 5.0);
	return 0;
}


