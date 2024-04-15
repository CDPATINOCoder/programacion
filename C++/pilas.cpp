/*1. apilar 2. desapilar 3. la pila está vacia? 4. cima de la pila 5. mostrar elementos de la pila 6. salir */
#include<iostream>
#include<stack>

using namespace std;

int main ()
{
    stack<int> pila;
    int opciones = 0, apilar = 0, desapilar = 0, valor = 0;
    cout<<"**INTRODUCCION A PILAS**"<<endl;
    do
    {
        cout<<"Favor seleccionar una de las siguientes 6 opciones: "<<endl;
        cout<<"1. Apilar"<<endl; cout<<"2. Desarpilar"<<endl; cout<<"3. La pila esta vacia?"<<endl; cout<<"4. Mostra cima"<<endl; cout<<"5. Mostrar elementos"<<endl; cout<<"6. Salir"<<endl;
        cout<<"Su eleccion: ";
        cin>>opciones;
        switch(opciones)
        {
            case 1: 
            cout<<"-------------------------------------------------------------------"<<endl;
            if (pila.size() == 7)
            {
                cout<<"La pila alcanzo su capacidad maxima, favor desapilar o seleccionar otra opcion"<<endl;
            } else
            {
            cout<<"Ingrese el valor a cargar:\n";
            cin>>valor;
            pila.push(valor);
            cout<<"El "<<valor<<" fue ingresado correctamente en la pila"<<endl;
            }
            cout<<"-------------------------------------------------------------------" <<endl; break;
            case 2: 
            cout<<"-------------------------------------------------------------------"<<endl;
            if (pila.empty())
            {
                cout<<"Actualmente la pila esta vacia, no se puede realizar la operacion"<<endl;
            } else
            {
                cout<<"valor "<<pila.top()<<" desapilado correctamente"<<endl;
                pila.pop();
            }
            cout<<"-------------------------------------------------------------------"<<endl; break;
            case 3: 
            cout<<"-------------------------------------------------------------------"<<endl;
            if (pila.empty())
            {
                cout<<"Si, la pila esta vacia"<<endl;
            } else
            {
                cout<<"No, la pila contiene "<<pila.size()<<" elementos"<<endl;
            }
            cout<<"-------------------------------------------------------------------"<<endl; break;
            case 4:
            cout<<"-------------------------------------------------------------------" <<endl;
            cout<<"La cima de la pila es: "<<pila.top()<<endl;
            cout<<"-------------------------------------------------------------------"<<endl; break;
            case 5:
            cout<<"-------------------------------------------------------------------"<<endl;
            cout<<"Mostrando elementos de la pila: "<<endl;
            while (pila.empty() != true)
            {
                cout<<pila.top();
                cout<<endl;
                pila.pop();
            }
            cout<<"-------------------------------------------------------------------"<<endl; break;
            case 6:
            cout<<"-------------------------------------------------------------------"<<endl;
            cout<<"Gracias por utilizar el programa de pilas, saliendo..."<<endl; break;
            default:
            cout<<"-------------------------------------------------------------------"<<endl; 
            cout<<"Favor seleccionar solo del 1 al 6"<<endl; break;
        }
    }while(opciones != 6);

    return 0;
}