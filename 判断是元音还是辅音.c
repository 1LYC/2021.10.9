//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其
//他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int is_yu(const char* pr)
{
    assert(pr);//断言
    char arr[] = { "AEIOUaeiou" };
    char* pt = arr;
    while (*pt !='\0')
    {
        if (*pt == *pr)
        {
            return 1;
        }
        pt++;
    }
    return 0;
}

int main()
{
    char input = 0;
    while (scanf("%c", &input) != EOF)
    {
        
        if (is_yu(&input) == 1)
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        //因为回车会触发\n,所以需要解决在缓冲区的\n
        int tmp = 0;
        while ((tmp = getchar()) != '\n')
        {
            ;
        }
    }
    return 0;
}
