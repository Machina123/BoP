//Napisz program podający ile 1-ynek występuje w reprezentacji binarnej danej liczby naturalnej. 

#include <stdio.h>

int main(void) {
	int liczba, jedynki = 0;
	
	printf("Podaj liczbe: ");
	scanf("%d", &liczba);
	
	while(liczba != 0) {
		if(liczba % 2 == 1) jedynki++;
		liczba /= 2;
	}
	
	printf("Jest %d jedynek w reprezentacji binarnej tej liczby", jedynki);
	return 0;
}