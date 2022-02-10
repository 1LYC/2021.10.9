#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n = 0;
    char str[100] = { '0' };
    int count = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%s", &str);
        if (strlen(str) < 8)//条件4
        {
            printf("NO\n");
            continue;
        }
        if (isdigit(str[0]) != 0)//条件2
        {
            printf("NO\n");
            continue;
        }
        int j = 0;
        for (j = 0;j < strlen(str);j++)//条件3
        {
            if ((islower(str[j]) == 0)\
                || (isupper(str[j]) == 0)\
                || (isdigit(str[j]) == 0))
            {
                count++;
            }
            if (count >= 2)
            {
                printf("YES\n");
                break;
            }
        }
    }
}
