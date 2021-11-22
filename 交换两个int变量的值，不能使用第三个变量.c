#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf(" a=%d b=%d", a, b);
	return 0;
}
