//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* des, const void* cou, size_t num)
//{
//	assert(des && cou);
//	void* ret = des;
//	while (num--)
//	{
//		*(char*)des = *(char*)cou;
//		des=(char*)des + 1;
//		cou=(char*)cou + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0;i < sizeof(arr2)/sizeof(arr2[0]);i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}