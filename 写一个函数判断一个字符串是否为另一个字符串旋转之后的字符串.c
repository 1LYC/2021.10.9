#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//例子：给定s1=AABCD和s2=BCDAA,返回1,给定s1=abcd和s2=ABCD,返回0
//AABCD右旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//int string_movement(char* arr,char*art)
//{
//	assert(arr != NULL);//断言
//	int ret = strlen(arr);
//	int left = 0;
//	int right = ret - 1;
//	int i = 0;
//	for (i = 0;i < ret;i++)
//	{
//		int j = 0;
//		char tmp = arr[left];
//		for (j = 0;j < ret - 1;j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[right] = tmp;
//		if (strcmp(arr, art) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "ABCDE";
//	char art[] = "BCDEA";
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
int string_movement(char*str1,char*str2)
{
	assert(str1);
	assert(str2);
	//长度不相等，肯定不是旋转得到的
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.str1字符串的后边追加一个str1
	//ABCDEABCDE
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2.判断str2是否为str1的字串
	char* ret = strstr(str1, str2);
	//strstr的返回指向str1中第一次出现str2的指针，如果str2不是str1的一部分，则返回空指针。
	return ret != NULL;
}

int main()
{
	char arr[20] = "ABCDE";
	char art[20] = "BCDEA";
	int ret = string_movement(arr,art);
	if (ret == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
