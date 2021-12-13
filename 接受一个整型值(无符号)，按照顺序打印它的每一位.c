#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void my_digui(int a)
{
	//递归有一种倒着的思想
	if (a > 9)//递归的出口
	{
		my_digui(a / 10);
		//其中a/10,使其接近出口
	}
	printf("%d ", a % 10);
}

int main()
{
	int a = 1234;
	//一个数%10得最后一位
	//一个数/10去最后一位
	my_digui(a);
	return 0;
}
