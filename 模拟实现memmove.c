#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

void* my_memmove(void* des,const void* cou, size_t num)
{
	assert(des && cou);//断言
	void* ret = des;//记录地址
	//后面的向开始
	if (des >= cou)
	{
		while (num--)
		{
			*((char*)des + num) = *((char*)cou + num);//从后开始访问
		}
	}
	//前面的先开始
	else
	{
		while (num--)
		{
			*(char*)des = *(char*)cou;
			des = (char*)des + 1;
			cou = (char*)cou + 1;
		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr , arr+2,20);//目的地在后面就先从后面开始拷贝，
	int i = 0;
	for (i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d ", arr[i]);
	}
	return 0; 
}
