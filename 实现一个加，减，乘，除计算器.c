#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("********1.�ӷ�**2.����********\n");
	printf("********3.�˷�**4.����********\n");
	printf("*********0.�˳�����***********\n");
	printf("*****************************\n");
}
int add(int x, int y)
{
	return x+y;
}
int sub(int x, int y)
{
	return x - y;
}
int nul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		int (*parr[5])(int, int) = { NULL,add,sub,nul,div };//Ӧ���˺�������ָ��
		int x = 0;
		int y = 0;
		printf("���������ѡ��>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������>");
			scanf("%d %d", &x, &y);
			int ret = (parr[input])(x, y);//�����˺�������
			printf("%d\n", ret);
		}
		else if(input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}

//Ӧ���˺����ص����ƣ�ʹ���˺���ָ��
//void calc(int (*pt)(int x,int y))
//{
//	printf("������������������>");
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret=(*pt)(x,y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("���������ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(nul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		default:
//			if (input == 0)
//			{
//				printf("�˳�����\n");
//			}
//			else
//			{
//				printf("ѡ�����\n");
//			}
//			break;
//		}
//	} while (input);
//	return 0;
//}