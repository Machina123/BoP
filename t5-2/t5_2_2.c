#include <stdio.h>
#include <time.h>
#define W 4
#define H 3

float iloczyn(float[H][W]);
float randomize(float[H][W]);
void wypisz(float[H][W]);

int main(void) {
    float tablica[H][W];
    randomize(tablica);
    wypisz(tablica);
    printf("%f\n", iloczyn(tablica));
    wypisz(tablica);
    return 0;
}

float iloczyn(float t[H][W]) {
    int i, j;
    float ret = 1.0f;
    for(i=0; i<H; i++) {
        for(j=0; j<W; j++) {
            if((i+j)%2 == 1 && t[i][j] != 0.0f) ret *= t[i][j];
        }
    }

    return ret;
}

// Funkcja losująca wartości do tablicy <0.0; 9.9>
float randomize(float t[H][W]) {
    srand((unsigned) time(0));
    int i, j;
    for(i=0; i<H; i++) {
        for(j=0; j<W;j++) {
            t[i][j] = (float)((rand()%100)/10.0f);
        }
    }
}

//Funkcja wypisująca zawartość tablicy
void wypisz(float t[H][W]) {
    int i, j;
    for(i = 0; i<H; i++) {
        for(j=0; j<W; j++) {
            printf("%3.2f\t", t[i][j]);
        }
        printf("\n");
    }
}
