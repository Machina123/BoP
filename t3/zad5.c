/*
Zdefiniuj funkcjê, która zwróci wartoœæ poœredni¹ spoœród trzech swoich
parametrów, którymi s¹ liczby zmiennoprzecinkowe, np. dla liczb 2.6, 7 i 5.2 zwróci
5.2. Wykorzystaj funkcjê w programie. 
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
