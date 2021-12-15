#define _crt_secure_no_warnings
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);//断言
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			//当读取到\0结束时
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main()
{
	char* p = "abcdef";
	char* q = "acdef";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p > q\n");
	}
	else if (ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}
	return 0;
}
