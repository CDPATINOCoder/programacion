//#<>||

#include <iostream>
#include <stdlib.h>
#include <fstream> //Libreria para usar archivos o ficheros
#include <queue> //Libreria para usar la estructura de datos cola
#include <stack> //Libreria para usar la estructura de datos pila
#include <list> //Libreria para usar la estructura de datos lista

using namespace std;

void crear_archivo(); //Metodo para crear los archivos
void llamar_datos_archivo(); //Metodo para llamar los datos del archivo y cargar en pantalla
void agregar_datos_archivo(); //Metodo para agregar datos a un archivo ya creado
void unificar_archivos_cola(); //Metodo para unificar archivos en una estructura de datos de tipo cola
void unificar_archivos_pila(); //Metodo para unificar archivos en una estructura de datos de tipo pila
void unificar_archivos_lista(); //Metodo para unificar archivos en una estructura de datos de tipo lista
void mostrar_lista(const list<string>& archivos); //Metodo para mostrar la lista de archivos
void mostrar_lista_inversa(const list<string>& archivos); //Metodo para mostrar la lista de archivos en orden inverso

int main() {
  string opcion = "1";
  while (opcion != "8") {
    cout<<endl<<"Menu de opciones, digite un numero para seleccionar"<<endl;
    cout<<"1- Crear archivo"<<endl;
    cout<<"2- Mostrar datos del archivo en pantalla"<<endl;
    cout<<"3- Agregar datos al archivo"<<endl;
    cout<<"4- Unificar archivos en una cola"<<endl;
    cout<<"5- Unificar archivos en una pila"<<endl;
    cout<<"6- Unificar archivos en una lista"<<endl;
    cout<<"7- Limpiar pantalla"<<endl;
    cout<<"8- Salir"<<endl;
    cout<<"Elija una opcion: ";
    getline(cin, opcion);
    if (opcion == "1") {
      crear_archivo();
    }
    if (opcion == "2") {
      llamar_datos_archivo();
    }
    if (opcion == "3") {
      agregar_datos_archivo();
    }
    if (opcion == "4") {
      unificar_archivos_cola();
    }
    if (opcion == "5") {
      unificar_archivos_pila();
    }
    if(opcion == "6") {
      unificar_archivos_lista();
    }
    if (opcion == "7") {
      system("cls");
    }
    if (opcion == "8") {
      return 0;
    }
  }
  return 0;
}

int num_archivos = 0;

void crear_archivo() {
  /* c:\\carpeta1\\carpeta2\\nombre_archivo.extension, para agregar una direccion al archivo */
  ofstream archivo; //Creamos una variable de tipo ofstream, out file, archivo de salida
  string nombre_archivo, datos_archivo; //Creamos 2 variables, uno para el nombre del archivo y otro para los datos que enviamos a ese archivo
  //cin.ignore(); //Limpiamos el buffer de entrada de memoria, se utiliza en conjunto con el cin normal
  cout<<"Nombre del archivo: ";
  getline(cin, nombre_archivo); //Ingresamos el nombre del archivo
  nombre_archivo = nombre_archivo + ".txt"; //Agregamos la extensión del archivo
  archivo.open(nombre_archivo.c_str(), ios::out); //Abrimos el archivo en formato out (salida), ya que vamos a generar el archivo. Explicacion de c_str() = La función open de los ficheros necesita que la ruta del fichero este en formato const char*, por lo que la función c_str() extrae del string la ruta pero con formato const char*
  if (archivo.fail()) { //Verificamos que al crear el archivo no se genere ningun error (ruta invalida, falta de espacio, formato incorrecto, etc)
    cout<<"Error al crear el archivo"<<endl;
    main(); //Llamamos al metodo principal para reiniciar el programa
  }
  cout<<"Texto del archivo: ";
  getline(cin, datos_archivo); //Agregamos el texto que deseamos insertar en el archivo a generar
  archivo<<datos_archivo; //Enviamos el texto al archivo generado
  archivo.close(); //Cerramos el archivo y liberamos espacio de memoria
  
  num_archivos++; // Incrementamos el contador de archivos creados
}

