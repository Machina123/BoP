/*
Zdefiniuj funkcjê suma obliczaj¹c¹ i zwracaj¹c¹ dla zadanego parametru n
(n=1,2,...,9) sumê sk³adników: 1 + 22 + 333 + 4444 + … . Napisz program
wykorzystuj¹cy funkcjê suma. 
*/

#include <stdio.h> 

int potega(int, int);
long long int suma(int);

int main(void) {
	printf("%lld", suma(8));
	return 0;
}

int potega(int a, int n) {
	if(n == 0) return 1;
	int i;
	int base = a;
	for(i=1; i<n; i++) {
		a *= base;
	}
	return a;
}

long long int suma(int n) {
	if(n < 1 || n > 9) return 0;
	long long int ret = 0;
	int skladnik, i, j;
	for(i = n; i>0; i--) {
		skladnik = i;
		for(j=potega(10,i-1); j>1; j/=10){
			skladnik += i*j;
		}
		ret += skladnik;
	}	
	return ret;
}

