//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////��Ŀ����:��һ�����־��󣬾����ÿ�д����Ҷ��ǵ�����
////������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
////Ҫ��ʱ�临�Ӷ�С��0��N);
//int find_num(int arr[3][4], int*i, int*j, int k)
//{
//	int x = 0;
//	int y = *j-1;
//	while (x < *i && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*i = x;
//			*j = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int k = 7;
//	int i = 3;
//	int j = 4;
//	int ret=find_num(arr, &i, &j, k);//�����ַ������Ż�����ֵ��
//	if (ret == 1)
//	{
//		printf("�ҵ���,�±��ǣ�%d %d\n",i,j);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}