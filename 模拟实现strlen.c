#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;//计数器
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	//char arr[] = { 'a', 'b', 'c' };
	int len  = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
