#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char arr[20] = { 0 };
    gets(arr);
    
    int j = 1;
    int sum = 0;
    int i = 0;
    for (i = 0;i < 11;i++)
    {
        if (arr[i] == '-') {
            continue;
        }
        else {
            sum += (arr[i] - '0') * j;
            j++;
        }
    }
    int result = sum % 11;
    //处理特殊情况
    while (1)
    {
        if (arr[12] != 'X' && result == 10) {
            arr[12] = 'X';
            printf("%s", arr);
            break;
        }
        if (((arr[12] - '0') == result) || (result == 10 && arr[12] == 'X'))
        {
            printf("Right\n");
            break;
        }
        else {
            arr[12] = result + '0';
            printf("%s", arr);
            break;
        }
    }
    return 0;
}
