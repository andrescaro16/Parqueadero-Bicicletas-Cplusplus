#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <chrono>
#include <sys/time.h>
#include <ctime>
#include <cstring>
#include "generador.cpp"

#include "dueno.h"
#include "bici.h"

using namespace std;


//Creación de la estructura Nodo
struct Nodo{                    
    Bici dato;
    Nodo *siguiente;
};



//Lista de bicicletas
Nodo *lista  = NULL;            

//Contiene los colores de las bicicletas
vector<pair<int, string>> colores;

//Contiene las hora de entrada
vector<string> horasDeLlegada;



//Prototipos de funciones
void menu();
Bici nuevaBici();
Bici nuevaAleatoria();
void insertar(Nodo *&lista, Bici bici);
string espaciar(int tamanio, int valor);
void mostrar(Nodo *lista);
int contar(Nodo *lista);
void buscar(Nodo *lista, string name);
void eliminarBici(Nodo *&lista, string name);
void vaciar(Nodo *&lista);
bool miComparacion(pair<int, string> a, pair<int, string> b);



//Método principal
int main(){
    
    menu();

    return 0;
}




//DECLARACIÓN DE LAS FUNCIONES

//Bienvenida e interfaz de inicio
void menu(){
    int opcion;
    int dato;
    char name[30];

    do{
        cout << "\nBIENVENIDO AL PARQUEADERO DE BICICLETAS MR.JULIAN\n";
        cout << "¿Qué deseas hacer?:\n";
        cout << "1. Registrar ingreso de bicileta\n";                   //Agregar bicicleta a la lista
        cout << "2. Registrar salida de bicicleta\n";                   //Retirar bicicleta de la lista
        cout << "3. Ver registro de biciletas\n";                       //Ver los datos de la lista de bicicletas
        cout << "4. Número de bicicletas en el parqueadero\n";           //Contar las bicicletas de la lista
        cout << "5. Buscar bicicleta\n";                                //Buscar una bicicleta por nombre del propietario
        cout << "6. Vaciar el parqueadero\n";                           //Dejar el parqueadero vacío
        cout << "7. Salir del sistema\n";                               
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion){

            case 1:
                int opcion2;
                cout << "\n¿Cómo deseas realizar el registro?:\n1. Aleatoriamente\n2. Manualmente\nOpción: ";
                cin >> opcion2;
                
                int ingresos;
                cout << "\n¿Cuantos bicicletas deseas ingresar?: ";
                cin >> ingresos;

                for (int i = 0; i < ingresos; i++){
                        if ((i != 0) && (opcion2 == 2)){
                            cout << "\nPresiona ENTER para realizar el siguiente registro...";
                        }
                        if (opcion2 == 1){ //Aleatoriamente
                            insertar(lista, nuevaAleatoria());
                        }else if (opcion2 == 2){ //Manualmente
                            insertar(lista, nuevaBici());
                        }
                    }
                    cout << "\n";
                
                break;
            

            case 2:
                if (lista != NULL){
                    cout << "\n\nNombre del propietario: ";
                    cin.ignore();
                    cin.getline(name, 30);
                    eliminarBici(lista, name);
                    cout << "\n";
                }else{
                    cout << "\n\nPARQUEADERO VACÍO\n" << endl;
                }
                break;


            case 3:
                if (lista != NULL){
                    mostrar(lista);
                    cout << "\n";
                }else{
                    cout << "\n\nPARQUEADERO VACÍO\n" << endl;
                }
                break;


            case 4:
                cout << "\nEl parqueadero tiene " << contar(lista) << " bicicletas\n";
                cout << "\n";
                break;


            case 5:
                if (lista != NULL){                         //Buscamos siempre y cuando la lista no esté vacía
                    cout << "\n\nNombre del propietario: "; //Solo permitir criterio de busqueda de propietario por seguridad
                    cin.ignore();
                    cin.getline(name, 30);
                    buscar(lista, name);
                    cout << "\n";
                }else{
                    cout << "\n\nPARQUEADERO VACÍO\n" << endl;
                }
                break;


            case 6:
                if (lista != NULL){
                    int opc;
                    cout << "\n¿Estás seguro de dejar el parqueadero vacío?\n1. Sí, continuar\n2. No, regresar al menú\nOpción: ";
                    cin >> opc;
                    if (opc == 1){
                        vaciar(lista);
                        cout << "\n";
                    }
                }else{
                    cout << "\n\nEL PARQUEADERO YA ESTÁ VACÍO\n" << endl;
                }
                break;
        }
        
    } while (opcion != 7);
    
}



