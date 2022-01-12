//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void set(char arr[20][20], int a)
{
    int i = 0;
    for (i = 1;i < a - 1;i++) {
        int j = 0;
        for (j = 1;j < a - 1;j++) {
            arr[i][j] = ' ';
        }
        //设置的时候不需要换行，换行会导致光标移动
        //printf("\n");
    }
}
int main()
{
    int a = 0;
    char arr[20][20] = { 0 };
    while (scanf("%d", &a) != EOF) {
        memset(arr, '*', sizeof(arr));
        set(arr, a);
        
        int i = 0;
        for (i = 0;i < a;i++) {
            int j = 0;
            for (j = 0;j < a;j++) {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
        }
        int tmp = 0;
        while ((tmp = getchar()) != '\n')
        {
            ;
        }
    }
    return 0;
}
