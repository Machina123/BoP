//Napisz program wyznaczający sumę wszystkich dwucyfrowych liczb naturalnych, które
//przy dzieleniu przez daną liczbę naturalną k dają resztę r. 

#include <stdio.h>

int main(void) {
	int suma = 0, dzielnik, reszta;
	printf("Podaj dzielnik: ");
	scanf("%d", &dzielnik);
	printf("Podaj zadana reszte z dzielenia: ");
	scanf("%d", &reszta);
	
	for(int i = 10; i<100; i++) {
		if(i%dzielnik == reszta) suma += i;
	}
	printf("\n\nSuma wszystkich dwucyfrowych liczb natrualnych\nktore po dzieleniu przez %d daja reszte %d to %d",dzielnik,reszta,suma);
	return 0;
}