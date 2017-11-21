/*
Zdefiniuj funkcje obliczaj¹ce kolejno objêtoœci: kuli, walca i sto¿ka. Napisz
program, który w zale¿noœci od wyboru u¿ytkownika wyznaczy objêtoœæ kuli, sto¿ka
lub walca - zastosuj instrukcjê wyboru switch.
*/

#include <stdio.h>
#define PI 3.141592653

double obj_kuli(double);
double obj_walca(double, double);
double obj_stozka(double, double);

int main(void) {
	double r, h;
	printf("1) objetosc kuli\n2) objetosc walca\n3) objetosc stozka\n1/2/3? ");
	char wybor = getchar();
	switch(wybor) {
		case '1':
			printf("\nPodaj promien kuli: ");
			scanf("%lf", &r);
			printf("\nPromien kuli wynosi %lf", obj_kuli(r));
			break;
		case '2':
			printf("\nPodaj promien podstawy: ");
			scanf("%lf", &r);
			printf("Podaj wysokosc walca: ");
			scanf("%lf", &h);
			printf("\nObjetosc walca wynosi %lf", obj_walca(r,h));
			break;
		case '3':
			printf("\nPodaj promien podstawy: ");
			scanf("%lf", &r);
			printf("Podaj wysokosc stozka: ");
			scanf("%lf", &h);
			printf("\nObjetosc stozka wynosi %lf", obj_stozka(r,h));
			break;
		default:
			printf("\nNieprawidlowy wybor");
			return 0;
	}
	return 0;
}

double obj_kuli(double R) {
	return ((double)4/3) * PI * R * R * R;
}

double obj_walca(double r, double H) {
	return PI * r * r * H;
}

double obj_stozka(double r, double H) {
	return (1/(double)3) * PI * r * r * H;
}
