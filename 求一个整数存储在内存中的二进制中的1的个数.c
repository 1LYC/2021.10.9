#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 13;
	int count = 0;
	int i = 0;
	for (i = 0;i < 31;i++)//�������ж�32λ�������ж�31λ��
	{
		if ((a & 1) == 1)
		{
			count++;
			a=a >> 1;
		}
		else
		{
			a=a>> 1;
		}
	}
	printf("%d", count);
	return 0;
}