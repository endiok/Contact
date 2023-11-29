//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include "contact.h"
//#include <string.h>//memset 可以string.h也可以memory.h
//void InitContact(struct Contact* ps)
//{
//	memset(ps->data,0,sizeof(ps->data));
//	ps->size = 0;//设置通讯录一开始只有0个元素
//}
//void AddContact(struct Contact* ps)
//{
//	if (ps->size == MAX)
//	{
//		printf("通讯录已满,无法增加\n");
//	}
//	else
//	{
//		printf("请输入名字:>");
//		scanf("%s",ps->data[ps->size].name);
//		printf("请输入年龄:>");
//		scanf("%d", &(ps->data[ps->size].age));//数组不用取地址 int要
//		printf("请输入性别:>");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("请输入电话:>");
//		scanf("%s", ps->data[ps->size].tele);
//		printf("请输入地址:>");
//		scanf("%s", ps->data[ps->size].addr);
//		ps->size++;
//		printf("添加成功\n");
//	}
//}
//void ShowContact(const struct Contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("通讯录为空\n");
//	}
//	else
//	{
//		int i = 0;
//		printf("%20s\t%4s\t%5s\t%12s\t%20s\n","名字","年龄","性别","电话","住址");
//		for (i=0;i<ps->size;i++)
//		{
//			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", 
//				ps->data[i].name,
//				ps->data[i].age,
//				ps->data[i].sex,
//				ps->data[i].tele,
//				ps->data[i].addr);
//		}
//	}
//}
//
////static 修饰让这个函数只能在这个文件里面使用
//static int FindByName(const struct Contact* ps,char name[MAX_NAME])
//{
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (0 == strcmp(ps->data[i].name, name))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//
//void DelContact(struct Contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("通讯录为空,无法删除联系人\n");
//	}
//	else
//	{
//		char name[MAX_NAME];
//		printf("请输入要删除人的名字:>");
//		scanf("%s",name);
//		int pos=FindByName(ps,name);//找到了返回名字所在元素的下标,找不到返回-1
//		if (pos == -1)
//		{
//			printf("要删除的人不存在\n");
//		}
//		else
//		{
//			//删除数据
//			int j = 0;
//			for (j = pos; j < ps->size-1; j++)
//			{
//				ps->data[j] = ps->data[j + 1];//往前覆盖
//			}
//			ps->size--;
//			printf("删除成功\n");
//		}
//	}
//}
//
//void SearchContact(const struct Contact* ps)
//{
//	printf("请输入要查找人的名字:>");
//	char name[MAX_NAME];
//	scanf("%s",name);
//	int pos = FindByName(ps,name);
//	if (pos == -1)
//	{
//		printf("要查找的人不存在\n");
//	}
//	else
//	{
//		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
//		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
//			ps->data[pos].name,
//			ps->data[pos].age,
//			ps->data[pos].sex,
//			ps->data[pos].tele,
//			ps->data[pos].addr);
//	}
//}
//
//void ModifyContact(struct Contact* ps)
//{
//	printf("请输入要修改联系人的名字:>");
//	char name[MAX_NAME];
//	scanf("%s",name);
//	int pos = FindByName(ps,name);
//	if (pos == -1)
//	{
//		printf("要修改人的信息不存在\n");
//	}
//	else
//	{
//		printf("请输入名字:>");
//		scanf("%s", ps->data[pos].name);
//		printf("请输入年龄:>");
//		scanf("%d", &(ps->data[pos].age));
//		printf("请输入性别:>");
//		scanf("%s", ps->data[pos].sex);
//		printf("请输入电话:>");
//		scanf("%s", ps->data[pos].tele);
//		printf("请输入地址:>");
//		scanf("%s", ps->data[pos].addr);
//		printf("修改成功\n");
//	}
//}
//void SortContact(struct Contact* ps)//通过年龄排序 (冒泡排序)
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<ps->size-1;i++)
//	{
//		int flag = 1;
//		for (j = 0; j < ps->size - 1 - i; j++)
//		{
//			if (ps->data[j].age > ps->data[j + 1].age)
//			{
//				struct PeoInfo tmp = ps->data[j];
//				ps->data[j] = ps->data[j + 1];
//				ps->data[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}


