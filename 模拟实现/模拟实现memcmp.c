#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int my_memcmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 && str2);
	while (num--)
	{
		if (*(char*)str1 == *(char*)str2)
		{
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
		else if (*(char*)str1 > *(char*)str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,8,3,4,5,6,7,8,9,10 };
	int ret = my_memcmp(arr1, arr2, 20);
	if (ret == 0)
	{
		printf("相同");
	}
	else
	{
		printf("不同");
	}
	return 0;
}
