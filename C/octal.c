#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("Convertir decimal a octal\n");

    int base = 8;
    int octal = 0;
    int pot = 1;
    int num = (rand() % 152) + 101;
    int aux = num;

    int dig = aux % base;
    int octal1 = octal + dig * pot;
    int pot1 = pot * 10;
    int aux1 = (aux - dig) / base;

    int dig1 = aux1 % base;
    int octal2 = octal1 + dig1 * pot1;
    int pot2 = pot1 * 10;
    int aux2 = (aux1 - dig1) / base;
    int dig2 = aux2 % base;
    int octal3 = octal2 + dig2 * pot2;

    printf("El valor %d en octal es: %d", aux, octal3);

    return 0;
}