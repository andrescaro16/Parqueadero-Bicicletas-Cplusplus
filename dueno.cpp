#include <string>
#include <iostream>

#include "dueno.h"

using namespace std;



Dueno::Dueno(string nombre, string email, string direccion, int edad, long int telefono){
    this->nombre = nombre;
    this->email = email;
    this->direccion = direccion;
    this->edad = edad;
    this->telefono = telefono;
}



Dueno::~Dueno(){}



string Dueno::mostrarNombre(){
    return this->nombre;
}



string Dueno::mostrarEmail(){
    return this->email;
}



string Dueno::mostrarDireccion(){
    return this->direccion;
}



int Dueno::mostrarEdad(){
    return this->edad;
}



long int Dueno::mostrarTelefono(){
    return this->telefono;
}



void Dueno::setNombre(string nombre){
    this->nombre = nombre;
}



void Dueno::setEmail(string email){
    this->email = email;
}



void Dueno::setDireccion(string direccion){
    this->direccion = direccion;
}



void Dueno::setEdad(int edad){
    this->edad = edad;
}



void Dueno::setTelefono(long int telefono){
    this->telefono = telefono;
}