#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int My_strlen(char* pa)
{
	int* ppa = pa;//记录首元素地址
	while (*pa!='\0')
	{
		pa++;//最后指向尾元素后面\0地址
	}
	return (int)pa - (int)ppa;//运用了指针-指针
}

void Reverse_string(char*str)
{
	char tmp = *str;//1.将a存入tmp
	int len = My_strlen(str);//模拟strlen求字符串的长度
	*str = *(str+len-1);//2.将f存入原来a的位置,即将a赋给f
	*(str + len-1) = '\0';//3.将\0存入原来f的位置
	if (My_strlen(str+1)>=2)
	{
		//正确的应该是fbcde\0\0,将会执行bhe
		//4.再将剩下的进行递归
		Reverse_string(str+1);
		//那为什么不去掉第3步，直接把tmp存入\0的位置，再递归呢？
		//fbcdef\0，Reverse_string看上去会把b和f交换
		
	}
	*(str + len - 1) = tmp;//5.将tmp存入\0的位置，即将a赋给f
}

int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s",arr);
}
