#include <iostream>
#include <queue>

using namespace std;

void encolar(queue<int> &cola)
{
    if (cola.size() < 5)
    {
        int elemento;
        cout << "Ingrese el elemento a encolar: ";
        cin >> elemento;
        cola.push(elemento);
        cout << "Elemento encolado correctamente.\n";
    }
    else
    {
        cout << "La cola ya tiene 5 elementos. No se puede encolar más.\n";
    }
}

void desencolar(queue<int> &cola)
{
    if (!cola.empty())
    {
        cout << "Elemento desencolado: " << cola.front() << "\n";
        cola.pop();
    }
    else
    {
        cout << "La cola está vacía.\n";
    }
}

void mostrarTamano(queue<int> &cola)
{
    cout << "Tamaño de la cola: " << cola.size() << "\n";
}

void mostrarCola(queue<int> &cola)
{
    if (!cola.empty())
    {
        cout << "Elementos en la cola: ";
        queue<int> temp = cola;
        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << "\n";
    }
    else
    {
        cout << "La cola está vacía.\n";
    }
}

void sumarElementos(queue<int> &cola)
{
    if (!cola.empty())
    {
        int suma = 0;
        queue<int> temp = cola;
        while (!temp.empty())
        {
            suma += temp.front();
            temp.pop();
        }
        cout << "Suma de los elementos de la cola: " << suma << "\n";
    }
    else
    {
        cout << "La cola está vacía.\n";
    }
}

int main()
{
    queue<int> cola;
    int opcion;

    do
    {
        cout << "Seleccione una opción:\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Tamaño de la cola\n";
        cout << "4. Mostrar cola\n";
        cout << "5. Sumar elementos de la cola\n";
        cout << "6. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            encolar(cola);
            break;
        case 2:
            desencolar(cola);
            break;
        case 3:
            mostrarTamano(cola);
            break;
        case 4:
            mostrarCola(cola);
            break;
        case 5:
            sumarElementos(cola);
            break;
        case 6:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
            break;
        }
    } while (opcion != 6);

    return 0;
}