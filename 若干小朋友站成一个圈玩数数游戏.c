#define _CRT_SECURE_NO_WARNINGS
//若干小朋友站成一个圈玩数数游戏,从1开始大声数数,要求小朋友数的数不能含有数字3,
//且不能是3的倍数,直到100为止。请编写程序,使之能模拟打印出小朋友应该正确喊出的所有的数
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0;i <= 100;i++)
	{
		if ((i % 3 != 0) && (i != 3))
		{
			printf("%d ", i);
		}
	}
	return 0;
}
