#define _CRT_SECURE_NO_WARNINGS
//1 1 2 3 5 8 13 21 34 55
////版本1：计算的数太大的话，会有大量重复计算，效率的
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//版本2：交换移位，优点不会重复计算，效率较高
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 2;
	int n = 0;
	scanf("%d", &n);
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0;i < n - 3;i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		printf("%d", c);
	}
	return 0;
}
