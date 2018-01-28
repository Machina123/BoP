#include <stdio.h>
#include <math.h>

// kod z malymi zmiananmi skopiowany z wykladu

struct punkt {
    float x, y;
};

struct kolo {
    struct punkt s;
    float r;
};

int main(void){
    int i,j;

    struct kolo tab_kol[5] = {
        {1,0.5,1},
        {3,0,1.5},
        {5,0,0},
        {0,0,0},
        {2,0,10} };

    printf("\nWspolne punkty maja kola o numerach:\n");

    for(i=0;i<4;i++) {
        for(j=i+1;j<5;j++) {
            if(wspolne( &tab_kol[i], &tab_kol[j] )) printf("\n%d i %d", i, j);
        }
    }
    return 0;
}

int wspolne(struct kolo * k1, struct kolo * k2) {
    float d=sqrt(pow(k1->s.x - k2->s.x,2)+ pow(k1->s.y - k2->s.y,2));
    if( k1->r + k2->r < d ) return 0;
    else return 1;
}
