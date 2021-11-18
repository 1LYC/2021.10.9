#define _CRT_SECURE_NO_WARNINGS
//比如I like beijing.这句话经过倒置后变成 beijing.like I
#include<stdio.h>
#include<assert.h>
char* reverse(char* left,char*right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	char* start = arr;//记录初始位置
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", arr);
	return 0;
}