#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int*arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)//一共需要9趟
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)//第一次最多需要9次比较，第二次最多需要8次比较....
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
