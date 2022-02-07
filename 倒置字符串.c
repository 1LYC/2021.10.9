#define _CRT_SECURE_NO_WARNINGS 1
//倒置字符串
#include<stdio.h>
#include<string.h>
void overturn(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//第一步翻转整个字符串
	int len = strlen(arr);
	overturn(arr, arr + len - 1);
	//第二步每个单词进行倒序
	char* start = arr;
	while(*start)
	{
		char* end = start;
		while(*end != ' ' && *end != '\0')
		{
			end++;
		}
		overturn(start,end-1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s", arr);
	return 0;
}




