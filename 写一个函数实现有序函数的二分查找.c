//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Fid(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid;
//			left++;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid;
//			right++;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//		
//	}
//	if (left >= right)
//	{
//		printf("找不到");
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Fid(arr, k, sz);
//	return 0;
//}