#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	double ret = 1.0;
	for (i = 2;i <= 100;i++)
	{
		int flag = 1.0;//用这个标记实现正负之间的交替
		if (i % 2 != 0)
		{
			ret += flag * 1.0 / i;
		}
		else
		{
			flag = -1;
			ret += flag * 1.0 / i;
		}
	}
	printf("%lf", ret);
	return 0;
}
