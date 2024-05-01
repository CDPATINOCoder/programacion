#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int frecuencia[6] = {0};
    int dado;

    for (int i = 0; i < 30; i++)
    {
        dado = (rand() % 6) + 1;
        frecuencia[dado - 1]++;
    }
    printf("Resultado del lanzamiento del dado 30 veces\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Numero %d: %d veces\n", i + 1, frecuencia[i]);
    }

    return 0;
}