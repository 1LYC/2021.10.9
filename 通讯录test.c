#define _CRT_SECURE_NO_WARNINGS
#include"通讯录.h"

void menu()
{
	printf("*****************************\n");
	printf("*******1.ADD    2.DEL********\n");
	printf("*******3.SEARCH 4.MODIFY*****\n");
	printf("*******5.SORT   6.PRINT******\n");
	printf("************0.EXIT***********\n");
	printf("*****************************\n");
}

enum MyEnum
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};

int main()
{
	int input = 0;
	contact con;
	Initcontact(&con);
	do
	{
		
		menu();
		printf("请输入你的选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case SEARCH:
			Searchcontact(&con);
			break;
		case MODIFY:
			Modifycontact(&con);
			break;
		case SORT:
			//需要自己写
			break;
		case PRINT:
			Printcontact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			//保存通讯录到文件中
			SaveContact(&con);//静态版本
			Destorycontact(&con);
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}