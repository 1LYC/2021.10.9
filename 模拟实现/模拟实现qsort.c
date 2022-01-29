#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int int_cmp(const void* e1, const void* e2)//这个函数是需要使用者自己确定的。
{
	return (*(int*)e1 - *(int*)e2);//如果交换e1和e2的值，将进行降序
}

void _swap(void* p1, void* p2, int size) 
{
	//有了元素的类型，才能一个字节一个字节的访问
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void qsort_bubble(void* base, int count, int size, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			//上面两个循环就像冒泡排序的一样的设计思路
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)//比较两个元素的大小
			{
				//交换两个元素的位置，
				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);//需要传入元素的类型，
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
	int i = 0;
	qsort_bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
