#define _CRT_SECURE_NO_WARNINGS
////版本1：
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//版本2：递归
#include<stdio.h>
int my_factorial(int n)
{
	if (n > 1)
	{
		return n * my_factorial(n - 1);
	}
	return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = my_factorial(n);
	printf("%d", ret);
	return 0;
}
