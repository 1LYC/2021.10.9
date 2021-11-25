//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void swap(char* buf1, char* buf2, int width)
//{
//	//这里也是不知道要排序什么数组，所以将其强制类型转换成char*
//	//使元素一个字节一个字节的交换
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
//	//这个需要使用者自己设计一个比较函数
//	return *(int*)e1 - *(int*)e2;//这个是升序，将e1和e2的位置互换，则变成降序
//}
//
//void sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
//{
//	//base是存放的是待排序数组中的第一个对象的地址
//	//num是数组元素的个数
//	//size是一个元素占几个字节
//	//cmp需要使用者自己设计，这里用函数指针接收
//	int i = 0;
//	for (i = 0;i < num - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < num - 1 - i;j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j+1)* size)>0)
//			{
//				//这里因为不知道使用者要排序什么数组，所以强制类型转换成char*,
//				//char*能一个字节一个字节的访问，这样就能找到数组中的元素
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