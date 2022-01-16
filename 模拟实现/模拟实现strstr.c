#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	//指向 str2 中指定的整个字符序列在 str1 中第一次出现的指针，
	//如果该序列不存在于 str1 中，则为空指针
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;//记录地址

	if (*str2 == '\0')//如果查找的是空字符
	{
		return str1;
	}

	while (*cp)
	{
		s1 = cp;//相当于归位
		s2 = str2;//相当于归位
		//abcdef
		//  cdef
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;//找到了返回的地址
		}
		cp++;//此函数的核心，就是通过cp进行返回地址，相当于归位又加一
	}

	return NULL;//没找到返回NULL
}

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	//或者是char arr2[]="abc"；

	//在arr1中查找是否包含arr2数组
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了：%s\n", ret);
	}
	return 0;
}
