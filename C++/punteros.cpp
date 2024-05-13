#include <iostream>

using namespace std;

int main()
{
    int a, *p_a, b, *p_b;
    cout << "ingrese el valor de a :" << a;
    cin >> a;
    p_a = &a;
    cout << "el valor de a es: " << *p_a << " y su direccion de memoria es: " << p_a << endl;

    *p_a = 15;
    cout << "el nuevo valor de a es: " << a << " y su direccion de memoria sigue siendo: " << p_a << endl;

    b = *p_a;
    p_b = &b;
    cout << "se ha creado una copia llamada b y su valor es: " << *p_b << " y su direccion de memoria es: " << p_b << endl;

    return 0;
}