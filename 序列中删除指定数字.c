//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
#include<stdio.h>
void remove_i(int* arr, int a, int b)
{
    int* left = arr;
    int* right = arr + a - 1;
    while (left <= right)
    {
        if (*left == b)
        {
            while (left <= right)
            {
                left[0] = left[1];
                left++;
            }
        }
        else
        {
            left++;
        }
    }
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0;i < a;i++)
    {
        scanf("%d", &arr[i]);
    }
    int b = 0;
    scanf("%d", &b);
    for(i = 0;i < a;i++)
    {
        remove_i(arr, a, b);
    }
    
    for (i = 0;i < a;i++)
    {
        if(arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
