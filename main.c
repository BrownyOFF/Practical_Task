#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#define KEY_A 65
#define KEY_O 79
#define KEY_F 70
#define KEY_D 68
#define KEY_S 83
#define KEY_BACKSPACE 8 

struct student{
	char suname[30];
	char name[30];
	char otchestv[30];
	char sex[30];
	char national[30];
	char birth[30];
	char number[30];
	int zip;
	char country[30];
	char city[30];
	char addres[30];
	int house;
	int flat;
	char univers[30];
	int year;
	char group[30];
	float avGrade;
	char spec[30];
}num;

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int am = 0, search, delete;
	char task;
	struct student num[20];
	struct student tmp;
	do
	{
		
		printf("Structure:\n");
		printf("0 - Close\n");
		printf("1 - New record\n");
		printf("2 - Open structure\n");
		printf("3 - Search\n");
		printf("4 - Delete record\n");
		printf("5 - Sort by suname\n-->");
		task = _getche();
		switch (task)
		{
			case KEY_A:
				printf("\n1");
				break;
			case KEY_O:
				printf("\n2");
				break;
			case KEY_F:
				printf("\n3");
				break;
			case KEY_D:
				printf("\n4");
				break;
			case KEY_S:
				printf("\n5");
				break;
			case KEY_BACKSPACE:
				return 0;
			default:
				printf("\nWrong number\n");
				break;
		}
	}while (task != 0);
	return 0;
}