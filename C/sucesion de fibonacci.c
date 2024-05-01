#include <stdio.h>

int main()
{
    int y = 0, i, lugar;
    int z = 1;
    int x = 1;

    printf("Ingrese el valor ordinal de un numero :");
    scanf("%d", &lugar);
    for (i = 1; 1 < lugar; i++)
    {
        x = y + z;
        y = z;
        z = x;
    }

    printf(" El %d lugar ocupa el termino %d de la serie", lugar, x);

    return 0;
}