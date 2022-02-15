//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define INITIAL 10
#define ADD 2

void is_capacity(int num, int cap, char* out)
{
    while(num > pow(2, cap)){
        //增容
        char* ptr = (char*)realloc(out, (cap + ADD) * sizeof(char));
        if (ptr != NULL) {
            out = ptr;
            cap += 10;
        }
        else {
            perror("is_capacity");
        }
    }
}

int main(void)
{
    char* out = (char*)calloc(20, sizeof(char));
    if (out == NULL) {
        perror("main");
        return 1;
    }

    int len = 0;
    int num = 0;
    scanf("%d", &num);

    int cap = INITIAL;
    is_capacity(num, cap, out);

    if (num == 0) {
        printf("%s", "0");
    }
    while (num) {
        len += sprintf(out + len, "%d", num % 10);
        num /= 10;
    }
    printf("%s\n", out);

    free(out);
    out = NULL;

    return 0;
}
