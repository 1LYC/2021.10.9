//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////���ӣ�����s1=AABCD��s2=BCDAA,����1,����s1=abcd��s2=ABCD,����0
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
//
////int string_movement(char* arr,char*art)
////{
////	assert(arr != NULL);//����
////	int ret = strlen(arr);
////	int left = 0;
////	int right = ret - 1;
////	int i = 0;
////	for (i = 0;i < ret;i++)
////	{
////		int j = 0;
////		char tmp = arr[left];
////		for (j = 0;j < ret - 1;j++)
////		{
////			arr[j] = arr[j + 1];
////		}
////		arr[right] = tmp;
////		if (strcmp(arr, art) == 0)
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
////
////int main()
////{
////	char arr[] = "ABCDE";
////	char art[] = "BCDEA";
////	int ret = string_movement(arr,art);
////	if (ret == 1)
////	{
////		printf("yes");
////	}
////	else
////	{
////		printf("no");
////	}
////	return 0;
////}
//int string_movement(char*str1,char*str2)
//{
//	assert(str1);
//	assert(str2);
//	//���Ȳ���ȣ��϶�������ת�õ���
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	//1.str1�ַ����ĺ��׷��һ��str1
//	//ABCDEABCDE
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2.�ж�str2�Ƿ�Ϊstr1���ִ�
//	char* ret = strstr(str1, str2);
//	//strstr�ķ���ָ��str1�е�һ�γ���str2��ָ�룬���str2����str1��һ���֣��򷵻ؿ�ָ�롣
//	return ret != NULL;
//}
//
//int main()
//{
//	char arr[20] = "ABCDE";
//	char art[20] = "BCDEA";
//	int ret = string_movement(arr,art);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}