/*
Napisz funkcjê o nazwie min_fun, która zwróci wartoœæ mniejszego spoœród
dwóch swoich parametrów. Napisz program z u¿yciem funkcji min_fun, w którym
wyznaczona zostanie liczba najmniejsza spoœród 3 liczb pobranych z klawiatury. 
*/
#include <stdio.h>

double min_fun(double, double);

int main(void) {
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\n%lf\n",min_fun(min_fun(a,b),c));
	return 0;
}

double min_fun(double a, double b) {
	return a<b?a:b;
}
