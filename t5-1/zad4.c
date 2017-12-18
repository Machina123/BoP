/*
Napisz funkcję zerującą fragment tablicy zawarty między dwoma elementami,
których indeksy są przekazywane jako argumenty funkcji. Napisz program, w którym
po utworzeniu tablicy i jej wydrukowaniu, zastępowane są zerami elementy tablicy
z jej pierwszej połowy (pomiędzy indeksem 0 i N/2-1 ), jeśli ostatni element tablicy
jest liczbą parzystą lub z jej drugiej połowy, gdy element ten jest liczbą nieparzystą. 
*/
#include <stdio.h>
#define N 16

void zeruj(int*, int, int);
void drukuj(int*, int);

int main(void) {
    int tab[N] = {1,3,2,60,11,4,8,92,10,9,-12,33,4,5,7,6};
    drukuj(tab, N);
    if(tab[N-1]%2 == 1) {
        zeruj(tab, 0, (N/2)-1);
    } else {
        zeruj(tab, N/2, N-1);
    }
    drukuj(tab, N);
    return 0;
}

void zeruj(int* T, int idxs, int idxe) {
    int i;
    for(i = idxs; i<=idxe; i++) {
        T[i] = 0;
    }
}

void drukuj(int * T, int n) {
    int i;
    for(i = 0; i<n; i++) {
        printf("%4d ", T[i]);
    }
    printf("\n");
}
