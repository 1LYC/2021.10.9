#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//a^a=0
//a^0=a
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d", a, b);
	a = a ^ b;
	b = a ^ b;//a^b^b=a
	a = a ^ b;//a^b^a=b
	printf("交换后：a=%d b=%d", a, b);
	return 0;
}
