/*
Napisz funkcję sprawdzającą, czy w tablicy nieuporządkowanej (liczb
rzeczywistych) znajduje się element o zadanej wartości. Tablica i szukana liczba są
parametrami wywołania, a funkcja zwraca indeks pierwszego znalezionego elementu
lub -1 w przypadku, gdy elementu nie ma.
*/

#include <stdio.h>

#define N 10

int szukaj(double*, int, double);

int main(void) {
    double szukana;
    double tab[N] = {1.2, 3.4, -5.6, -7.8, 9.0, -12.3, 45.6, 78.9, -123.45};
    printf("Podaj szukana liczbe w tablicy: ");
    scanf("%lf", &szukana);
    int idx = szukaj(tab, N, szukana);
    if(idx >= 0) {
        printf("Znaleziono szukana liczbe (%f) pod indeksem %d", szukana, idx);
    } else {
        printf("Nie znaleziono szukanego elementu (%f)", szukana);
    }
    return 0;
}

int szukaj(double* T, int n, double w) {
    int i;
    for(i = 0; i < n; i++)
        if(T[i] == w) return i;
    return -1;
}
