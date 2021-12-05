#define _CRT_SECURE_NO_WARNINGS

//ͨѶ¼-��̬�汾
//1.ͨѶ¼���ܹ����100���˵���Ϣ
//(ÿ���˵���Ϣ������+����+�Ա�+�绰+��ַ)
//2.�����˵���Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨѶ¼����Ϣ
//7.��ӡͨѶ¼����Ϣ

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20//����
#define MAX_SEX  10//�Ա�
#define MAX_TECE 12//�绰
#define MAX_ADDR 30//��ַ
#define MAX 100//����
#define INC_SZ 2//����
#define DEFAULT_SZ 3//��ʼ

//����ͨѶ¼
typedef struct peoinfo
{
	char name[MAX_NAME];
	int  age ;
	char sex  [MAX_SEX];
	char tecel[MAX_TECE];
	char addr[MAX_ADDR];
}peoinfo;
//��̬�汾
//typedef struct contact
//{
//	peoinfo data[MAX];//�ṹ������
//	int sz;
//}contact;

//��̬�汾
typedef struct contact
{
	peoinfo* data;//ָ��̬����Ŀռ䣬���������ϵ�˵���Ϣ
	int sz;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}contact;

////��̬�汾
////��ʼ��ͨѶ¼
//void Initcontact(contact* pc)
//{
//	pc->sz = 0;
//	//memset�ڴ�����
//	memset(pc->data, 0, sizeof(pc->data));
//}
//�ж��Ƿ�����
void CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		peoinfo* ptr = (peoinfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
}

//����ͨѶ¼
void LoadContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//���ļ�
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))
	{
		//�Ƿ���Ҫ����
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬�汾
//��ʼ��ͨѶ¼
void Initcontact(contact* pc)
{
	pc->data = (peoinfo*)malloc(DEFAULT_SZ * sizeof(peoinfo));
	if (pc->data == NULL)
	{
		perror("Initcontact");
		return;
	}
	pc->sz = 0;//��ʼ����Ĭ����0
	pc->capacity = DEFAULT_SZ;

	//�����ļ�
	LoadContact(pc);
}

//��ӡͨѶ¼
void Printcontact(contact* pc)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tecel, pc->data[i].addr);
	}
}

////��̬�汾
////�����˵���Ϣ
//void Addcontact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//		return ;
//	}
//	else
//	{
//		printf("����\n");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����\n");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�Ա�\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("�绰\n");
//		scanf("%s", pc->data[pc->sz].tecel);
//		printf("��ַ\n");
//		scanf("%s", pc->data[pc->sz].addr);
//
//	}
//	pc->sz++;
//}

//��̬�汾
//�����˵���Ϣ
void Addcontact(contact* pc)
{
		CheckCapacity(pc);

		//����һ���˵���Ϣ
		printf("����\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("����\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�Ա�\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("�绰\n");
		scanf("%s", pc->data[pc->sz].tecel);
		printf("��ַ\n");
		scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
}

//����ָ���˵���Ϣ
int FindByName(contact* pc,char name[])
{
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ��ָ���˵���Ϣ
void Delcontact(contact* pc)
{
	char name [MAX_NAME];
	
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}	
	//����ָ����
	printf("������ָ���˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û����ϵ��\n");
		return ;
	}
	//ɾ��ָ����
	int i = 0;
	for (i = ret;i < pc->sz - 1;i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//����ָ����
void Searchcontact(contact* pc)
{
	char name[MAX_NAME];
	printf("������ָ���˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û����ϵ��\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
		pc->data[ret].name, pc->data[ret].age,
		pc->data[ret].sex, pc->data[ret].tecel, pc->data[ret].addr);
}

//�޸�ͨѶ¼
void Modifycontact(contact* pc)
{
	char name[MAX_NAME];
	printf("������ָ���˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û����ϵ��\n");
		return;
	}
	else
	{
		printf("����\n");
		scanf("%s", pc->data[ret].name);
		printf("����\n");
		scanf("%d", &(pc->data[ret].age));
		printf("�Ա�\n");
		scanf("%s", pc->data[ret].sex);
		printf("�绰\n");
		scanf("%s", pc->data[ret].tecel);
		printf("��ַ\n");
		scanf("%s", pc->data[ret].addr);
	}
}

//����ͨѶ¼
void Destorycontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//����ͨѶ¼
void SaveContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(peoinfo), 1, pf);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}