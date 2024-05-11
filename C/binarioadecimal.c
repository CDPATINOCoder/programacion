#include <stdio.h>

int main()
{
    int binario;
    int decimal = 0, base = 1;

    printf("Ingresa un número binario: ");
    scanf("%d", &binario);

    while (binario != 0)
    {
        int digito = binario % 10;
        decimal += digito * base;
        base *= 2;
        binario /= 10;
    }

    printf("El número decimal es: %d\n", decimal);

    return 0;
}