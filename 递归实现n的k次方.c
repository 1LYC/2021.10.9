#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Pow(int n, int k)
{
	//这里思考，k的正负，
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		//将2的-3次方，变成1/(2的3)次方再进行递归实现
		return 1.0 / (Pow(n, -k));//这里设计的比较巧妙，
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}
