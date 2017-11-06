/*
Wprowadź niezbędne zmiany, tak aby poniższy program skompilował się i wykonał:

#include (stdio.h)
main(int){
	float x;
	int y;
	unsigned z;
	print("Podaj 3 liczby 1:rzeczywista, 2: calkowita ujemna,
	3:calkowita dodatnia\n");
	scanf("%d %d %d", x,y,z);
	print('Podales: %d\t%d\t',x,y,z);
	char znak, wielka;
	printf("\nNa jaka litere zaczyna sie Twoje imie?\n");
	scanf("%c", znak);
	wielka=toupper(znak);
	printf("\nCzyli twoje imie zaczyna sie na %c, a to jest %o numer w kodzie ASCII\n", wielka, wielka )
	unsign char znak =122;
	printf("\nZnak o kodzie:%d to:%c, a znak o kodzie: %d, to: %c",znak, znak, znak+200, znak+200);
	printf("\nAle przeciez %c ma kod %d ???",(znak+200)%256,(znak+200)%256 );
	return 0
} 
*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
	float x;
	int y;
	unsigned int z;
	printf("Podaj 3 liczby 1:rzeczywista, 2: calkowita ujemna, 3:calkowita dodatnia\n");
	scanf("%f %d %u", &x,&y,&z);
	printf("Podales: %f\t%d\t%u\n", x, y, z);
	unsigned char znak, wielka;
	printf("\nNa jaka litere zaczyna sie Twoje imie?\n");
	scanf(" %c", &znak);
	wielka=toupper(znak);
	printf("\nCzyli twoje imie zaczyna sie na %c, a to jest %d numer w kodzie ASCII\n", wielka, wielka );
	znak = 122;
	printf("\nZnak o kodzie:%d to:%c, a znak o kodzie: %d, to: %c", znak, znak, znak+200, znak+200);
	printf("\nAle przeciez %c ma kod %d ???", (znak+200)%256, (znak+200)%256);
	return 0;
} 