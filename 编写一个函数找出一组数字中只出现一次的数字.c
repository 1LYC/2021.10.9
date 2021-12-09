#define _CRT_SECURE_NO_WARNINGS
//这个数组中只有两个数字是出现一次，其他数字都出现了两次
#include<stdio.h>
void Find(int arr[], int sz, int*x,int*y)
{
	int i = 0;
	int tmp = 0;
	for (i = 0;i < sz;i++)
	{
		tmp ^= arr[i];
		//结果为5^6=3
		//101
		//110
	}
	int pos = 0;
	//记录3的二进制中1的位置，方便分组
	for (i = 0;i < 32;i++)
	{
		if (((tmp >> i) & 1) == 1)
		{
			pos = i;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0;i < sz;i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	//传值调用，用指针记录值，则可以返回两个值
	*x = num1;
	*y = num2;
}
int main()
{
	//运用异或^
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	//需要把5和6分在不同的一组
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Find(arr, sz, &x, &y);
	printf("%d %d", x,y);
	return 0;
}
