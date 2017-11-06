//Napisz program drukujący kolejne potęgi liczby 2 w zakresie 2^1 - 2^12. 

#include <stdio.h>

int main(void) {
	int potega = 1;
	for(int i=0; i < 12; i++) {
		potega *= 2;
		printf("%d\n", potega);
	}
}