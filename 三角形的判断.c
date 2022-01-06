//KiKi想知道已经给出的三条边a，b，c能否构成三角形，
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(-1<(a*a+b*b-c*c)/(2.0*a*b)&&\
           (a*a+b*b-c*c)/(2.0*a*b)<1)
        {
            if((a==b)&&(a==c))
            {
                printf("Equilateral triangle!\n");
            }
            else if(a==b||a==c||b==c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
        int tmp = 0;
        while((tmp=getchar())!='\n')
        {
            ;
        }
    }
    return 0;
}
