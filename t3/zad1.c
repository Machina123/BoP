/*
Napisz funkcj� o nazwie min_fun, kt�ra zwr�ci warto�� mniejszego spo�r�d
dw�ch swoich parametr�w. Napisz program z u�yciem funkcji min_fun, w kt�rym
wyznaczona zostanie liczba najmniejsza spo�r�d 3 liczb pobranych z klawiatury. 
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
