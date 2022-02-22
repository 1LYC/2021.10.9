#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    printf("%d",a >= 0 ?(int)(a+0.5):(int)(a-0.5));
    return 0;
}
