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
	char suname[30];
	char name[30];
	char otchestv[30];
	char sex[30];
	char city[30];
	char addres[30];
	int house;
	int flat;
	char birth[30];
	char kafedra[30];
	char posada[30];
	char step[30];
	char osvita[30];
	int staz;
};

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int am = 0, search, delete, task;
	struct teacher *num;
	num = (struct teacher*)malloc(10 * sizeof(struct teacher));
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
				printf("\n1");
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