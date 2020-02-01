#include "write.h"

void write(str* num, int* am)
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
		printf("Teachers:\n");
		printf("0 - Close\n");
		printf("1 - New record\n");
		printf("2 - Show structure\n");
		printf("3 - Search\n");
		printf("4 - Delete record\n");
		printf("5 - Sort\n-->");
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
 		for (int k = 0; k < 52; k++)
		{
			printf("-");
		}
 	}
}