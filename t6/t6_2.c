#include <stdio.h>

struct ulamek {
    int licz;
    unsigned int mian;
};

int wiekszy(struct ulamek, struct ulamek);
void sortowanie(struct ulamek *, int);

int main(void) {
    struct ulamek u1 = {1,2}, u2 = {1,3};
    printf("%d", wiekszy(u1,u2));
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
