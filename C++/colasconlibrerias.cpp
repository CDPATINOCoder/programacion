#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> cola;
    int opcion;

    do
    {
        cout << "Seleccione una opcion:\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Tamano de la cola\n";
        cout << "4. Mostrar cola\n";
        cout << "5. Sumar elementos de la cola\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
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
                cout << "La cola ya tiene 5 elementos. No se puede encolar mas.\n";
            }
            break;
        }
        case 2:
        {
            if (!cola.empty())
            {
                cout << "Elemento desencolado: " << cola.front() << "\n";
                cola.pop();
            }
            else
            {
                cout << "La cola esta vacia.\n";
            }
            break;
        }
        case 3:
        {
            cout << "Tamano de la cola: " << cola.size() << "\n";
            break;
        }
        case 4:
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
                cout << "La cola esta vacia.\n";
            }
            break;
        }
        case 5:
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
                cout << "La cola esta vacia.\n";
            }
            break;
        }
        case 6:
        {
            cout << "Saliendo del programa...\n";
            break;
        }
        default:
        {
            cout << "Opción invalida. Por favor, seleccione una opcion valida.\n";
            break;
        }
        }
    } while (opcion != 6);

    return 0;
}