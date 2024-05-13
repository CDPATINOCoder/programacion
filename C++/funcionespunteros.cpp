#include <iostream>

using namespace std;

void leerValores(int &a, int &b);
void actualizarValores(int *p_a, int *p_b);

int main()
{
    int num1 = 0, num2 = 0;
    int *p_num1, *p_num2;
    leerValores(num1, num2);
    cout << "el valor de num 1 es: " << num1 << " y el valor de num 2 es: " << num2 << endl;
    p_num1 = &num1;
    p_num2 = &num2;
    actualizarValores(p_num1, p_num2);
    cout << "los nuevos valores de num 1 es: " << *p_num1 << "y de num 2 es: " << *p_num2 << endl;

    return 0;
}

void leerValores(int &a, int &b)
{
    cout << "ingrese el valor de num1: " << endl;
    cin >> a;
    cout << "ingrese el valor de num2: " << endl;
    cin >> b;
}

void actualizarValores(int *p_a, int *p_b)
{
    *p_a = 12;
    *p_b = 13;
}