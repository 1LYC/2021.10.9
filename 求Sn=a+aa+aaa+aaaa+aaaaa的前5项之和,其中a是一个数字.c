#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求Sn = a + aa + aaa + aaaa + aaaaa
//的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int n = 0;
	int ret = 0;
	for (i = 0;i < 5;i++)
	{
		n = 10 * n + a;//关键点
		ret += n;
	}
	printf("%d", ret);
	return 0;
}
