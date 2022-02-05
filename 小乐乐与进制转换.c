//输入一个正整数n  (1 ≤ n ≤ 109)
//输出一行，为正整数n表示为六进制的结果
#include <stdio.h>
#include <math.h>
long long change(long long a,int b)
{
    long long sum = 0;
    while (a > 0)
    {
        sum += (a % 6) * pow(10, b);
        a = a / 6;
        b++;
    }
    return sum;
}

int main()
{
    long long a = 0;
    scanf("%lld", &a);
    int b = 0;
    long long ret = change(a,b);
    printf("%lld", ret);
    return 0;
}
