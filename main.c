
#define	_CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <stdio.h>

void menu()
{
	printf("*************************************\n");
	printf("****1.add              2.del*********\n");
	printf("****3.search         4.modify********\n");
	printf("****5.show              6.sort*******\n");
	printf("***0.exit                 ***********\n");

}
void test()
{
	int input = 0;
	struct Contact con;
	Init_Contact(&con);
	do
	{
		menu();
		printf("ÇëÊäÈë:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_Contact(&con);
			break;
		case DEL:
			Del_Contact(&con);
			break;
		case SEARCH:
			Search_Contact(&con);
			break;
		case MODIFY:
			Modify_Contact(&con);
			break;
		case SHOW:
			Show_Contact(&con);
			break;
		case SORT:
			Sort_Contact(&con);
			break;
		case EXIT:
			printf("EXIT\n");
			break;
		default:
			printf("ERROR INPUT\n");
			break;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}