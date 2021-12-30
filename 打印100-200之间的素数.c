#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101;i <= 200;i += 2)//因为偶数不可能是素数
	{
		int j = 0;
		for (j = 2;j < sqrt(i)+1;j++)
		{

			if (i % j == 0)
			{
				break;
			}
		}
		//此时跳出循环，有两种情况，
		//一种是i被一个不是1，且不是它本身的数整除了，跳出循环，此时j<sqrt(i)+1
		//另外一种是循环完了，都没有找到，跳出循环，此时j>sqrt(i),因为最后j++
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d", count);
	return 0;
}
