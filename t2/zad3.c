//Napisz program wyznaczający sumę cyfr liczby naturalnej (z zakresu reprezentowanego typu). 
#include <stdio.h>

int main(void) {
	int mojaliczba, suma = 0;
	printf("Podaj liczbe\n");
	scanf("%d", &mojaliczba);
	
	while(mojaliczba != 0) {
		suma += mojaliczba %10;
		mojaliczba /= 10;
	}
	
	printf("Suma cyfr tej liczby to %d",suma);
	return 0;
}