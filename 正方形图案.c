//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    int a = 0;
    char square[20][20] = { 0 };
    memset(square, '*', sizeof(square));
    while(scanf("%d",&a)!=EOF)
    {
        int i = 0;
        for (i = 0;i < a;i++)
        {
            int j = 0;
            for (j = 0;j < a;j++)
            {
                printf("%c ", square[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
