//#define _CRT_SECURE_NO_WARNINGS
////水仙花数是指一个n位数，其余位数字的n次方之和恰好等于该数的本身
////如153=1^3+5^3+3^5,则153是一个水仙花数，^是次方的意思
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 10000;i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数-n
//		int n = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp=tmp/10;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp/10;
//		}
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}