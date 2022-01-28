//输入n个整数的序列，要求对这个序列进行去重操作。
//所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void remove_i(int* arr, int a)
{
    int* right = arr + a - 1;
    int i = 0;
    for (i = 0;i < a;i++)
    {
        if (*(arr + i) != 0)
        {
            int* prr = arr + i;
            while (prr <= right)
            {

                if (*(prr + 1) == *(arr + i))
                {
                    //删除
                    int* p = prr + 1;
                    while (p <= right)
                    {
                        *p = *(p + 1);
                        p++;
                    }
                }
                else
                {
                    prr++;
                }
            }
        }
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    int arr[100] = { 0 };
    int i = 0;
    for (i = 0;i < a;i++)
    {
        scanf("%d", &arr[i]);
    }
    remove_i(arr, a);
    for (i = 0;i < a;i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
