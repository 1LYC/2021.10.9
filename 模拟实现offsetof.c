#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define OFFSETOF(i,j) (int)&(((i*)0)->j)
//相当于在0地址处放了一个结构体指针，将指向这个结构体，从首地址0开始访问
struct MyStruct
{
	char a;
	int b;
	double c;
};
int main()
{
	printf("%d\n", OFFSETOF(struct MyStruct, a));
	printf("%d\n", OFFSETOF(struct MyStruct, b));
	printf("%d\n", OFFSETOF(struct MyStruct, c));
	return 0;
}
