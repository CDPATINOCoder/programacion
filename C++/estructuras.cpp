#include <iostream>
using namespace std;

struct persona
{
    string nombre;
    int edad;
} persona1, persona2;

int main()
{
    cout << "Ingrese el nombre de la persona 1: ";
    getline(cin, persona1.nombre);
    cout << "Ingrese la edad de la persona 1: ";
    cin >> persona1.edad;
    cout << "\nIngrese el nombre de la persona 2: ";
    cin >> persona2.nombre;
    cout << "Ingrese la edad de la persona 2: ";
    cin >> persona2.edad;

    cout << "nombre: " << persona1.nombre << " y edad: " << persona1.edad << endl;
    cout << "nombre: " << persona2.nombre << " y edad: " << persona2.edad << endl;

    return 0;
}