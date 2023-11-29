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
