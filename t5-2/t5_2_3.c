#include <stdio.h>
#include <time.h>

#define M 4
#define N 5

void sumakolumn(double[][N], double[], int);
void randomize(double[][N], int);
void wypisz(double[][N], int);
void wypisz1(double[], int);

int main(void) {
    double macierz[M][N], tablica[N];
    randomize(macierz, M);
    wypisz(macierz, M);
    sumakolumn(macierz, tablica, M);
    wypisz1(tablica, N);
    return 0;
}

void sumakolumn(double mtrx[][N], double arr[], int m) {
    int i, j;
    for(i = 0; i<N; i++) {
        arr[i] = 0.0;
        for(j=0; j<m; j++) arr[i] += mtrx[j][i];
    }
}

// Funkcja losująca wartości do macierzy MxN <0.0; 9.9>
void randomize(double t[][N], int m) {
    srand((unsigned) time(0));
    int i, j;
    double rnd;
    for(i=0; i<m; i++) {
        for(j=0; j<N;j++) {
            rnd = (double)((rand()%100)/10.0);
            t[i][j] = rnd;
        }
    }
}

//Funkcja wypisująca zawartość macierzy
void wypisz(double t[][N], int m) {
    int i, j;
    for(i = 0; i<m; i++) {
        for(j=0; j<N; j++) {
            printf("%03.2lf\t", t[i][j]);
        }
        printf("\n");
    }
}

//Funkcja wypisująca zawartość tablicy
void wypisz1(double t[], int m) {
    int i;
    for(i=0;i<m;i++) {
        printf("%03.2lf\t", t[i]);
    }
}
