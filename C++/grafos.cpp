//#<>||
#include <iostream>
#include <list>
#include <sstream>
//El promedio de los elementos (vértices) del grafo
using namespace std;

int num_nodos = 0;
int suma_pesos = 0;
int aux = 0;

struct nodo { //Declaramos una estructura de tipo nodo
	int valor; //Valor del nodo (vertice)
	struct nodo *siguiente; //Puntero del nodo siguiente
	struct arista *adyacente; //Puntero del nodo adyacente
};

struct arista { //Declaramos una estructura de tipo arista
	struct nodo *destino; //Puntero del nodo destino
	struct arista *proximo; //Puntero del nodo proximo
};

typedef struct nodo *Tnodo; //Declaramos un puntero padre
Tnodo puntero; //Declaramos un puntero padre

typedef struct arista *Tarista; //Declaramos un puntero de tipo arista

void insertar_nodo(); //Metodo para insertar elementos (vertices) en el grafo

void agregar_arista(Tnodo &, Tnodo &, Tarista &); //Metodo para agregar las aristas

void insertar_arista(); //Metodo para insertar una arista

void mostrar_aristas(); //Metodo para mostrar las aristas

void mostrar_grafo(); //Metodo para mostrar el grafo

void mostrar_peso_arista(); //Mostrar pesos de las aristas

list<string> lista; //Declaramos una lista para guardar los pesos de las aristas
list<string> :: iterator posicion_puntero; //El puntero de la lista para poder recorrelo

int main() {
	int opcion = 1;
	puntero = NULL;
	while (opcion > 0 && opcion < 6) {
		cout<<endl<<"Menu de opciones, digite un numero para seleccionar"<<endl;
		cout<<"1- Insertar un vertice"<<endl;
		cout<<"2- Insertar una arista"<<endl;
		cout<<"3- Mostrar arista"<<endl;
		cout<<"4- Mostrar grafo"<<endl;
		cout<<"5- Limpiar pantalla"<<endl;
		cout<<"6- Mostrar grafo y salir"<<endl;
		cout<<"Elija una opcion: ";
		cin>>opcion;
		switch (opcion) {
			case 1:
				insertar_nodo();
			break;
			case 2:
				insertar_arista();
			break;
			case 3:
				mostrar_aristas();
			break;
			case 4:
				mostrar_grafo();
			break;
			case 5:
				system("cls");
			break;
			case 6:
				mostrar_grafo();
				mostrar_peso_arista();
				return 0;
			break;
			
		}
	}
	return 0;
}

void insertar_nodo() {
   if (num_nodos >= 4) { 
        cout << "No se pueden insertar mas nodos, el limite es 4." << endl;
        return;
    }

    Tnodo recorrer, nuevo_nodo = new struct nodo; // Reservamos espacio en memoria
    cout << "Inserte un valor a agregar al grafo: ";
    cin >> nuevo_nodo->valor; // Insertamos el nuevo valor al grafo
    nuevo_nodo->siguiente = NULL; // Marcamos como nulo los punteros
    nuevo_nodo->adyacente = NULL; // Marcamos como nulo los punteros

    if (puntero == NULL) { // Preguntamos si el grafo esta vacio, seria el primer elemento a insertar
        puntero = nuevo_nodo; // Igualamos el puntero padre con el puntero actual
        cout << "Valor insertado correctamente" << endl;
    } else { // Si el grafo no esta vacio, ya tiene elementos
        recorrer = puntero; // Tomamos al siguiente posicion de memoria libre
        while (recorrer->siguiente != NULL) { // Recorremos la estructura hasta que llegamos al final de ella
            recorrer = recorrer->siguiente; // Movemos el puntero hasta llegar a la posicion de memoria disponible
        }
        recorrer->siguiente = nuevo_nodo; // Insertamos nuestro nuevo valor al grafo
        cout << "Valor insertado correctamente" << endl;
    }

    num_nodos++; 
}

