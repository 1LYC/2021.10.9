//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* des,const void* cou, size_t num)
//{
//	assert(des && cou);
//	void* ret = des;
//	//后面的向开始
//	if (des >= cou)
//	{
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)cou + num);
//		}
//	}
//	//前面的先开始
//	else
//	{
//		
//		while (num--)
//		{
//			des = (char*)des + num;
//			cou = (char*)cou + num;
//			*(char*)des = *(char*)cou;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr,20);
//	int i = 0;
//	for (i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0; 
//}