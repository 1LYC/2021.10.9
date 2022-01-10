//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的K形图案。
#include<stdio.h>
int main()
{
    int a = 0;
    while(scanf("%d",&a)!=EOF)
    {
        int i = 0;
        for(i=0;i<a;i++)
        {
            int j = 0;
            for(j=0;j<a+1;j++)
            {
                if(j>a-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
        printf("*\n");
        for(i=0;i<a;i++)
        {
            int j = 0;
            for(j=0;j<a+1;j++)
            {
                if(j<2+i)
                {
                    printf("* ");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
