//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
//接下来一行输入k，表示要执行k次操作（1≤k≤5）。接下来有k行，
//每行包括一个字符t和两个数a和b，中间用空格格分隔，t代表需要执行的操作，当t为字符'r'时代表进行行变换，
//当t为字符'c'时代表进行列变换，a和b为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10）。
//提示：当t为别的字符时不需要处理
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int m = 0;//列
    int n = 0;//行
    int arr[10][10] = { 0 };
    
    char op = 0;//代表操作的字符
    int a = 0;
    int b = 0;
    //读取数据
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);//输入
        }
    }

    int cnt = 0;//操作的次数
    scanf("%d", &cnt);

    for (i = 0; i < cnt; i++)
    {
        //这里有缓冲区的问题
        scanf(" %c %d %d", &op, &a, &b);
        
        //执行操作
        if (op == 'r')
        {
            //交换a和b行
            for (j = 0; j < m; j++)
            {
                //m: 列号
                int tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        else if (op == 'c')
        {
            //交换a和b列
            for (j = 0; j < n; j++)
            {
                //n：行号
                int tmp = arr[j][a - 1];
                arr[j][a - 1] = arr[j][b - 1];
                arr[j][b - 1] = tmp;
            }
        }
    }
    //输出
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
} 
