//#define _CRT_SECURE_NO_WARNINGS
////ˮ�ɻ�����ָһ��nλ��������λ���ֵ�n�η�֮��ǡ�õ��ڸ����ı���
////��153=1^3+5^3+3^5,��153��һ��ˮ�ɻ�����^�Ǵη�����˼
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 10000;i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ��-n
//		int n = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp=tmp/10;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp/10;
//		}
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}