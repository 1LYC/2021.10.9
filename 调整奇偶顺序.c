//#define _CRT_SECURE_NO_WARNINGS
////����һ���������飬ʵ��һ������
////�����������������ֵ�˳��ʹ�����������е�����
////λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
//#include<stdio.h>
//#include<assert.h>
//void adjustment(int* const arr,int sz)
//{
//	assert(arr != NULL);//����
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