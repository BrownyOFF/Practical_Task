#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

typedef struct teacher{
	char suname[20];
	char name[20];
	char otchestv[20];
	char sex[20];
	char city[20];
	char addres[20];
	int house;
	int flat;
	char birth[20];
	char kafedra[20];
	char posada[20];
	char step[20];
	char osvita[20];
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