#define _CRT_SECURE_NO_WARNINGS
#include"ͨѶ¼.h"

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
		printf("���������ѡ��>");
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
			//��Ҫ�Լ�д
			break;
		case PRINT:
			Printcontact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			//����ͨѶ¼���ļ���
			SaveContact(&con);//��̬�汾
			Destorycontact(&con);
			break;
		default:
			printf("����������\n");
			break;
		}

	} while (input);
	return 0;
}