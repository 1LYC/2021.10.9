//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
////��Ŀ���ݣ�ʵ��һ�����������������ַ����е�k���ַ�
////���磺ABCD����һ���ַ��õ�BCDA,ABCD���������ַ��õ�CDAB
////
////void string_movement(char* arr, int k)
////{
////	assert(arr != NULL);//����
////  int ret = strlen(arr);
////	int left = 0;
////	int right = ret - 1;
////	int i = 0;
////	for (i = 0;i < k;i++)
////	{
////		int j = 0;
////		char tmp = arr[left];
////		for (j = 0;j<ret-1;j++)
////		{
////			arr[j] = arr[j + 1];
////		}
////		arr[right] = tmp;
////	}
////}
////
////int main()
////{
////	char arr[] = "ABCDE";
////	int k = 2;
////	string_movement(arr, k);
////	printf("%s", arr);
////	return 0;
////}
//
//void overturn(char* left, char*right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_movement(char* arr,int k)
//{
//	int n = strlen(arr);
//	overturn(arr, arr+k-1);
//	overturn(arr+k, arr+n - 1);
//	overturn(arr, arr+n-1);
//}
//
//int main()
//{
//	char arr[] = "ABCDE";
//	int k = 2;
//	string_movement(arr, k);
//	printf("%s", arr);
//	return 0;
//}