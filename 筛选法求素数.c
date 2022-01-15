#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int n = 0;
    int a[100] = { 0 };
    int sum = 0;                               
    while (scanf("%d", &n) != EOF)
    {
        for (i = 2;i <= n;i++) 
        {                    //将值导入数组(2--n)
            a[i - 2] = i;    //a0--a[n-2]
        }
        for (j = 2;j <= n;j++) 
        {                    
            // 2 3 4 5
            // 0 1 2 3
            for (i = j - 1;i < n - 1;i++)
            {
                if (a[i] % j == 0)
                {
                    a[i] = 0;
                }
            }
        }
        for (i = 0;i < n - 1;i++)
        {     
            //输出不为0的数据并计算等于0的个数
            if (a[i] != 0)
            {
                printf("%d ", a[i]);
            }
            else
            {
                sum++;
            }
        }
        printf("\n%d", sum);//换行输出等于0的个数                  
    }
    return 0;
}
