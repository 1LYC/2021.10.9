#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;arr[i] < sz;i++)
	{
		printf("%d ", arr[i]);
		
	}
	if (arr[i] == 10)
	{
		printf("%d\n", arr[i]);
	}
	printf("请输入你要查找的数字\n");
	scanf("%d", &k);
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;//也可以写成：left = mid;
		}
		else if (arr[mid] > k)
		{
			right = mid-1;//也可以写成：right = mid
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
