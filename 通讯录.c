#define _CRT_SECURE_NO_WARNINGS

//通讯录-静态版本
//1.通讯录中能够存放100个人的信息
//(每个人的信息：名字+年龄+性别+电话+地址)
//2.增加人的信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通讯录的信息
//7.打印通讯录的信息

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20//名字
#define MAX_SEX  10//性别
#define MAX_TECE 12//电话
#define MAX_ADDR 30//地址
#define MAX 100//人数
#define INC_SZ 2//增容
#define DEFAULT_SZ 3//初始

//创建通讯录
typedef struct peoinfo
{
	char name[MAX_NAME];
	int  age ;
	char sex  [MAX_SEX];
	char tecel[MAX_TECE];
	char addr[MAX_ADDR];
}peoinfo;
//静态版本
//typedef struct contact
//{
//	peoinfo data[MAX];//结构体数组
//	int sz;
//}contact;

//动态版本
typedef struct contact
{
	peoinfo* data;//指向动态申请的空间，用来存放联系人的信息
	int sz;//记录的是当前通讯录中有效信息的个数
	int capacity;//记录当前通讯录的最大容量
}contact;

////静态版本
////初始化通讯录
//void Initcontact(contact* pc)
//{
//	pc->sz = 0;
//	//memset内存设置
//	memset(pc->data, 0, sizeof(pc->data));
//}
//判断是否增容
void CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		peoinfo* ptr = (peoinfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
		else
		{
			perror("AddContact");
			printf("增加联系人失败\n");
			return;
		}
	}
}

//加载通讯录
void LoadContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//读文件
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))
	{
		//是否需要增容
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}

//动态版本
//初始化通讯录
void Initcontact(contact* pc)
{
	pc->data = (peoinfo*)malloc(DEFAULT_SZ * sizeof(peoinfo));
	if (pc->data == NULL)
	{
		perror("Initcontact");
		return;
	}
	pc->sz = 0;//初始化后默认是0
	pc->capacity = DEFAULT_SZ;

	//加载文件
	LoadContact(pc);
}

//打印通讯录
void Printcontact(contact* pc)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tecel, pc->data[i].addr);
	}
}

////静态版本
////增加人的信息
//void Addcontact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录满了\n");
//		return ;
//	}
//	else
//	{
//		printf("名字\n");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("年龄\n");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("性别\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("电话\n");
//		scanf("%s", pc->data[pc->sz].tecel);
//		printf("地址\n");
//		scanf("%s", pc->data[pc->sz].addr);
//
//	}
//	pc->sz++;
//}

//动态版本
//增加人的信息
void Addcontact(contact* pc)
{
		CheckCapacity(pc);

		//增加一个人的信息
		printf("名字\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("年龄\n");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("性别\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("电话\n");
		scanf("%s", pc->data[pc->sz].tecel);
		printf("地址\n");
		scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
}

//查找指定人的信息
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

//删除指定人的信息
void Delcontact(contact* pc)
{
	char name [MAX_NAME];
	
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}	
	//查找指定人
	printf("请输入指定人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("通讯录中没有联系人\n");
		return ;
	}
	//删除指定人
	int i = 0;
	for (i = ret;i < pc->sz - 1;i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

//查找指定人
void Searchcontact(contact* pc)
{
	char name[MAX_NAME];
	printf("请输入指定人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("通讯录中没有联系人\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
		pc->data[ret].name, pc->data[ret].age,
		pc->data[ret].sex, pc->data[ret].tecel, pc->data[ret].addr);
}

//修改通讯录
void Modifycontact(contact* pc)
{
	char name[MAX_NAME];
	printf("请输入指定人的名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("通讯录中没有联系人\n");
		return;
	}
	else
	{
		printf("名字\n");
		scanf("%s", pc->data[ret].name);
		printf("年龄\n");
		scanf("%d", &(pc->data[ret].age));
		printf("性别\n");
		scanf("%s", pc->data[ret].sex);
		printf("电话\n");
		scanf("%s", pc->data[ret].tecel);
		printf("地址\n");
		scanf("%s", pc->data[ret].addr);
	}
}

//销毁通讯录
void Destorycontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//保存通讯录
void SaveContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(peoinfo), 1, pf);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}