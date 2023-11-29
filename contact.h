//#define _CRT_SECURE_NO_WARNINGS 1
//
//enum Option//ö����ǿ����ɶ���
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};
//#ifndef __CONTACT_H__
//#define __CONTACT_H__
//#define MAX 1000
//#define MAX_NAME 20
//#define MAX_SEX 5
//#define MAX_TELE 12
//#define MAX_ADDR 20
//struct PeoInfo
//{
//	char name[MAX_NAME];
//	int age;
//	char sex[MAX_SEX];
//	char tele[MAX_TELE];
//	char addr[MAX_ADDR];
//};
//
//struct Contact
//{
//	struct PeoInfo data[MAX];//���1000����Ϣ
//	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
//};
//
//
//void InitContact(struct Contact* ps);
//void AddContact(struct Contact* ps);
//void ShowContact(const struct Contact* ps);
//void DelContact(struct Contact* ps);
//void SearchContact(const struct Contact* ps);
//void ModifyContact(struct Contact* ps);
//void SortContact(struct Contact* ps);
//#endif

//-----------------------------------------------ͨѶ����ϰ
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo peo[MAX];
	int num;
};
enum Contactwithfun
{
	EXIT,ADD,DEL,SEARCH,MODIFY,SHOW,SORT
};
#ifndef __CONTACT_H__
#define __CONTACT_H__

void Init_Contact(struct Contact* ps);
void Add_Contact(struct Contact* ps);
void Del_Contact(struct Contact* ps);
void Show_Contact(const struct Contact* ps);
void Search_Contact(const struct Contact* ps);
void Modify_Contact(struct Contact* ps);
void Sort_Contact(struct Contact* ps);

#endif