//Convierte la hora en un string
string timeToString(chrono::system_clock::time_point &t){
    time_t time = chrono::system_clock::to_time_t(t);
    string time_str = ctime(&time);
    time_str.resize(time_str.size() - 1);
    return time_str;
}



//Crea un objeto Bici
Bici nuevaBici(){
    char propietario[30];
    char email[30];
    char direccion[30];
    char color[15];
    char marca[15];
    char serial[15];
    int edad;
    long int telefono;

    cin.ignore();
    cout << "\n\n\nREGISTRO ENTRADA DE BICICLETAS\n\n";
    cout << "DATOS PROPIETARIO:\n";
    cout << "Nombre del propietario: ";
    cin.getline(propietario, 30);
    cout << "Correo electrónico: ";
    cin.getline(email, 30);
    cout << "Dirección de residencia: ";
    cin.getline(direccion, 30);
    cout << "Edad: ";
    cin >> edad;
    cout << "Número de celular: ";
    cin >> telefono;

    cin.ignore();
    cout << "\nDATOS BICICLETA:\n";
    cout << "Color: ";
    cin.getline(color, 15);
    cout << "Marca: ";
    cin.getline(marca, 15);
    cout << "Serial: ";
    cin.getline(serial, 15);

    Dueno *objDueno = new Dueno(propietario, email, direccion, edad, telefono);
    Bici *objBici = new Bici(*objDueno, color, marca, serial);

    
    //PROCESO DE COLORES
    pair <int, string> individual;
    individual.first = contar(lista);
    individual.second = color;
    
    //Ciclo para pasar las mayúsculas a minúsculas
    for (int i = 0; i < individual.second.size(); i++){ 
        if(individual.second[i] < 92){
            individual.second[i] += 32;
        }
    }
    colores.push_back(individual);

    sort(colores.begin(), colores.end(), miComparacion);

    
    return *objBici;
    
}


//Crear bici aleatoria
Bici nuevaAleatoria(){
    char propietario[30];
    char email[30];
    char direccion[30];
    char color[15];
    char marca[15];
    char serial[15];
    int edad;
    long int telefono;

    strcpy(propietario, (newPropietario()).c_str());
    strcpy(email, (newEmail(propietario)).c_str());
    strcpy(direccion, (newDireccion()).c_str());
    strcpy(color, (newColor()).c_str());
    strcpy(marca, (newMarca()).c_str());
    strcpy(serial, (to_string(numAleatorio(1000000))).c_str());
    edad = numAleatorio(99);
    telefono = numAleatorio(1410065406);

    Dueno *objDueno = new Dueno(propietario, email, direccion, edad, telefono);
    Bici *objBici = new Bici(*objDueno, color, marca, serial);

    
    //PROCESO DE COLORES
    pair <int, string> individual;
    individual.first = contar(lista);
    individual.second = color;
    
    //Ciclo para pasar las mayúsculas a minúsculas
    for (int i = 0; i < individual.second.size(); i++){ 
        if(individual.second[i] < 92){
            individual.second[i] += 32;
        }
    }
    colores.push_back(individual);

    sort(colores.begin(), colores.end(), miComparacion);

    
    return *objBici;
}



//Funcion para sortear los colores
bool miComparacion(pair<int, string> a, pair<int, string> b){
    if (a.second > b.second){
        return false;
    }else{
        return true;
    }
}



//Recibe un objeto Bici y la ingresa a la lista
void insertar(Nodo *&lista, Bici bici){
    
    Nodo* nuevo = new Nodo();                   //Crear nodo
    nuevo->dato = bici;                         //Asignar el dato(la bici) al nuevo nodo
    
    Nodo *aux = lista;
    Nodo* aux2 = NULL;
    
    int pos;
    for (int i = 0; i < colores.size(); i++){
        if (colores[i].first == contar(lista)){
            pos = i;
        }
    }

    int i = 0;
    while ((aux!=NULL) && (i < pos)){
        aux2 = aux;
        aux = aux->siguiente;
        i++;
    }

    if (lista == aux){
        lista = nuevo;
    }else{
        aux2->siguiente = nuevo;
    }
    nuevo->siguiente = aux;
    
    //Hora de entrada
    auto horaEntrada = chrono::system_clock::now();
    string hora = timeToString(horaEntrada);
    horasDeLlegada.push_back(hora);

    cout << "\nBicicleta de " + bici.mostrarNombrePropietario()+ " ingresada correctamente al parqueadero el " << hora << endl;
}



