#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//三次机会
	int count = 3;
	char arr[10] = { 0 };
	system("shutdown -s -t 60");//关机指令
	printf("你的电脑将在60秒后关机，请输入我是猪,取消关机\n");
	while (count)
	{
		scanf("%s", arr);
		if (strcmp(arr, "我是猪") == 0)
		{
			system("shutdown -a");//取消关机指令
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
			count--;
		}
	}
	return 0;
}
