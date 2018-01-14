#include <stdio.h>
#include <time.h>

#define M 4
#define N 4

double czworka(double[][N], int, int*, int*);
void randomize(double[][N], int);
void wypisz(double[][N], int);

int main(void) {
    double macierz[M][N], max_czworka;
    int x, y;
    randomize(macierz, M);
    wypisz(macierz, M);
    max_czworka = czworka(macierz, M, &x, &y);
    printf("\nNajwieksza czworke znaleziono na pozycji (%d, %d) i wynosi %4.2lf\n", x, y, max_czworka);
    return 0;
}

double czworka(double t[][N], int m, int *x, int *y) {
    int i, j;
    double maxfour = 0.0, four;
    for(i=0; i<m-1; i++) {
        for(j=0; j<N-1; j++) {
            four = t[i][j] + t[i+1][j] + t[i][j+1] + t[i+1][j+1];
            if(four > maxfour) {
                    maxfour = four;
                    *x = i;
                    *y = j;
            }
        }
    }
    return maxfour;
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
