//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
#include<stdio.h>
int main()
{
    float price = 0.0f;
    int mouth = 0;
    int date = 0;
    int is_discount = 0;
    scanf("%f %d %d %d",&price,&mouth,&date,&is_discount);
    //因为11月和12月只差数字1,7折和8折只差1折
    float ret = price*(0.7+0.1*(mouth-11))-50*is_discount;
    if(ret < 0)//处理商家要到给钱的情况
    {
        ret=0.0f;
    }
    printf("%.2f",ret);
    return 0;
}
