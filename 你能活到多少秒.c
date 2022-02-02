#define _CRT_SECURE_NO_WARNINGS
//问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。0<age<=200
#include<stdio.h>
int main()
{
    int input = 0;
    scanf("%d", &input);
    long long miao = (long long)3.156e7 * input;
    printf("%d", (int)miao);
    return 0;
}
//这里会用到long long
//当输入200时，会超出int的范围
//int的范围 -2,147,483,648 到 2,147,483,647


