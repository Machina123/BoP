#include <stdio.h>
#define N 5

struct ulamek {
    int licz;
    unsigned int mian;
};

int wiekszy(struct ulamek, struct ulamek);
void sortowanie(struct ulamek *, int);
void wypisz(struct ulamek *);

int main(void) {
    struct ulamek tab_ulamkow[N] = {
        {1,2},
        {2,34},
        {4,5},
        {5,67},
        {8,9}
    };
    printf("Przed sortowaniem: \n");
    wypisz(tab_ulamkow);
    sortowanie(tab_ulamkow, N);
    printf("\nPo sortowaniu:\n");
    wypisz(tab_ulamkow);
    return 0;
}

int wiekszy(struct ulamek u1, struct ulamek u2) {
    // __tak jakby__ sprowadzam do wspolnego mianownika i porownuje liczniki
    return (u1.licz*(int)u2.mian > u2.licz*(int)u1.mian);
}

// kod z malymi zmiananmi skopiowany z wykladu
void sortowanie(struct ulamek * t, int n){
    int i, j, indeks;
    struct ulamek min;
    for(i=0;i<n-1;i++){
         min = t[i];
         indeks=i;
         for(j=i+1; j<n; j++)
            if(wiekszy(min, t[j])){
                 indeks=j;
                 min=t[j];
            }
         t[indeks]=t[i];
         t[i]=min;
     }
}

void wypisz(struct ulamek * tu, int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d/%u\n", tu[i].licz, tu[i].mian);
    }
}