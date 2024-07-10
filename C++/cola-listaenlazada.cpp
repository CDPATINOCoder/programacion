/*
SEGUNDO EXAMEN PARCIAL

Nombre y Apellido: César Patiño	
C.I.: 5687358
Asignatura: Estructura de Datos (INF-188)
Carrera: Ingeniería Informática
Semestre: Tercer
Turno: Noche
Periodo: 2024.1
Profesor: Ing. William Santacruz
Grupo: 80
Fecha: 20-05-2024
Puntos Examen: 40
Puntos Procesos: 20
Total de Puntos: 60
Tipo de Examen: C

Indicadores:
1. El examen es de carácter personal, en caso de encontrarse 2 respuestas iguales, el examen de ambos será anulado llevando 0 (cero) puntos.
2. No se permite ninguna forma de comunicación entre los alumnos.
3. Leer la consigna y resolver lo solicitado, la compresión del problema y como resolverlo es parte del examen.
4. Realizar los ejercicios con el lenguaje C++ y completar los datos solicitados.
5. Una vez terminado el examen, guarda el archivo .cpp con el nombre EP2_Nombre_Apellido indicando el número de ejercicio, su enunciado y el
   código correspondiente para resolverlo debajo de cada ejercicio y súbelo en formato .cpp.
Total Examen: 40 Puntos                    Total Proceso: 20 Puntos
¡Éxitos!.

Realiza los siguientes ejercicios en C++ (40 Puntos)*/
/*---------------------------------------------------------------------------------------------------------------------------------------------
1.	Permitir al usuario ingresar una cola lineal de máximo 6 (Numel) elementos y al finalizar
	el programa determina mostrando en pantalla: (20 Puntos)
	a.	Validación de cantidad de elementos. (5 Puntos)
	b.	El valor mayor y menor de la cola. (5 Puntos)
	c.	Cantidad de elementos pares de la cola mayores a 6. (5 Puntos)
	d.	Cantidad de elementos impares de la cola menores a 18. (5 Puntos)*/
	
#include <iostream>
#include <queue>
/*
using namespace std;

	void encolar(queue<int> &cola)
	{
		if (cola.size() < 6)
		{
			int elemento;
			cout << "Ingrese el elemento a encolar: ";
			cin >> elemento;
			cola.push(elemento);
			cout << "Elemento encolado correctamente.\n";
		}
		else
		{
			cout << "La cola ya tiene 6 elementos. No se puede encolar más.\n";
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
	
	void salirYmostrar(queue<int> &cola)
	{
		int cantidad_pares = 0, cantidad_impares = 0, aux1, aux2;
		queue<int> temp = cola;
		aux1 = temp.front();
		aux2 = temp.front();
		while (!temp.empty())
		{
			if (temp.front() > aux1)
			{
				aux1 = temp.front();
			}
			if (temp.front() < aux2)
			{
				aux2 = temp.front();
			}
			if (temp.front() > 6 && temp.front() % 2 == 0)
			{
				cantidad_pares += 1;
			}
			if(temp.front() < 18 && temp.front() % 2 != 0)
			{
				cantidad_impares += 1;
			}
			temp.pop();
			
		}
		cout<<"hay "<<cantidad_pares<< " elementos pares mayor a 6 en la cola"<<endl;
		cout<<"hay "<<cantidad_impares<<" elementos impares menores a 18 en la cola"<<endl;
		cout<<"el elemento mayor de la cola es: "<<aux1<<" y el menor es: "<< aux2<<endl;
		cout<<"saliendo...<<endl;
		
	}



	int main()
	{
		queue<int> cola;
		int opcion;
		
		do
			{
				cout << "\nSeleccione una opción:\n";
				cout << "1. Encolar(Hasta 6 elementos)\n";
				cout << "2. Desencolar\n";
				cout << "3. Salir y mostrar: Valor mayor y menor de la cola - cantidad de elementos pares de la cola mayores a 6 - cantidad de elementos impares menores a 18\n";
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
					salirYmostrar(cola);
					break;
					default:
					cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
					break;
				}
			} while (opcion != 6);
		
		return 0;
	}
*/


