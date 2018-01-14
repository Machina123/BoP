#include <stdio.h>
#define N 5

void transponuj(int[N][N]);

int main(void) {
    int macierz[N][N] = {
        {0,1,2,3,4},
        {0,1,2,3,4},
        {0,1,2,3,4},
        {0,1,2,3,4},
        {0,1,2,3,4}
    };
    wypisz(macierz);
    printf("\n");
    transponuj(macierz);
    wypisz(macierz);
    printf("\n");
    transponuj(macierz);
    wypisz(macierz);
    return 0;
}

void transponuj(int M[N][N]) {
    int Mt[N][N];
    int i, j;
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
           Mt[i][j] = M[j][i];
        }
    }
    for(i=0; i<N; i++) {
        for(j=0; j<N;j++) {
            M[i][j] = Mt[i][j];
        }
    }
}

void wypisz(int M[N][N]) {
    int i,j;
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}
