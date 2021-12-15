#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//也有另一种可能 int arr[10]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}
	int max = arr[0];//所以这里不能写成int max = 0,
	//应该将这10个数中的某一个与其他数进行比较
	for (i = 0;i < 10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}
