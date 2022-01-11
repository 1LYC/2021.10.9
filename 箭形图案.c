//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
#include<stdio.h>
int main()
{
    int a = 0;
    while(scanf("%d",&a)!=EOF)
    {
        int i = 0;
        //打印上部分
        for(i=0;i<a;i++)
        {
            int j = 0;
            for(j=0;j<2*a+1;j++)
            {
                if(j>=2*a-i*2 && j<=2*a-i*2+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        //打印下部分
        for(i=0;i<=a;i++)
        {
            int j = 0;
            for(j=0;j<2*a+1;j++)
            {
                if(j>=i*2&&j<=i*2+a-i)
                {
                    printf("*");
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
