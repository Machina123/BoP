/*
Napisz funkcję szukającą w danej N elementowej tablicy typu double
pierwszych dwóch jednakowych elementów. Funkcja zwraca wartość 0, gdy brak
jest dwóch jednakowych elementów i 1 w przeciwnym przypadku. Indeksy
znalezionych elementów mają być dostępne w miejscu wywołania funkcji.
Wykorzystaj funkcję w programie. 
*/
#include <stdio.h>
#define N 10

int jednakowe(double*, int, int*, int*);

int main(void) {
    double tab[N] = {12.34, 5.67, 8.9, 12.34, 5.678, 9.012, 3.456, 7.89, 1.23, 4.56};
    int idx1, idx2;
    if(jednakowe(tab, N, &idx1, &idx2) == 1) {
        printf("Znaleziono jednakowe elementy na indeksach %d i %d, ich wartosc to %f", idx1, idx2, tab[idx1]);
    } else {
        printf("Nie ma w tej tablicy dwoch jednakowych elementow!");
    }
    return 0;
}

int jednakowe(double* T, int n, int* idx1, int* idx2) {
    int i,j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(T[i] == T[j]) {
                *idx1 = i;
                *idx2 = j;
                return 1;
            }
        }
    }
    return 0;
}
