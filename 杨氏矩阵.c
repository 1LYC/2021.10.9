//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////题目内容:有一个数字矩阵，矩阵的每行从左到右都是递增的
////矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
////要求：时间复杂度小于0（N);
//int find_num(int arr[3][4], int*i, int*j, int k)
//{
//	int x = 0;
//	int y = *j-1;
//	while (x < *i && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*i = x;
//			*j = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int k = 7;
//	int i = 3;
//	int j = 4;
//	int ret=find_num(arr, &i, &j, k);//传入地址，方便放回两个值，
//	if (ret == 1)
//	{
//		printf("找到了,下标是：%d %d\n",i,j);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}