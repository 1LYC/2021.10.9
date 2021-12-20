#define _CRT_SECURE_NO_WARNINGS
//小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。
//m=max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c))
//其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
#include<stdio.h>
int max3(int x, int y, int z)
{
    if (x > y)
    {
        y = x;
    }
    return y > z ? y : z;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
    return 0;
}
