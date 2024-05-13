#include <iostream>

using namespace std;

void pedirValores(int &a, int &b);
int suma(int a, int b);

int main()
{
    int num1, num2, resultado = 0;
    pedirValores(num1, num2);
    resultado = suma(num1, num2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}

void pedirValores(int &a, int &b)
{
    cout << "ingrese los valores: ";
    cin >> a >> b;
}

int suma(int a, int b)
{
    return a + b;
}
