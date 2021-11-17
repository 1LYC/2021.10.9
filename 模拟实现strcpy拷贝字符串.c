#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char*my_strcpy(char* des, const char* sou)
{
	assert(des != NULL);
	assert(sou != NULL);
	while (*des++ = *sou++)
	{
		;
	}
}
int main()
{
	char arr1[20] = { "xxxxxxxxxxxxxxxxx" };
	char arr2[] = { "hello" };
	my_strcpy(arr1, arr2);
	return 0;
}