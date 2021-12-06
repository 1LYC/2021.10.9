#define _crt_secure_no_warnings
//某地日本发生了一起谋杀案，警察通过排查确定杀人凶手为4个嫌疑人中的一个
//以下为4个嫌疑犯的供词
//a说：不是我     b说：是c     c说：是d       d说：不是我
//已知3个人说了真话，1个人说了假话
#include<stdio.h>
int main()
{
	char murderer = '0';
	for (murderer = 'a';murderer <= 'd';murderer++)
	{
		if ((murderer != 'a') + (murderer == 'c') + (murderer == 'd') + (murderer != 'd') == 3)
			printf("%c", murderer);
	}
	return 0;
}
