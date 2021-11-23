//#define _CRT_SECURE_NO_WARNINGS
////输入一个整数数组，实现一个函数
////来调整该数组中数字的顺序使得数组中所有的奇数
////位于数组的前半部分，所有偶数位于数组的后半部分
//#include<stdio.h>
//#include<assert.h>
//void adjustment(int* const arr,int sz)
//{
//	assert(arr != NULL);//断言
//	int left = (*arr);
//	int right = sz - 1;
//	while (left<right)
//	{
//		if (*(arr + left) % 2 == 1 && left < right)
//		{
//			left++;
//		}
//		if (*(arr + right) % 2 == 0 && left < right)
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adjustment(arr,sz);
//	int n = 0;
//	for (n = 0;n < sz;n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}