void agregar_arista(Tnodo &auxiliar, Tnodo &auxiliar2, Tarista &nuevo_nodo) {
	Tarista recorrer;
	if (auxiliar -> adyacente == NULL) { //Preguntamos si el puntero adyacente esta vacio
		auxiliar -> adyacente = nuevo_nodo; //Agregamos la nueva arista al puntero adyacente
		nuevo_nodo -> destino = auxiliar2; //El destino recibe que valor de auxiliar2 que estara vacio inicialmente
	} else { //Si no esta vacio el puntero adyacente
		recorrer = auxiliar -> adyacente; //Asignamos la ultima posicion de memoria a la variable auxiliar3, ya que vamos a insertar en la ultima posicion
		while (recorrer -> proximo != NULL) { //Recorremos la estructura hasta que llegamos al final de ella
			recorrer = recorrer -> proximo; //Movemos el puntero hasta llegar a la posicion de memoria disponible
		}
		nuevo_nodo -> destino = auxiliar2; //Insertamos el puntero en el destino
		recorrer -> proximo = nuevo_nodo; //Marcamos donde se insertaria la proxima arista
		cout<<"Arista insertada correctamente"<<endl;
	}
}

void insertar_arista() {
	int inicio, final, valor_peso_arista; //Declaramos 3 variables que seran el nodo de inicio, final y el peso que se conectaran mediante una arista
	stringstream arista_inicio, arista_final, arista_peso; //Declaramos 3 variables que seran el nodo de inicio, final y el peso que se conectaran mediante una arista (convertidos a string para mostrar en pantalla)
	string mostrar_valor_arista_peso; //Variable para mostrar el valor final del peso en pantalla
	Tarista nuevo_nodo = new struct arista; //Reservamos espacio en memoria
	Tnodo auxiliar, auxiliar2; //Declaramos 2 punteros auxiliares
	if (puntero == NULL) { //Preguntamos si el grafo esta vacio
		cout<<"El grafo esta vacio"<<endl;
	} else { //Si el grafo no esta vacio
		nuevo_nodo -> proximo = NULL; //Movemos el puntero a la siguiente posicion de memoria dispoible
		cout<<"Ingrese el nodo del inicio: ";
		cin>>inicio;
		cout<<"Ingrese el nodo del final: ";
		cin>>final;
		cout<<"Ingrese peso de la arista: ";
		cin>>valor_peso_arista;
		suma_pesos = suma_pesos + valor_peso_arista;
    	arista_peso << valor_peso_arista; //Enviamos el valor int a una variable string temporal
    	mostrar_valor_arista_peso = arista_inicio.str() + " -> " + arista_final.str() + " = " + arista_peso.str(); //Concatenamos los valores para mostrarlos en pantalla al salir del programa
		lista.push_back(mostrar_valor_arista_peso); //Guardamos la concatenacion de los valores en una lista para mostrarlo al final
		auxiliar = puntero; //Llevamos los punteros auxiliares hasta la posicion del puntero
		auxiliar2 = puntero; //Llevamos los punteros auxiliares hasta la posicion del puntero
		while (auxiliar2 != NULL) { //Preguntamos si el auxiliar2 esta vacio
			if(auxiliar2 -> valor == final) { //Si es el puntero final del grafo
				break; //Salimos del bloque
			}
			auxiliar2 = auxiliar2 -> siguiente; //Movemos el puntero al siguiente
		}
		while (auxiliar != NULL) { //Preguntamos si el auxiliar esta vacio
			if (auxiliar -> valor == inicio) { //Si es el puntero incial del grafo
				agregar_arista(auxiliar, auxiliar2, nuevo_nodo); //Agregamos la nueva arista
				return;
			}
			auxiliar = auxiliar -> siguiente; //Movemos el puntero auxiliar
		}
	}
}

