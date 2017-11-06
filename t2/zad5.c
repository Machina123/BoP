//Napisz program wyznaczający część całkowitą i resztę z dzielenia dwóch 
//liczb naturalnych (bez użycia operatora % oraz operatora /). 

#include <stdio.h>

int main(void) {
	int dzielna, dzielnik, wynik=0;
	
	printf("Podaj dzielna: ");
	scanf("%d",&dzielna);
	printf("Podaj dzielnik: ");
	scanf("%d",&dzielnik);
	while(dzielna >= dzielnik) {
		dzielna -= dzielnik;
		wynik++;
	}
	printf("Wynik dzielenia to %d r %d", wynik, dzielna);
	return 0;
}