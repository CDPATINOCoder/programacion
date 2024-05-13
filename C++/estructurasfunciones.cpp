#include <iostream>
using namespace std;

struct persona
{
    string nombre;
    int edad;
};

void leerDatos(persona &personas);
void imprimeDatos(persona &personas);
void modificaDatos(persona &personas);

int main()
{
    persona persona1, persona2;

    cout << "Ingrese datos de la persona 1: " << endl;
    leerDatos(persona1);
    cout << "Ingrese datos de la persona 2: " << endl;
    leerDatos(persona2);

    cout << "Imprimiendo datos de la persona 1: " << endl;
    imprimeDatos(persona1);
    cout << "Imprimiendo datos de la persona 2: " << endl;
    imprimeDatos(persona2);

    cout << "Modificando Datos: ";
    cout << "ingrese los datos de la persona1 nueva: " << endl;
    modificaDatos(persona1);
    cout << "ingrese los datos de la persona2 nueva: " << endl;
    modificaDatos(persona2);

    cout << "imprimiendo datos de la persona1 actualizada: " << endl;
    imprimeDatos(persona1);
    cout << "imprimiendo datos de la persona2 actualizada: " << endl;
    imprimeDatos(persona2);
}

void leerDatos(persona &personas)
{
    cout << "Nombre: ";
    cin >> personas.nombre;
    cout << "Edad: ";
    cin >> personas.edad;
}

void imprimeDatos(persona &personas)
{
    cout << "Nombre: " << personas.nombre << endl;
    cout << "Edad: " << personas.edad << endl;
}

void modificaDatos(persona &personas)
{
    cout << "Nombre: ";
    cin >> personas.nombre;
    cout << "Edad: ";
    cin >> personas.edad;
}