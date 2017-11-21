/*
Zdefiniuj funkcj�, kt�ra zwr�ci warto�� po�redni� spo�r�d trzech swoich
parametr�w, kt�rymi s� liczby zmiennoprzecinkowe, np. dla liczb 2.6, 7 i 5.2 zwr�ci
5.2. Wykorzystaj funkcj� w programie. 
*/

#include <stdio.h>
double mid(double, double, double);

int main(void) {
	printf("%lf", mid(2.6,7,5.2));
	return 0;
}

double mid(double a, double b, double c) {
	double d = (a>b?a:b);
	return d<c?d:c;
}
