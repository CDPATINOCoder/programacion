#include <iostream>
#include <queue>

using namespace std;

queue<int> cola();
void imprimirCola(queue<int> miCola);

int main()
{
    queue<int> miCola = cola();
    imprimirCola(miCola);
}

queue<int> cola()
{
    queue<int> Cola;
    int elemento;
    char continuar;
    do
    {
        cout << "ingrese un elemento para la cola" << endl;
        cin >> elemento;
        Cola.push(elemento);
        cout << "desea ingresar otro elemento para la cola (s/n)?" << endl;
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    return Cola;
}

void imprimirCola(queue<int> miCola)
{
    while (!miCola.empty())
    {
        cout << "elementos de la cola:" << endl;
        cout << miCola.front() << endl;
        miCola.pop();
    }
}