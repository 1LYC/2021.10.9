//编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内( 0~127 ，包括 0 和 127 )，
//换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
//例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 
#include<stdio.h>
#include<string.h>
int compar(const void*e1,const void*e2)
{
    return *(char *)e1 > *(char *)e2;
}
int main()
{
    char arr[501]={"0"};
    scanf("%s",arr);
    int len = strlen(arr);
    qsort(arr,len,sizeof(char),compar);
    int count = 1;
    char *ptr = NULL;
    char *pr = &arr[0];
    int i = 0;
    for(i = 1;i < len;i++)
    {
        ptr= strstr(arr,arr+i);
        if(ptr != NULL && *ptr > *pr)
        {
            pr = ptr;//记录上次的指针
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
