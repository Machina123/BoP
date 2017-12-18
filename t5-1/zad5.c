/*
Napisz funkcję szukającą w danej N elementowej tablicy typu float pary
sąsiednich elementów, których suma jest największa. Funkcja jest typu void, a
indeks pierwszego z elementów spełniających warunek ma być dostępny w miejscu
wywołania funkcji. Wykorzystaj funkcję w programie.
*/
#include <stdio.h>
#define N 10
void para(float*, int, int*);

int main(void) {
    float tab[N] = {1.2, 34.5, 6.78, 9.01, 23.45, 6.789, 12.345, 67.89, 12.34, 5.678};
    int idx_maxp;
    para(tab, N, &idx_maxp);
    printf("%d", idx_maxp);
    return 0;
}

void para(float* T, int n, int* idx) {
    float maxp = T[0] + T[1];
    int i;
    *idx = 0;

    for(i=1; i<n-1; i++) {
        if(T[i] + T[i+1] > maxp) {
            *idx = i;
            maxp = T[i] + T[i+1];
        }
    }
}
