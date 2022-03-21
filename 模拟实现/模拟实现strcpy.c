#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char*my_strcpy(char* des, const char* sou)
{
	assert(des != NULL);//断言
	assert(sou != NULL);//断言
	char*ret = des;
	while (*des++ = *sou++)
	{
		;
	}
	return ret;
}
int main() 
{
	char arr1[20] = { "xxxxxxxxxxxxxxxxx" };
	char arr2[] = { "hello" };
	printf("%s",my_strcpy(arr1, arr2));//链式访问
	return 0;
}