void llamar_datos_archivo() {
  /* c:\\carpeta1\\carpeta2\\nombre_archivo.txt */
  ifstream archivo; //Creamos una variable de tipo ifstream, in file, archivo de entrada
  string nombre_archivo, datos_archivo; //Creamos 2 variables, uno para el nombre del archivo y otro para los datos que recuperamos de ese archivo
  bool error_buscar = false; //Creamos una variable para verificar si el archivo buscado fue encontrado
  //cin.ignore(); //Limpiamos el buffer de entrada de memoria, se utiliza en conjunto con el cin normal
  cout<<"Nombre del archivo: ";
  getline(cin, nombre_archivo); //Cargamos el nombre del archivo del cual queremos recuperar los datos
  nombre_archivo = nombre_archivo + ".txt"; //Agregamos la extensión del archivo
  archivo.open(nombre_archivo.c_str(), ios::in); //Abrimos el archivo en formato in (entrada), ya que vamos a llamar el archivo
  if (archivo.fail()) { //Verificamos que al buscar el archivo no se genere ningun error (ruta invalida, falta de espacio, formato incorrecto, archivo no encontrado, etc)
    cout<<"Error, no se ha encontrado el archivo"<<endl;
    error_buscar = true; //El archivo no ha sido encontrado
  }
  if (error_buscar != true) { //Preguntamos si el archivo ha sido encontrado, si fue encontrado, lo recorre hasta el final, si no lo ha encontrado, lo cierra sin hacer ninguna operacion
    while (!archivo.eof()) { //Recorremos el archivo hasta el final
      getline(archivo, datos_archivo); //Llamamos al texto que deseamos mostrar en pantalla, usamos getline ya que son datos de tipo string
      cout<<datos_archivo<<endl; //Mostramos los datos en pantalla
    }
  }
  archivo.close(); //Cerramos el archivo y liberamos espacio de memoria
}

void agregar_datos_archivo() {
  ofstream archivo; //Creamos una variable de tipo ofstream, out file, archivo de salida
  string nombre_archivo, datos_agregar_archivo; //Creamos 2 variables, uno para el nombre del archivo y otro para los datos que vamos a agregar al archivo
  //cin.ignore(); //Limpiamos el buffer de entrada de memoria, se utiliza en conjunto con el cin normal
  cout<<"Nombre del archivo: ";
  getline(cin, nombre_archivo); //Ingresamos el nombre del archivo
  nombre_archivo = nombre_archivo + ".txt"; //Agregamos la extensión del archivo
  archivo.open(nombre_archivo.c_str(), ios::app); //Abrimos el archivo en formato append (agregar), ya que vamos a agregar datos al archivo
  if (archivo.fail()) { //Verificamos que al crear el archivo no se genere ningun error (ruta invalida, falta de espacio, formato incorrecto, archivo abierto, etc)
    cout<<"Error al crear el archivo o al intentar agregar datos"<<endl;
    main(); //Llamamos al metodo principal para reiniciar el programa
  }
  cout<<"Datos a agregar al archivo: ";
  getline(cin, datos_agregar_archivo); //Cargamos el texto que deseamos agregar al archivo
  archivo<<endl<<datos_agregar_archivo; //Enviamos el texto al archivo, como estamos agregando texto, si el archivo no existe, sera creado
  archivo.close(); //Cerramos el archivo y liberamos espacio de memoria
}

