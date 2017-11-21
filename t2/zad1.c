//Napisz program drukowania na ekranie w 5-ciu kolejnych wierszach po 10 znaków '*'. 

#include <stdio.h>

int main(void) {
	int i,j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 