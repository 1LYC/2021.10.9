#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//题目内容：实现一个函数，可以左旋字符串中的k个字符
//例如：ABCD左旋一个字符得到BCDA,ABCD右旋两个字符得到CDAB
//
//void string_movement(char* arr, int k)
//{
//	assert(arr != NULL);//断言
//  int ret = strlen(arr);
//	int left = 0;
//	int right = ret - 1;
//	int i = 0;
//	for (i = 0;i < k;i++)
//	{
//		int j = 0;
//		char tmp = arr[left];
//		for (j = 0;j<ret-1;j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[right] = tmp;
//	}
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

void overturn(char* left, char*right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void string_movement(char* arr,int k)
{
	int n = strlen(arr);
	overturn(arr, arr+k-1);
	overturn(arr+k, arr+n - 1);
	overturn(arr, arr+n-1);
}

int main()
{
	char arr[] = "ABCDE";
	int k = 2;
	string_movement(arr, k);
	printf("%s", arr);
	return 0;
}
