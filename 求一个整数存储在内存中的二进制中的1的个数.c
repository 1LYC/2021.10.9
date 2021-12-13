#define _CRT_SECURE_NO_WARNINGS
//版本1
//这种方法的缺点是只可以处理正数
#include <stdio.h>
#include <stdlib.h>
int main() {
	int num = 13;
	int count = 0;
	while (num != 0) 
	{
		//一个偶数的最后一位0
		//一个奇数的最后一位1
		if (num % 2 == 1) 
		{
			count++;
		}
		num = num >>  1;	//每判断一位就右移一位(为了判断下一位)
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
//版本2
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int num = 13;
	int count = 0;
	int i;
	for (i = 0; i < 32; ++i)
	{
		//依次比较每一个二进制位是否为1
		if (num & (1 << i))
		{
			//若原来二进制位为1,与上1则为1,然后count自增1,若原来二进制位为0,
			//与上1仍然为0,也就不会进入到if语句,count不会自增1
			count++;
		}
		/*if ((num & 1) == 1)
		{
			count++;
			num = num >> 1;
		}
		else
		{
			num = num >> 1;
		}*/
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
//版本3-最优
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int num = 10;
	int count = 0;
	while (num != 0) 
	{
		count++;	//只要num不为0,就说明二进制位上还有1,count直接自增1
		num = num & (num - 1);	//每执行一次,消除一个二进制中的1
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
