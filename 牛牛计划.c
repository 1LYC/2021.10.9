#include<stdio.h>
int main()
{
    int y,m,d,y1,m1,d1;
    scanf("%d %d %d\n",&y,&m,&d);
    scanf("%d %d %d\n",&y1,&m1,&d1);
    if(y==y1&&m==m1&&d<=d1)
        printf("yes");
    else if(y==y1&&m<=m1)
        printf("yes");
    else if(y<=y1)
        printf("yes");
    else
        printf("no");
    return 0;
}
