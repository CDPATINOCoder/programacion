#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int base = 8;
    int octal = 0;
    int aux = 0;
    int num = 0;
    int dig = 0;
    int pot = 1;
    srand(time(NULL));

    num = rand();
    printf("el numero a convertir es: %d\n", num);
    aux = num;

    dig = aux % base;
    octal = octal + (dig * pot);
    pot = pot * 10;

    aux = (aux - dig) / base;
    dig = aux % base;
    octal = octal + (dig * pot);

    printf("%d", octal);
    return 0;
}