//-----------------------------------------------通讯里练习
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"
#include <string.h>
void Init_Contact(struct Contact* ps)
{
	memset(ps->peo,0,sizeof(ps->peo));
	ps->num = 0;
}
void Add_Contact(struct Contact* ps)
{
	if (ps->num == MAX)
	{
		printf("THE CONTACT IS ALREADY FULL\n");
	}
	else
	{
		printf("ENTER NAME:");
		scanf("%s",ps->peo[ps->num].name);
		printf("ENTER AGE:");
		scanf("%d", &(ps->peo[ps->num].age));
		printf("ENTER SEX:");
		scanf("%s", ps->peo[ps->num].sex);
		printf("ENTER TELE:");
		scanf("%s", ps->peo[ps->num].tele);
		printf("ENTER ADDR:");
		scanf("%s", ps->peo[ps->num].addr);
		ps->num++;
	}
}
static int FindByName(const struct Contact* ps,char name[MAX_NAME])
{
	for (int i = 0; i < ps->num; i++)
	{
		if (strcmp(ps->peo[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Del_Contact(struct Contact* ps)
{
	if (ps->num == 0)
	{
		printf("NO MEMBERS COULD BE DELETED\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("ENTER THE NAME THAT YOU WANT TO DEL FROM THE CON:>");
		scanf("%s", name);
		int ret = FindByName(ps, name);
		if (ret == -1)
		{
			printf("THE NAME YOU WANT TO DEL DID NOT EXIST\n");
		}
		else
		{
			for (int i = ret; i < ps->num - 1; i++)
			{
				ps->peo[i] = ps->peo[i + 1];
			}
			ps->num--;
			printf("DEL SUCCESSFULLY\n");
		}
	}
}
void Show_Contact(const struct Contact* ps)
{
	printf("%20s\t%s\t%5s\t%12s\t%20s\n", "NAME","AGE","SEX","TELE","ADDR");
	for (int i=0;i<ps->num;i++)
	{
		printf("%20s\t%d\t%5s\t%12s\t%20s\n",
			ps->peo[i].name,
			ps->peo[i].age,
			ps->peo[i].sex,
			ps->peo[i].tele,
			ps->peo[i].addr);
	}
}
void Search_Contact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("ENTER THE NAME YOU WANT TO SEARCH:>");
	scanf("%s",name);
	int ret = FindByName(ps,name);
	if (ret == -1)
	{
		printf("THE NAME YOU WANT TO SEARCH DID NOT EXIST\n");
	}
	else
	{
		printf("%20s\t%s\t%5s\t%12s\t%20s\n", "NAME", "AGE", "SEX", "TELE", "ADDR");
		printf("%20s\t%d\t%5s\t%12s\t%20s\n",
			ps->peo[ret].name,
			ps->peo[ret].age,
			ps->peo[ret].sex,
			ps->peo[ret].tele,
			ps->peo[ret].addr);
	}
}
void Modify_Contact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("ENTER THE NAME YOU WANT TO MODIFY:>");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("THE NAME YOU WANT TO MODIFY DID NOT EXIST\n");
	}
	else
	{
		printf("ENTER NAME:");
		scanf("%s", ps->peo[ret].name);
		printf("ENTER AGE:");
		scanf("%d", &(ps->peo[ret].age));
		printf("ENTER SEX:");
		scanf("%s", ps->peo[ret].sex);
		printf("ENTER TELE:");
		scanf("%s", ps->peo[ret].tele);
		printf("ENTER ADDR:");
		scanf("%s", ps->peo[ret].addr);
	}
}
void Sort_Contact(struct Contact* ps)//Sort By Age
{
	for (int i = 0; i < ps->num-1; i++)
	{
		for (int j = 0; j < ps->num - 1 - i; j++)
		{
			if (ps->peo[j].age > ps->peo[j + 1].age)
			{
				struct PeoInfo tmp = ps->peo[j];
				ps->peo[j] = ps->peo[j+1];
				ps->peo[j + 1] = tmp;
			}
		}
	}
	printf("SORT SUCCESSFULLY\n");
}