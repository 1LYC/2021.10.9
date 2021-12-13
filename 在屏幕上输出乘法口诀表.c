#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_table(int n)
{
	int i = 0;
	for (i = 1;i <= n;i++)//列数
	{
		int j = 0;
		for (j = 1;j <= i;j++)//行数
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}
//%2d是将数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补空格,，
//%02d是将数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补0，
//%-2d将数字按宽度为2，采用左对齐方式输出，若数据位数不到2位，则右边补空格
//%.2d 输出整形时最少输出2位，如不够前面以0占位。如输出2时变成02，200时只输出200；
//%.2f通过四舍五入之后，输出小数点后2位，
