#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("********1.加法**2.减法********\n");
	printf("********3.乘法**4.除法********\n");
	printf("*********0.退出程序***********\n");
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
		int (*parr[5])(int, int) = { NULL,add,sub,nul,div };//应用了函数数组指针
		int x = 0;
		int y = 0;
		printf("请输入你的选择：>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			int ret = (parr[input])(x, y);//调用了函数数组
			printf("%d\n", ret);
		}
		else if(input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}

//应用了函数回调机制，使用了函数指针
//void calc(int (*pt)(int x,int y))
//{
//	printf("请输入两个操作数：>");
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
//		printf("请输入你的选择：>");
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
//				printf("退出程序\n");
//			}
//			else
//			{
//				printf("选择错误\n");
//			}
//			break;
//		}
//	} while (input);
//	return 0;
//}