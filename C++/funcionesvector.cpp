#include <iostream>
using namespace std;
void pedirVector(int vector1[], int);
void mostrarVector(int vector1[], int);
int suma(int vector1[], int);

int main()
{
    const int tam = 5;
    int vector1[tam], suma2 = 0;
    pedirVector(vector1, tam);
    mostrarVector(vector1, tam);
    suma2 = suma(vector1, tam);
    cout << "\nla suma de los elementos es: " << suma2;

    return 0;
}

void pedirVector(int vector1[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "ingrese elemento en la posicion " << i << " del vector" << endl;
        cin >> vector1[i];
    }
}

void mostrarVector(int vector1[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vector1[i] << " ";
    }
}

int suma(int vector1[], int tam)
{
    int suma1 = 0;
    for (int i = 0; i < tam; i++)
    {
        suma1 = suma1 + vector1[i];
    }
    return suma1;
}
