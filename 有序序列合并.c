//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
#include<stdio.h>
#include<stdlib.h>
int compar(const void*e1,const void*e2)
{
    return *(int *)e1-*(int *)e2;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int* arr = (int *)malloc(sizeof(int)*2000);
    int i = 0;
    for(i = 0;i< a+b;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,a+b,sizeof(arr[0]),compar);
    for(i = 0;i < a+b;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}
