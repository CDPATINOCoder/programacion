#include <iostream>

using namespace std;

void crearCopias(int a, int b);

int main()
{
    int num1, num2, suma;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "El valor de a es: " << num1 << endl;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "El valor de b es: " << num2 << endl;
    suma = num1 + num2;
    cout << "La suma sin funciones es " << suma << endl;

    crearCopias(num1, num2);

    return 0;
}

void crearCopias(int a, int b)
{
    a = a + 1;
    b = b + 1;
    cout << "El nuevo valor de a es: " << a << endl;
    cout << "El nuevo valor de b es: " << b << endl;
    cout << "La suma con funciones y nuevos valores es: " << a + b;
}