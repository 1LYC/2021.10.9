#define _CRT_SECURE_NO_WARNINGS
//版本1：指针-指针
//#include<stdio.h>
////相当于模拟实现strlen
//int my_strlen(char* pc)
//{
//	char* pt = pc;
//	while (*pc)
//	{
//		pc++;
//	}
//	return pc - pt;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
// 
// 
//版本2：计数器
//#include<stdio.h>
//int my_strlen(char* pc)
//{
//	int count = 0;
//	while (*pc++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//版本3：递归
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* pr)
{
	assert(pr);
	if (*pr)
	{
		return 1+my_strlen(pr + 1);
	}
	return 0;
}
int main()
{
	char arr[] = { "abcdef" };
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}
