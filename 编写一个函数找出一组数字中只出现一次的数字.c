#define _CRT_SECURE_NO_WARNINGS
//���������ֻ�����������ǳ���һ�Σ��������ֶ�����������
#include<stdio.h>
void Find(int arr[], int sz, int*x,int*y)
{
	int i = 0;
	int tmp = 0;
	for (i = 0;i < sz;i++)
	{
		tmp ^= arr[i];
		//���Ϊ5^6=3
		//101
		//110
	}
	int pos = 0;
	//��¼3�Ķ�������1��λ�ã��������
	for (i = 0;i < 32;i++)
	{
		if (((tmp >> i) & 1) == 1)
		{
			pos = i;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0;i < sz;i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	//��ֵ���ã���ָ���¼ֵ������Է�������ֵ
	*x = num1;
	*y = num2;
}
int main()
{
	//�������^
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	//��Ҫ��5��6���ڲ�ͬ��һ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Find(arr, sz, &x, &y);
	printf("%d %d", x,y);
	return 0;
}
