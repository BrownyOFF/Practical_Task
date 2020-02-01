#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include "write.h"

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	char name[] = "teacher.txt";

	FILE* f;
	f = fopen(name, "r");
	if (f == NULL)
	{
		printf("\nError with open file");
		return 1;
	}
	int task, edit_num, number;

	fseek(f, 0, SEEK_END);
	int size = ftell(f);
	rewind(f);

	int size_str = sizeof(str);
	int am = size / size_str;

	str num[50];
	for (int i = 0; i < am; i++)
	{
		fread(&num[i], sizeof(str), 1, f);
	}
	fclose(f);
	loading();
	do {
		system("clear");
		system("cls");
		menu();
		scanf("%d", &task);
		switch (task)
		{
			case 1:
				system("clear");
				scan(num, &am);
				am++;
				f = fopen(name, "a");
				write(num, &am, f);
				loading();
				fclose(f);
				break;
			case 2:
				loading();
				show_structure(num, &am);
				system("pause");
				break;
			case 3:
				printf("\n3");
				break;
			case 4:
				delete_structure(num, &am);
				f = fopen(name, "w");
				write(num, &am, f);
				fclose(f);
				loading();
				break;
			case 51:
				sort_by_name(num, &am);
				f = fopen(name, "w");
				write(num, &am, f);
				fclose(f);
				loading(); 
				break;
			case 52:
				sort_by_surname(num, &am);
				f = fopen(name, "w");
				write(num, &am, f);
				fclose(f);
				loading();
				break;
			case 53:
				sort_by_city(num, &am);
				f = fopen(name, "w");
				write(num, &am, f);
				fclose(f);
				loading();
				break;
			case 6:
				printf("\nWrite number of record(exist = %d):", am);
				scanf("%d", &edit_num);
				edit_num -= 1;
				scan(num, &edit_num);
				f = fopen(name, "w");
				write(num, &am, f);
				loading();
				fclose(f);
				break;
			case 71:
				printf("\nWrite number of record(exist = %d):", am);
				scanf("%d", &number);
				number--;
				system("clear");
				loading();
				search_by_number(num, &number);
				system("pause");
				break;
			case 72:
				search_by_name(num, &am);
				system("pause");
				break;
			case 73:
				search_by_staz(num, &am);
				system("pause");
				break;
			case 0:
				printf("\nSee ya!");
				sleep(1);
				return 0;
			default:
				printf("\nWrong number\n");
				sleep(1);
				break;
		}
	}while (task != 0);
	return 0;
}