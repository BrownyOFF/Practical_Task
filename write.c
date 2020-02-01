#include "write.h"

void scan(str* num, int* am)
{
	printf("\nSuname = "); scanf("%s", &num[*am].suname);
	printf("\nName = "); scanf("%s", &num[*am].name);
	printf("\nOtchevts = "); scanf("%s", &num[*am].otchestv);
	printf("\nSex = "); scanf("%s", &num[*am].sex);
	printf("\nCity = "); scanf("%s", &num[*am].city);
	printf("\nStreet = "); scanf("%s", &num[*am].addres);
	printf("\nHouse = "); scanf("%d", &num[*am].house);
	printf("\nFlat = "); scanf("%d", &num[*am].flat);
	printf("\nDate of birth = "); scanf("%s", &num[*am].birth);
	printf("\nkafedra = "); scanf("%s", &num[*am].kafedra);
	printf("\nPosada = "); scanf("%s", &num[*am].posada);
	printf("\nStep = "); scanf("%s", &num[*am].step);
	printf("\nOsvita = "); scanf("%s", &num[*am].osvita);
	printf("\nStaz = "); scanf("%d", &num[*am].staz);
}

void menu(void)
{
		for (int k = 0; k < 52; k++)
		{
			printf("-");
		}
		printf("\n");
		printf("Teachers:\n");
		printf("0 - Close\n");
		printf("1 - New record\n");
		printf("2 - Show structure\n");
		printf("3 - Search\n");
		printf("4 - Delete record\n");
		printf("5 - Sort:\n");
		printf("\t51 - Sort by name\n");
		printf("\t52 - Sort by surname\n");
		printf("\t53 - Sort by city\n");
		printf("6 - Edit record\n");
		printf("7 - Search:\n");
		printf("\t71 - Search by number\n");
		printf("\t72 - Search by name\n");
		printf("\t73 - Search by staz\n");
		for (int k = 0; k < 52; k++)
		{
			printf("-");
		}
		printf("\n-->");
}

void show_structure(str* num, int* am)
{
	printf("\n");
	for (int i = 0; i < (*am); i++)
 	{
 		for (int k = 0; k < 52; k++)
		{
			printf("-");
		}
 		printf("\nSuname: %s", num[i].suname);
		printf("\nName: %s", num[i].name);
		printf("\nOtchevts: %s", num[i].otchestv);
		printf("\nSex: %s", num[i].sex);
		printf("\nCity: %s", num[i].city);
		printf("\nStreet: %s", num[i].addres);
		printf("\nHouse: %d", num[i].house);
		printf("\nFlat: %d", num[i].flat);
		printf("\nDate of birth: %s", num[i].birth);
		printf("\nkafedra: %s", num[i].kafedra);
		printf("\nPosada: %s", num[i].posada);
		printf("\nStep: %s", num[i].step);
		printf("\nOsvita: %s", num[i].osvita);
		printf("\nStaz: %d", num[i].staz);
		printf("\n");
 	}
}

void sort_by_surname(str* num, int* am)
{
	str tmp;
	for (int i = (*am) - 1; i > 0; i--)
	{
 		for (int j = 0; j < i; j++)
 		{
 			if (strcmp(num[j].suname, num[j + 1].suname) > 0)
 			{
 				tmp = num[j];
 				num[j] = num[j + 1];
 				num[j + 1] = tmp;
 			}
 		}
	}
}

void write(str* num, int* am, FILE * f)
{
	rewind(f);
	for (int i = 0; i < (*am); i++)
	{
  		fwrite(&num[i], sizeof(str), 1, f);
	}
}

void loading(void)
{
	system("clear");
	system("cls");
	printf("Loading");
	sleep(1);
	system("clear");
	system("cls");
	printf("Loading.");
	sleep(1);
	system("clear");
	system("cls");
	printf("Loading..");
	sleep(1);
	system("clear");
	system("cls");
	printf("Loading...");
	sleep(1);
	system("clear");
	system("cls");
	printf("Done!");
	sleep(1);
	system("clear");
	system("cls");
}

void delete_structure(str* num, int* am)
{
	int del;
	printf("\nEnter number:");
	scanf("%d", &del);
	if (del > (*am + 1))
	{
		printf("\nDoesn\'t exist(printed = %d, existed = %d \n", del, *am + 1);
	}
	del--;
	for (int i = del; i < (*am); i++)
	{
		num[i] = num[i+1];
	}
	*am = *am - 1;
}

void sort_by_name(str* num, int* am)
{
	str tmp;
	for (int i = (*am) - 1; i > 0; i--)
	{
 		for (int j = 0; j < i; j++)
 		{
 			if (strcmp(num[j].name, num[j + 1].name) > 0)
 			{
 				tmp = num[j];
 				num[j] = num[j + 1];
 				num[j + 1] = tmp;
 			}
 		}
	}
}

void sort_by_city(str* num, int* am)
{
	str tmp;
	for (int i = (*am) - 1; i > 0; i--)
	{
 		for (int j = 0; j < i; j++)
 		{
 			if (strcmp(num[j].city, num[j + 1].city) > 0)
 			{
 				tmp = num[j];
 				num[j] = num[j + 1];
 				num[j + 1] = tmp;
 			}
 		}
	}
}

void search_by_number(str* num, int* number)
{
	for (int k = 0; k < 52; k++)
	{
			printf("-");
	}
 		printf("\nSuname: %s", num[*number].suname);
		printf("\nName: %s", num[*number].name);
		printf("\nOtchevts: %s", num[*number].otchestv);
		printf("\nSex: %s", num[*number].sex);
		printf("\nCity: %s", num[*number].city);
		printf("\nStreet: %s", num[*number].addres);
		printf("\nHouse: %d", num[*number].house);
		printf("\nFlat: %d", num[*number].flat);
		printf("\nDate of birth: %s", num[*number].birth);
		printf("\nkafedra: %s", num[*number].kafedra);
		printf("\nPosada: %s", num[*number].posada);
		printf("\nStep: %s", num[*number].step);
		printf("\nOsvita: %s", num[*number].osvita);
		printf("\nStaz: %d", num[*number].staz);
		printf("\n");
}

void search_by_name(str* num, int* am)
{
	system("clear");
	char NameSearch[15];
	printf("\nWrite name:");
	scanf("%s", &NameSearch);
	loading();
	for (int i = 0; i < *am; i++)
	{
		if (strcmp (NameSearch, num[i].name) == 0)
		{
			search_by_number(num, &i);
		}
	}
}

void search_by_staz(str* num, int* am)
{
	system("clear");
	int StazSearch;
	printf("\nWrite staz:");
	scanf("%d", &StazSearch);
	loading();
	for (int i = 0; i < *am; i++)
	{
		if (StazSearch == num[i].staz)
		{
			search_by_number(num, &i);
		}
	}
}