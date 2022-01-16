#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;//记录目标的地址
	assert(dest && src);
	//1. 找目标字符串中的\0
	while (*dest)
	{
		dest++;
	}
	//2. 追加源字符串,包含\0
	while(*dest++ = *src++)
	{
		;
	}
	return ret;//返回的目标空间的起始地址
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
