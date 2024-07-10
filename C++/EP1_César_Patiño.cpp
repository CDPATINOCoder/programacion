/*
PRIMER EXAMEN PARCIAL

Nombre y Apellido: César Patiño
C.I.: 5687358
Asignatura: Estructura de Datos (INF-188)
Carrera: Ingeniería Informática
Semestre: Tercer
Turno: Noche
Periodo: 2024.1
Profesor: Ing. William Santacruz
Grupo: 80
Fecha: 15-04-2024
Puntos Examen: 40
Puntos Procesos: 20
Total de Puntos: 60
Tipo de Examen: C

Indicadores:
1. El examen es de carácter personal, en caso de encontrarse 2 respuestas iguales, el examen de ambos será anulado llevando 0 (cero) puntos.
2. No se permite ninguna forma de comunicación entre los alumnos.
3. Leer la consigna y resolver lo solicitado, la compresión del problema y como resolverlo es parte del examen.
4. Realizar los ejercicios con el lenguaje C++ y completar los datos solicitados.
5. Una vez terminado el examen, guarda el archivo .cpp con el nombre EP1_Nombre_Apellido indicando el número de ejercicio, su enunciado y el
   código correspondiente para resolverlo debajo de cada ejercicio y súbelo en formato .cpp.
Total Examen: 40 Puntos                    Total Proceso: 20 Puntos
¡Éxitos!.

Realiza los siguientes ejercicios de algoritmia en C++ (40 Puntos)*/
/*---------------------------------------------------------------------------------------------------------------------------------------------
1.	Desarrollar un algoritmo que nos permita ingresar letras hasta que el usuario ingrese una vocal, al final mostrar en pantalla cuántas
	consonantes distintas de h o t se ingresó. (10 Puntos)*/
	/*
#include <iostream>

using namespace std;

int main()
{
	char letra;
	int contador = 0;
	do
	{
		cout<<"Ingrese una letra cualquiera (ten en cuenta que al ingresar una vocal el programa termina)"<<endl;
		cin>>letra;
		if (letra != 'h' && letra != 'H' && letra != 't' && letra != 'T')
			{
				if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U')
				{
				contador = contador + 1;
				}
			}
	}while(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U');
	cout<<"hay "<<contador<<" letras ditintas de h o t";
	return 0;
}
	*/




/*---------------------------------------------------------------------------------------------------------------------------------------------
2.	Se desea ingresar 2 números por teclado, si el primer número es menor que el segundo, mostrar en pantalla todos los números comprendidos
	entre ambos (incluir ambos números), sino, mostrar un mensaje de error en pantalla, ejemplo: Nro Uno = 5, Nro Dos = 8. Mostrar en
	pantalla: (10 Puntos)
	5
	6
	7
	8
---------------------------------------------------------------------------------------------------------------------------------------------*/
/*
#include<iostream>

using namespace std;

int main()
{
	int num1, num2, suma;
	cout<<"ingrese dos numeros"<<endl;
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	if (num1<num2)
	{
		cout<<"estos son los numeros comprendidos entre ambos:"<<endl;
		suma = num1 - 1;
		for (int i = num1 ; i <= num2 ; i++)
		{
			suma = suma + 1;
			cout<<suma<<endl;
		}
	}
	else
	{
		cout<<"Error, el primer numero ingresado es mayor o igual al segundo ingresado"<<endl;
	}
	
	return 0;
}
*/


/*---------------------------------------------------------------------------------------------------------------------------------------------
3.	Desarrollar un algoritmo que nos permita ingresar nombres de personas por teclado en un array o vector, al finalizar el algoritmo mostrar
	en pantalla cuantos hombres y mujeres fueron ingresados, además, listar todos los nombres de las personas ingresadas, ejemplo: (10 Puntos)
	Hombres: 3
	Mujeres: 2
	Juan González
	María Rojas
	Pedro Morales
	Ana Valdez
	Carlos Almada
---------------------------------------------------------------------------------------------------------------------------------------------*/
/*
	#include <iostream>
	
	using namespace std;
	
	int main()
	{
		int n, hombres, mujeres;
		cout<<"Ingrese la cantidad de personas nombres a ser ingresados: ";
		cin>>n;
		string genero, nombres[n];
		
		for (int i = 0 ; i <= n-1 ; i++)
		{
			cout<<"ingrese el nombre de la persona "<<i+1<<endl;
			cin>>nombres[i];
			cout<<"de que genero es la persona ingresada (masculino/femenino)? "<<endl;
			cin>>genero;
			if (genero == "masculino")
			{
				hombres = hombres + 1;
			}
			else if (genero == "femenino")
			{
				mujeres = mujeres + 1;
			}
		}
		cout<<" "<<endl;
		cout<<"Hombres: "<<hombres<<endl;
		cout<<"Mujeres: "<<mujeres<<endl;
		
		for (int i = 0 ; i < n ; i++)
		{
			cout<<i+1<<") "<<nombres[i]<<endl;
		}
		return 0;
	}
*/





/*---------------------------------------------------------------------------------------------------------------------------------------------
4.	Crear una pila de 10 elementos, luego volcar todo el contenido de esa pila a un vector, teniendo en cuenta que la cima de la pila debe ser
	el primer elemento del vector y así sucesivamente, luego imprimir en pantalla el vector, también imprimir la sumatoria de todos los
	elementos de la pila. (10 Puntos)
---------------------------------------------------------------------------------------------------------------------------------------------*/
/*
#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int valor = 0, vector[9];
	int suma = 0;
	stack<int>pila;
	
	cout<<"ingrese los elementos de la pila"<<endl;
	
	do 
	{
		cin>>valor;
		pila.push(valor);
		suma = suma + valor;
	}while(pila.size() < 10);	
	
	cout<<"imprimiendo vector ..."<<endl;
	
	for(int i = 0 ; i <= 9 ; i++)
	{
		vector[i] = pila.top();
		pila.pop();
		cout<<vector[i]<<endl;
	}
	
	cout<<"la suma de los elementos de la pila es : "<<suma;
		        	
	return 0;
}
*/




