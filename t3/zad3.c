/*
Napisz iteracyjn¹ wersjê funkcji wyznaczaj¹cej wartoœæ n! (silnia). Korzystaj¹c
z funkcji napisz program:
a. wyliczaj¹cy wartoœæ wyra¿enia 4!+ 6! – 2!.
b. wyznaczaj¹cy wartoœæ symbolu Newtona dla n=5 i k=2. 
*/

#include <stdio.h>

long long int factorial(int);	// oblicza n!
double newton(int, int);		// oblicza symbol Newtona n!/(k! * (n-k)!)

int main(void) {
	int n=5, k=2;
	long long int solutionA = factorial(4) + factorial(6) - factorial(2);
	double solutionB = newton(n,k);
	printf("%lld\n%lf", solutionA, solutionB);
	return 0;
}

long long int factorial(int num) {
	long long int ret = num;
	while(num>1) {
		ret *= (--num);
	}
	return ret;
}

double newton(int n, int k) {
	return ((double) factorial(n))/((double)factorial(k) * factorial(n-k));
}