void unificar_archivos_cola() {
  if (num_archivos < 2) {
    cout << "Debe crear al menos dos archivos antes de unificarlos." << endl;
    return;
  }
  
  queue<string> cola_archivos; //Creamos una cola para almacenar los nombres de los archivos a unificar
  string nombre_archivo, nombre_archivo_unificado, datos_archivo;
  
  for (int i = 0; i < num_archivos; i++) {
    cout << "Nombre del archivo " << i+1 << ": ";
    getline(cin, nombre_archivo);
    nombre_archivo = nombre_archivo + ".txt"; //Agregamos la extensión del archivo
    cola_archivos.push(nombre_archivo);
  }
  
  cout << "Nombre del archivo unificado: ";
  getline(cin, nombre_archivo_unificado);
  nombre_archivo_unificado = nombre_archivo_unificado + ".txt"; //Agregamos la extensión del archivo
  
  ofstream archivo_unificado(nombre_archivo_unificado.c_str(), ios::out); //Abrimos el archivo unificado en formato out (salida)
  if (archivo_unificado.fail()) { //Verificamos que al crear el archivo unificado no se genere ningun error (ruta invalida, falta de espacio, formato incorrecto, etc)
    cout << "Error al crear el archivo unificado" << endl;
    main(); //Llamamos al metodo principal para reiniciar el programa
  }
  
  while (!cola_archivos.empty()) {
    ifstream archivo(cola_archivos.front().c_str(), ios::in); //Abrimos el archivo de la cola en formato in (entrada)
    if (archivo.fail()) { //Verificamos que al abrir el archivo no se genere ningun error (ruta invalida, falta de espacio, formato incorrecto, archivo no encontrado, etc)
      cout << "Error al abrir el archivo: " << cola_archivos.front() << endl;
    } else {
      while (!archivo.eof()) { //Recorremos el archivo hasta el final
        getline(archivo, datos_archivo); //Llamamos al texto que deseamos agregar al archivo unificado, usamos getline ya que son datos de tipo string
        archivo_unificado << datos_archivo << endl; //Agregamos los datos al archivo unificado
      }
      archivo.close(); //Cerramos el archivo
    }
    cola_archivos.pop(); //Eliminamos el archivo de la cola
  }
  
  archivo_unificado.close(); //Cerramos el archivo unificado
}

void unificar_archivos_pila() {
  if (num_archivos < 2) {
    cout << "Debe crear al menos dos archivos antes de unificarlos." << endl;
    return;
  }
  
  stack<string> pila_archivos; // Creamos una pila para almacenar los nombres de los archivos a unificar
  string nombre_archivo, nombre_archivo_unificado, datos_archivo;
  
  for (int i = 0; i < num_archivos; i++) {
    cout << "Nombre del archivo " << i+1 << ": ";
    getline(cin, nombre_archivo);
    nombre_archivo = nombre_archivo + ".txt"; // Agregamos la extensión del archivo
    pila_archivos.push(nombre_archivo);
  }
  
  cout << "Nombre del archivo unificado: ";
  getline(cin, nombre_archivo_unificado);
  nombre_archivo_unificado = nombre_archivo_unificado + ".txt"; // Agregamos la extensión del archivo
  
  ofstream archivo_unificado(nombre_archivo_unificado.c_str(), ios::out); // Abrimos el archivo unificado en formato out (salida)
  if (archivo_unificado.fail()) { // Verificamos que al crear el archivo unificado no se genere ningún error (ruta inválida, falta de espacio, formato incorrecto, etc)
    cout << "Error al crear el archivo unificado" << endl;
    main(); // Llamamos al método principal para reiniciar el programa
  }
  
  while (!pila_archivos.empty()) {
    ifstream archivo(pila_archivos.top().c_str(), ios::in); // Abrimos el archivo de la pila en formato in (entrada)
    if (archivo.fail()) { // Verificamos que al abrir el archivo no se genere ningún error (ruta inválida, falta de espacio, formato incorrecto, archivo no encontrado, etc)
      cout << "Error al abrir el archivo: " << pila_archivos.top() << endl;
    } else {
      while (!archivo.eof()) { // Recorremos el archivo hasta el final
        getline(archivo, datos_archivo); // Llamamos al texto que deseamos agregar al archivo unificado, usamos getline ya que son datos de tipo string
        archivo_unificado << datos_archivo << endl; // Agregamos los datos al archivo unificado
      }
      archivo.close(); // Cerramos el archivo
    }
    pila_archivos.pop(); // Eliminamos el archivo de la pila
  }
  
  archivo_unificado.close(); // Cerramos el archivo unificado
}

