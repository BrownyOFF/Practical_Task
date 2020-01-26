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

struct teacher{
	char suname[15];
	char name[15];
	char otchestv[15];
	char sex[15];
	char city[15];
	char addres[15];
	int house;
	int flat;
	char birth[15];
	char kafedra[15];
	char posada[15];
	char step[15];
	char osvita[15];
	int staz;
};

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int am = 0, search, delete, task;
	char name[] = "C:\\Users\\3brow\\Practise_Task\\teacher.txt";
	struct teacher *num;
	num = (struct teacher*)malloc(sizeof(struct teacher));
	{
		
		printf("Structure:\n");
		printf("0 - Close\n");
		printf("1 - New record\n");
		printf("2 - Open structure\n");
		printf("3 - Search\n");
		printf("4 - Delete record\n");
		printf("5 - Sort by suname\n-->");
		scanf("%d", &task);
		switch (task)
		{
			case 1:

				// Write

				FILE *f;
				f = fopen(name, "a");
				if (f == NULL) 
				{
					printf("\nFile cannot be reach\n");
					break;									 	// файл не удалось открыть
				}
				else 
				{
					num = write()
					fwrite()				// Работа с файлом
				}
				break;
			case 2:
				printf("\n2");
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
				free(num);
				return 0;
			default:
				printf("\nWrong number\n");
				break;
		}
	}while (task != 0);
	free(num);
	return 0;
}