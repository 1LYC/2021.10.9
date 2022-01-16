#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* des, const void* cou, size_t num)
{
	//因为不知道使用的类型，所以使用void*
	assert(des && cou);
	void* ret = des;//记录地址
	while (num--)
	{
		//char*能一个一个的访问，则函数在于char*的使用
		*(char*)des = *(char*)cou;
		des=(char*)des + 1;
		cou=(char*)cou + 1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	//库函数中的memcpy不能拷贝内存重叠的情况
	//比如：int arr2[10]={1,2,3};
	my_memcpy(arr2, arr1, 20);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