void unificar_archivos_lista() {
  if (num_archivos < 2) {
    cout << "Debe crear al menos dos archivos antes de unificarlos." << endl;
    return;
  }
  
  list<string> lista_archivos; // Creamos una lista enlazada para almacenar los nombres de los archivos a unificar
  string nombre_archivo, nombre_archivo_unificado, datos_archivo;
  
  for (int i = 0; i < num_archivos; i++) {
    cout << "Nombre del archivo " << i+1 << ": ";
    getline(cin, nombre_archivo);
    nombre_archivo = nombre_archivo + ".txt"; // Agregamos la extensión del archivo
    lista_archivos.push_back(nombre_archivo);
  }
  
  cout << "Nombre del archivo unificado: ";
  getline(cin, nombre_archivo_unificado);
  nombre_archivo_unificado = nombre_archivo_unificado + ".txt"; // Agregamos la extensión del archivo
  
  ofstream archivo_unificado(nombre_archivo_unificado.c_str(), ios::out); // Abrimos el archivo unificado en formato out (salida)
  if (archivo_unificado.fail()) { // Verificamos que al crear el archivo unificado no se genere ningún error (ruta inválida, falta de espacio, formato incorrecto, etc)
    cout << "Error al crear el archivo unificado" << endl;
    main(); // Llamamos al método principal para reiniciar el programa
  }
  
  string subopcion = "1";
  while (subopcion != "4") {
    cout << endl << "Submenu de opciones para la lista de archivos unificados" << endl;
    cout << "1- Mostrar lista de archivos" << endl;
    cout << "2- Mostrar lista de archivos en orden inverso" << endl;
    cout << "3- Limpiar lista de archivos" << endl;
    cout << "4- Volver al menu principal" << endl;
    cout << "Elija una opcion: ";
    getline(cin, subopcion);
    
    if (subopcion == "1") {
      mostrar_lista(lista_archivos);
    }
    if (subopcion == "2") {
      mostrar_lista_inversa(lista_archivos);
    }
    if (subopcion == "3") {
      lista_archivos.clear();
      cout << "La lista de archivos ha sido limpiada." << endl;
    }
  }
  
  while (!lista_archivos.empty()) {
    ifstream archivo(lista_archivos.front().c_str(), ios::in); // Abrimos el archivo actual en formato in (entrada)
    if (archivo.fail()) { // Verificamos que al abrir el archivo no se genere ningún error (ruta inválida, falta de espacio, formato incorrecto, archivo no encontrado, etc)
      cout << "Error al abrir el archivo: " << lista_archivos.front() << endl;
    } else {
      while (!archivo.eof()) { // Recorremos el archivo hasta el final
        getline(archivo, datos_archivo); // Llamamos al texto que deseamos agregar al archivo unificado, usamos getline ya que son datos de tipo string
        archivo_unificado << datos_archivo << endl; // Agregamos los datos al archivo unificado
      }
      archivo.close(); // Cerramos el archivo actual
    }
    lista_archivos.pop_front(); // Eliminamos el archivo de la lista
  }
  
  archivo_unificado.close(); // Cerramos el archivo unificado
}

void mostrar_lista(const list<string>& archivos) {
  cout << "Lista de archivos:" << endl;
  for (const auto& archivo : archivos) {
    cout << archivo << endl;
  }
}

void mostrar_lista_inversa(const list<string>& archivos) {
  cout << "Lista de archivos en orden inverso:" << endl;
  for (auto it = archivos.rbegin(); it != archivos.rend(); ++it) {
    cout << *it << endl;
  }
}