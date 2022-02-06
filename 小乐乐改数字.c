//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
long long change(long long a)
{
    long long sum = 0;
    long long num = 0;
    while (a>9)
    {
        long long ret = a % 10;
        if (ret%2 != 0)
        {
            sum += 1 * pow(10,num); 
        }
        num++;
        a = a / 10;
    }
    if (a % 2 != 0)
    {
        sum += 1 * pow(10, num);
    }
    return sum;
}
int main()
{
    long long a = 0;
    scanf("%lld", &a);
    long long ret = change(a);
    printf("%lld", ret);
    return 0;
}
