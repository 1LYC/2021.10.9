#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int My_strlen(char* pa)
{
	int* ppa = pa;
	while (*pa!='\0')
	{
		pa++;
	}
	return pa - ppa;
}
void Reverse_string(char*str)
{
	char tmp = *str;
	int len = My_strlen(str);
	*str = *(str+len-1);
	*(str + len-1) = '\0';
	if (My_strlen(str+1)>=2)
	{
		Reverse_string(str+1);
	}
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s",arr);
}
