/*
Napisz funkcjê wyznaczaj¹c¹ wartoœæ n-tej potêgi (n-ca³kowite, dodatnie) liczby
rzeczywistej x (potêga i liczba s¹ argumentami tej funkcji). Korzystaj¹c z tej funkcji
napisz program wyliczaj¹cy wartoœæ wyra¿enia (4.1)^2 + (3.5)^3 + 2^4 
*/

#include <stdio.h>

double power(double,unsigned int);

int main(void) {
	double liczba = power(4.1,2) + power(3.5,3) + power(2,4);
	printf("%lf", liczba);
	return 0;
}

double power(double num,unsigned int exp) {
	if(exp == 0) return 1;
	int i;
	double base = num;
	for(i=1; i<exp; i++) {
		num *= base;
	}
	return num;
}
