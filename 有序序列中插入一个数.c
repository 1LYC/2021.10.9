#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[51] = { 0 };
	scanf("%d", &a);
	int i = 0;
	int b = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d", &b);//输入a个数，且这些数为升序
		arr[i] = b;
	}
	/*for (i = 0;i < a;i++)
	{
		scanf("%d", &arr[i]);
	}*/
	int c = 0;
	scanf("%d", &c);//输入要插入的数
	for (i = a - 1;i >= 0;i--)
	{
		
		if (c < arr[i])
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = c;
			break;
		}
	}
	if (i == EOF)//当插入的这个数比这些数都小的时候，判断最左端
	{
		arr[0] = c;
	}
	return 0;
}
