#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//这里回车会触发\n
	printf("请确认密码：[Y/N]:");
	int tmp = 0;
	while ((tmp=getchar())!='\n')//通过循环清理缓存区多个字符
	{
		;
	}
	int ch = getchar();//如果不清理缓存区，则导致getchar读取\n,然后会导致结果为：确认失败；
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