//Deja los espacios necesarios para mejorar la impresión de los datos de la lista
string espaciar(int tamanio, int valor){
    int espacio = 0;
    string texto = "";
    espacio = valor - tamanio;
    for (int i = 0; i < espacio; i++){
        texto = texto + " ";
    }
    return texto;
}



//Imprime los datos de la lista
void mostrar(Nodo *lista){
    Nodo* actual = new Nodo();
    actual = lista;

    cout << "\n\n\nREGISTRO DE BICICLETAS:\n";

    int posHora = -1;
    while (actual !=NULL){
        string auxColor = actual->dato.mostrarColor();
        string auxMarca = actual->dato.mostrarMarca();
        string auxSerial = actual->dato.mostrarSerial();
        string auxNombre = actual->dato.mostrarNombrePropietario();
        string auxEmail = actual->dato.mostrarEmailPropietario();
        string auxDireccion = actual->dato.mostrarDireccionPropietario();
        int auxEdad = actual->dato.mostrarEdadPropietario();
        long int auxTelefono = actual->dato.mostrarTelefonoPropietario();
        
        posHora++;
        int auxHora = colores[posHora].first;

        cout << "\n\nBICICLETA                               PROPIETARIO" << espaciar(11, 45) << "FECHA DE INGRESO: " << endl;
        cout << "Color: " << auxColor <<   espaciar(auxColor.size() + 7, 40) << "Nombre: " << auxNombre << espaciar(auxNombre.size()+ 8, 45) << horasDeLlegada[auxHora] << endl;
        cout << "Marca: " << auxMarca <<   espaciar(auxMarca.size() + 7, 40) << "Edad: " << auxEdad << endl;
        cout << "Serial: " << auxSerial << espaciar(auxSerial.size() + 8, 40) << "Teléfono: " << auxTelefono << endl;
        cout <<                            espaciar(0, 40) << "Email: " << auxEmail << endl;
        cout <<                            espaciar(0, 40) << "Dirección: " << auxDireccion << endl;
        
        actual = actual->siguiente; 
    }
}



//Retorna el número de objetos Bici en la lista
int contar(Nodo *lista){
    int i = 0;
    Nodo* actual = new Nodo();
    actual = lista;

    while (actual !=NULL){
        i++;
        actual = actual->siguiente; 
    }
    return i;
}



//Imprime la posición de una Bici en la lista (Siempre que exista)
void buscar(Nodo *lista, string name){
    bool bandera = false;
    int posicion = 0;
    
    Nodo *actual = lista;
    string aux = actual->dato.mostrarNombrePropietario(); 

    if (aux == name){ //Si se encuentra en la primera posición
        bandera = true;
        posicion = 1;
    }
    

    while ((actual != NULL) && (aux != name)){
        if (!bandera){
            posicion++;
        }
            
        if (actual->dato.mostrarNombrePropietario() == name){
            bandera = true;
            aux = name; //Para no seguir recorriendo la lista después de hallado el elemento
        }
        actual = actual->siguiente;
    }

    if (bandera){
        cout << "\nLa bicicleta de " << name << " ha sido encontrada en la posición " << posicion << " del parqueadero\n";
    }else{
        cout << "No hay bicicletas en el parqueadero a nombre de " << name << "\n";
    }
}



//Retira un objeto Bici de la lista
void eliminarBici(Nodo *&lista, string name){
    Nodo *aux_borrar;
    Nodo *anterior = NULL;
    aux_borrar = lista;
    char nombre[30];
    strcpy(nombre, (name).c_str());

    //Recorrer la lista
    while ((aux_borrar != NULL) && (aux_borrar->dato.mostrarNombrePropietario() != name)){
        anterior = aux_borrar;
        aux_borrar = aux_borrar->siguiente;
    }

    if (aux_borrar == NULL){                //Si se recorrió toda la lista y no se encontró el elemento
        cout << "No hay bicicletas en el parqueadero a nombre de " << name << "\n";
    }else if (anterior == NULL){            //Si el elemento está en la primer posición
        lista = lista->siguiente;
        delete aux_borrar;
        cout << "\nBicicleta de " + name + " retirada correctamente del parqueadero" << endl;
    }else{                                  //Si el elemento está en cualquier otra posición
        anterior->siguiente = aux_borrar->siguiente;
        delete aux_borrar;
        cout << "\nBicicleta de " + name + " retirada correctamente del parqueadero" << endl;
    }   
}



//Retira todos los objetos Bici de la lista
void vaciar(Nodo *&lista){
    Nodo *aux = new Nodo();
    aux = lista;

    while (lista != NULL){
        lista = lista->siguiente;
        delete aux;
        aux = lista;
    }
    cout << "\nParqueadero vaciado correctamente" << endl;
}