#include <stdio.h>
#define N 5

int czydiagonalna(int[N][N]);

int main(void) {
    int macierz[N][N] = {
        {1,0,0,0,0},
        {0,2,0,0,0},
        {0,0,3,0,0},
        {0,0,0,4,0},
        {0,0,0,0,5}
    };
    int d = czydiagonalna(macierz);
    printf("Czy macierz jest diagonalna? ");
    printf(d?"TAK":"NIE");
    return 0;
}

int czydiagonalna(int mtrx[N][N]) {
    int i, j;
    for(i = 0; i < N; i++) {
        for(j = 0; j<N; j++) {
            if(i!=j && mtrx[i][j] != 0) return 0;
        }
    }
    return 1;
}
