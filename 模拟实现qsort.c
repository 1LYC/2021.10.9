//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void swap(char* buf1, char* buf2, int width)
//{
//	//����Ҳ�ǲ�֪��Ҫ����ʲô���飬���Խ���ǿ������ת����char*
//	//ʹԪ��һ���ֽ�һ���ֽڵĽ���
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp(const void* e1, const void* e2)
//{
//	//�����Ҫʹ�����Լ����һ���ȽϺ���
//	return *(int*)e1 - *(int*)e2;//��������򣬽�e1��e2��λ�û��������ɽ���
//}
//
//void sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
//{
//	//base�Ǵ�ŵ��Ǵ����������еĵ�һ������ĵ�ַ
//	//num������Ԫ�صĸ���
//	//size��һ��Ԫ��ռ�����ֽ�
//	//cmp��Ҫʹ�����Լ���ƣ������ú���ָ�����
//	int i = 0;
//	for (i = 0;i < num - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num - 1 - i;j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j+1)* size)>0)
//			{
//				//������Ϊ��֪��ʹ����Ҫ����ʲô���飬����ǿ������ת����char*,
//				//char*��һ���ֽ�һ���ֽڵķ��ʣ����������ҵ������е�Ԫ��
//				swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz, sizeof(arr[0]), cmp);
//	int n = 0;
//	for (n = 0;n < sz;n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}