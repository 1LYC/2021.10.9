#define _CRT_SECURE_NO_WARNINGS
//冒泡排序思想：两两相邻的元素进行比较，并且可能的话需要交换
#include<stdio.h>
void bubble_sort(int* arr, int sz)
{
	//n为有多少个元素，这里n为10
	int i = 0;
	for (i = 0;i < sz - 1;i++)//一共需要n-1趟,因为最后一个不用比较
	{
		//一趟中有n个数，则需要n-1次比较
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)//一趟排序
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	printf("排序前：");
	for (a = 0;a <= sz - 1;a++)
	{
		printf("%d ", arr[a]);
	}
	bubble_sort(arr, sz);
	printf("\n排序后：");
	for (a = 0;a <= sz - 1;a++)
	{
		printf("%d ", arr[a]);
	}
	return 0;
}
