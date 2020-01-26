#include <write.h>

teacher write(teacher num);
{
	printf("\nSuname = "); scanf("%s", &num.suname);
	printf("\nName = "); scanf("%s", &num.name);
	printf("\nOtchevts = "); scanf("%s", &num.otchevts);
	printf("\nSex = "); scanf("%s", &num.sex);
	printf("\nCity = "); scanf("%s", &num.city);
	printf("\nStreet = "); scanf("%s", &num.street);
	printf("\nHouse = "); scanf("%d", &num.house);
	printf("\nFlat = "); scanf("%d", &num.flat);
	printf("\nDate of birth = "); scanf("%s", &num.birth);
	printf("\nkafedra = "); scanf("%s", &num.kafedra);
	printf("\nPosada = "); scanf("%s", &num.posada);
	printf("\nStep = "); scanf("%s", &num.step);
	printf("\nOsvita = "); scanf("%s", &num.osvita);
	printf("\nStaz = "); scanf("%d", &num.staz);
	return num;
}