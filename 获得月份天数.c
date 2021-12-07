#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &year, &month)!=EOF)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400==0))//判断是否为闰年
		{
			day[month]=day[month] + 1;
		}
		printf("%d", day[month]);
	}
	return 0;
}
