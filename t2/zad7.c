//Napisz program, w którym wydrukowane zostaną wartości odwrotne (1/n) liczb
//dwucyfrowych naturalnych podzielnych przez 5.

#include <stdio.h>

int main(void) {
	int i;
	for(i=10; i<100; i++) {
		if(i%5 == 0) {
			printf("1/%d = %f\n", i, (float)(1/(float)i));
		}
	}	
	return 0;
}