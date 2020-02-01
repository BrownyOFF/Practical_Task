#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include "write.h"
#define KEY_A 65
#define KEY_O 79
#define KEY_F 70
#define KEY_D 68
#define KEY_S 83
#define KEY_BACKSPACE 8 

void write(str* num, int* am);
void menu(void);
void show_structure(str* num, int* am);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	char name[] = "teacher.txt";
	FILE* f;
	f = fopen(name, "a+");
	if (f == NULL)
	{
		printf("\nError with open file");
		return 1;
	}
	int am = 0, task;
	fseek(f, 0, SEEK_END);
	int size = ftell(f);
	rewind(f);
	str num[50];

	do {
		menu();
		scanf("%d", &task);
		switch (task)
		{
			case 1:
				write(num, &am);
				am++;
				for (int i = 0; i < am; i++)
				{
  					fwrite(&num[i], sizeof(str), am, f);
				}
				
				break;
			case 2:
				show_structure(num, &am);
				break;
			case 3:
				printf("\n3");
				break;
			case 4:
				printf("\n4");
				break;
			case 5:
				printf("\n5");
				break;
			case 0:
				fclose(f);
				return 0;
			default:
				printf("\nWrong number\n");
				break;
		}
	}while (task != 0);
	return 0;
}