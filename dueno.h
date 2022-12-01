#pragma once

#include <iostream>
#include <string>

using namespace std;

class Dueno{
    public:
        Dueno(){}
        Dueno(string nombre, string email, string direccion, int edad, long int telefono);
        ~Dueno();

        string mostrarNombre();
        string mostrarEmail();
        string mostrarDireccion();
        int mostrarEdad();
        long int mostrarTelefono();

        void setNombre(string nombre);
        void setEmail(string email);
        void setDireccion(string direccion);
        void setEdad(int edad);
        void setTelefono(long int telefono);

    private:
        string nombre;
        string email;
        string direccion;
        int edad;
        long int telefono;
};