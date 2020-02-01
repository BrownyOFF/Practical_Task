#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

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

void scan(str* num, int* am);
void menu(void);
void show_structure(str* num, int* am);
void sort_by_surname(str* num, int* am);
void write(str* num, int* am, FILE * f);
void loading(void);
void delete_structure(str* num, int* am);
void sort_by_name(str* num, int* am);
void sort_by_city(str* num, int* am);
void search_by_number(str* num, int* number);
void search_by_name(str* num, int* am);
void search_by_staz(str* num, int* am);