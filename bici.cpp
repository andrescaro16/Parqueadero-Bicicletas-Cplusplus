#include <string>
#include <iostream>

#include "bici.h"
#include "dueno.h"

using namespace std;

Bici::Bici(Dueno propietario, string color, string marca, string serial){
    this->propietario = propietario;
    this->color = color;
    this->marca = marca;
    this->serial = serial;
}



Bici::~Bici(){}



string Bici::mostrarNombrePropietario(){
    return this->propietario.mostrarNombre();
}



string Bici::mostrarEmailPropietario(){
    return this->propietario.mostrarEmail();
}



string Bici::mostrarDireccionPropietario(){
    return this->propietario.mostrarDireccion();
}



int Bici::mostrarEdadPropietario(){
    return this->propietario.mostrarEdad();
}



long int Bici::mostrarTelefonoPropietario(){
    return this->propietario.mostrarTelefono();
}



string Bici::mostrarColor(){
    return this->color;
}



string Bici::mostrarMarca(){
    return this->marca;
}



string Bici::mostrarSerial(){
    return this->serial;
}



void Bici::setPropietario(Dueno propietario){
    this->propietario = propietario;
}



void Bici::setColor(string color){
    this->color = color;
}



void Bici::setMarca(string marca){
    this->marca = marca;
}



void Bici::setSerial(string serial){
    this->serial = serial;
}