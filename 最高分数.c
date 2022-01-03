//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
#include<stdio.h>
int is_max(int a,int b,int c)
{
    if(a<b)
    {
        a=b;
    }
    int ret =(a>c)?a:c;
    return ret;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a,&b,&c);
    int max = is_max(a,b,c);
    printf("%d",max);
}
