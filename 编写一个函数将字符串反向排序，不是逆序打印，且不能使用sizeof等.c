#define _CRT_SECURE_NO_WARNINGS 1
//字符串逆序
#include<stdio.h>
int My_strlen(char* pa)
{
	char* ppa = pa;//记录首元素地址
	while (*pa != '\0')
	{
		pa++;
	}
	return (int)pa - (int)ppa;
}

void Reverse_string(char* str)
{
	char tmp = *str;//1.将a存入tmp
	int len = My_strlen(str);//模拟strlen求字符串的长度
	*str = *(str + len - 1);//2.将f存入原来a的位置,
	*(str + len - 1) = '\0';//3.将\0存入原来f的位置(关键)
	if (My_strlen(str + 1) >= 2)
	{
		//4.再将剩下的进行递归
		Reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;//5.将tmp存入\0的位置，
}

int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s", arr);
}
