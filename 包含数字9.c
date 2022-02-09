#include<stdio.h>
int main()
{
    int n=0;
    for(int i=1;i<=2019;i++)
    {
        ////个位的9.十位的9，百位的9
        if(i%10==9||i/10%10==9||i/100%10==9)
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}


