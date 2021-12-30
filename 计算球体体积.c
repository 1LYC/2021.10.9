//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π = 3.1415926。
#include<stdio.h>
#include<math.h>
#define pai 3.1415926
int main()
{
    double n = 0.0f;
    scanf("%lf",&n);
    double v = 4/3.0*pai*pow(n,3);
    printf("%.3lf",v);
    return 0;
}