/*---------------------------------------------------------------------------------------------------------------------------------------------
2.	Permitir al usuario ingresar una lista enlazada de máximo 10 (Numel) elementos y al finalizar
	el programa determina mostrando en pantalla: (20 Puntos)
	a.	Validación de cantidad de elementos. (5 Puntos)
	b.	El promedio de los elementos de la lista enlazada. (10 Puntos)
	c.	Cantidad de veces que se trató de guardar un valor en la lista enlazada cuando esta ya estaba llena. (5 Puntos)*/

/*
#include <iostream>
#include <list>

using namespace std;

list<int> lista;

	int main()
	{
		list<int>::iterator posicion_puntero;
		int dato_insertar, dato_quitar, opcion_menu = 1, opcion_agregar, opcion_quitar, opcion_mostrar, conteo_de_veces = 0, suma = 0, promedio = 0;
		do
		{
			cout << endl<< "Menu de opciones, digite un numero para seleccionar" << endl;
			cout << "1- Agregar un elemento a la lista(Hasta 10 elementos)" << endl;
			cout << "2- Quitar un elemento de la lista" << endl;
			cout << "3- Salir y mostrar: El promedio de los elementos de la lista enlazada - Cantidad de veces que se trató de guardar un valor en la lista mientras estaba llena" << endl;
			cout << "Elija una opcion: ";
			cin >> opcion_menu;
			switch (opcion_menu)
			{
				case 1:
					if (lista.size() < 10)
					{
						cin >> opcion_agregar;
						if (opcion_agregar == 1 || opcion_agregar == 2)
						{
							cout << "Inserte un valor a agregar en la lista: ";
							cin >> dato_insertar;
						if (opcion_agregar == 1)
						{
							lista.push_front(dato_insertar);
						}
						else
						{
							lista.push_back(dato_insertar);
						}
							cout << "Valor agregado correctamente a la lista" << endl;
						}
						if (opcion_agregar != 1 && opcion_agregar != 2)
						{
							cout << "No se pudo agregar ningun elemento a la lista, opcion incorrecta" << endl;
						}
					}
					else
					{
						cout<<"la lista se encuentra llena, no se pueden agregar más elementos"<<endl;
						conteo_de_veces += 1;
					}
				break;
					cout << "Desea quitar un elemento del: 1- Principio, 2- Final, 3- Elegir, 4 Quitar todos los Duplicados. Elija una opcion: ";
					cin >> opcion_quitar;
					if (opcion_quitar == 1 || opcion_quitar == 2 || opcion_quitar == 3 || opcion_quitar == 4)
					{
						if (opcion_quitar == 1)
						{
							lista.pop_front();
							cout << "Valor quitado correctamente de la lista" << endl;
						}
						if (opcion_quitar == 2)
						{
							lista.pop_back();
							cout << "Valor quitado correctamente de la lista" << endl;
						}
						if (opcion_quitar == 3)
						{
							cout << "Inserte un valor a quitar de la lista: ";
							cin >> dato_quitar;
						lista.remove(dato_quitar);
						}
						if (opcion_quitar == 4)
						{
							lista.unique();
							cout << "Se han quitado todos los elementos duplicados adyacentes de la lista" << endl;
						}
					}
						if (opcion_quitar != 1 && opcion_quitar != 2 && opcion_quitar != 3 && opcion_quitar != 4)
						{
							cout << "No se pudo quitar ningun elemento de la lista, opcion incorrecta" << endl;
						}
						break;
				case 3:
					suma = 0, promedio = 0;
					posicion_puntero = lista.begin(); 
					while (posicion_puntero != lista.end()) { 
						suma += *posicion_puntero;
						posicion_puntero++; 
					}
					promedio = suma / lista.size();
					
					cout<<"El promedio de los elementos es de: "<<promedio<<endl;
					cout<<"se intentó "<<conteo_de_veces<<" veces mientras la lista estaba llena"<<endl;
				default:
					cout << "Opcion invalida" << endl;
					break;
			}
		} while (opcion_menu != 3);
		return 0;
	}

*/