void mostrar_aristas() {
	bool vertice_encontrado = false; //Variable para determinar si el nodo o vertice fue encontrado
	Tnodo auxiliar_nodo; //Puntero de nodo
	Tarista auxiliar_arista; //Puntero de la arista
	int vertice; //Vertice que vamos a mostrar sus aristas
	cout<<"Ingrese el vertice para ver sus aristas: ";
	cin>>vertice;
	auxiliar_nodo = puntero; //Movemos el puntero hasta el puntero auxiliar
	while (auxiliar_nodo != NULL) { //Preguntamos si el auxiliar del nodo esta vacio
		if (auxiliar_nodo -> valor == vertice) { //Preguntamos si el vertice buscado esta en el grafo
			if (auxiliar_nodo -> adyacente == NULL) { //Preguntamos si no tiene adyacente, si no lo tiene, no tiene aristas
				cout<<"Este vertice no tiene aristas"<<endl;
				return;
			} else { //Si tiene valores adyacentes
				cout<<auxiliar_nodo -> valor<<" -> "; //Mostramos el vertice
				auxiliar_arista = auxiliar_nodo -> adyacente; //Movemos el nodo auxilar al sigiente adyacente
				while (auxiliar_arista != NULL) { //Recorremos las aristas hasta llegar al final
					cout<<auxiliar_arista -> destino -> valor<<" | "; //Mostramos la arista
					auxiliar_arista = auxiliar_arista -> proximo; //Movemos a la siguiente arista
				}
				cout<<endl;
				return;
			}
			vertice_encontrado = true; //El vertice fue encontrado
		} else {
			auxiliar_nodo = auxiliar_nodo -> siguiente; //Movemos el puntero del nodo auxiliar al siguiente valor para comparalo
		}
	}
	if (vertice_encontrado == false) { //Preguntamos si el vertice se encontro durante el recorrido del grafo, si no se encontro mostramos el mensaje en pantalla, si se encontro no hacemos nada
		cout<<"Este vertice no existe en el grafo"<<endl;
	}
}

void mostrar_grafo() {
    Tnodo puntero_nodo; // Puntero de nodo
    Tarista puntero_arista; // Puntero de la arista
    puntero_nodo = puntero; // Al puntero del nodo le llevamos al inicio
    int suma = 0, promedio = 0, contador = 0, pares = 0, impares = 0;
    cout << "Mostrando grafo" << endl;
    while (puntero_nodo != NULL) { // Preguntamos si el puntero local del nodo no esta vacio
        cout << puntero_nodo->valor << " -> "; // Mostramos el nodo
        suma += puntero_nodo->valor; 
        contador++; 
        if (puntero_nodo->valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (puntero_nodo->adyacente != NULL) { // Si el puntero del nodo no esta vacio
            puntero_arista = puntero_nodo->adyacente; // Movemos el puntero de la arista segun el nodo
            while (puntero_arista != NULL) { // Preguntamos si el puntero de la arista no esta vacia
                cout << puntero_arista->destino->valor << " | "; // Mostramos la arista
                puntero_arista = puntero_arista->proximo; // Movemos el puntero de la arista
            }
        }
        puntero_nodo = puntero_nodo->siguiente; 
        cout << endl;
    }                                           
    promedio = suma / contador; 
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "Cantidad de nodos pares: " << pares << endl;
    cout << "Cantidad de nodos impares: " << impares << endl;
}


void mostrar_peso_arista() {
	posicion_puntero = lista.begin(); //Obtenemos la posicion inicial del puntero de la lista
	cout<<"Pesos de las aristas"<<endl;
	while (posicion_puntero != lista.end()) { //Recorremos la lista hasta llegar al final
		cout<<" | "<<*posicion_puntero<<" | "; //Mostramos los elementos de la lista ( Muestra el valor de un elemento de la lista)
		cout<<endl;
		posicion_puntero++; //Movemos el puntero a la siguiente posicion
	}
	cout<<"la suma de los pesos es de: "<<suma_pesos;
}

              