//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
////atol把字符串转换成整数
////需要考虑
////1.空指针
////2.空字符串
////3.遇到非数字字符
////4.数字太大超出范围
//enum my_enum
//{
//	illegal,//不合法
//	legal,//合法
//};
//
//enum my_enum state = illegal;
//long int my_atol(const char* str)
//{
//	int flag = 1;
//	if (str == NULL)
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long n = 0;
//	while (isdigit(*str))
//	{
//		n = n * 10 + flag*(*str - '0');
//		//判断是否超过范围
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		state = legal;
//		return (int)n;
//	}
//	else
//	{
//		//state = illegal;
//		return (int)n;
//	}
//}
//int main()
//{
//	//暂时先考虑这几种情况吧
//	//const char* pr = "NULL";
//	//const char* pr = "     1234abcd";
//	const char* pr = "12345666666666666666666666666";
//	int ret = my_atol(pr);
//	if (state == legal)
//	{
//		printf("此结果合法：%d", ret);
//	}
//	else
//	{
//		printf("此结果不合法：%d", ret);
//	}
//	return  0;
//}