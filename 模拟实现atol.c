//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
////atol���ַ���ת��������
////��Ҫ����
////1.��ָ��
////2.���ַ���
////3.�����������ַ�
////4.����̫�󳬳���Χ
//enum my_enum
//{
//	illegal,//���Ϸ�
//	legal,//�Ϸ�
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
//		//�ж��Ƿ񳬹���Χ
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
//	//��ʱ�ȿ����⼸�������
//	//const char* pr = "NULL";
//	//const char* pr = "     1234abcd";
//	const char* pr = "12345666666666666666666666666";
//	int ret = my_atol(pr);
//	if (state == legal)
//	{
//		printf("�˽���Ϸ���%d", ret);
//	}
//	else
//	{
//		printf("�˽�����Ϸ���%d", ret);
//	}
//	return  0;
//}