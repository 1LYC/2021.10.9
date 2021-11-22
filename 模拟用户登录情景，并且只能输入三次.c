#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = {0};//自处需要初始化password的大小，否则会导致栈溢出
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("登录失败，请重新输入\n");
		}
	}
	return 0;
}
