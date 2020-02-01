#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>

typedef struct teacher{
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
}str;

void write(str* num, int* am);
void menu(void);
void show_structure(str* num, int* am);