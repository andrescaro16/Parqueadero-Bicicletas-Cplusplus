#pragma once

#include <string>
#include <iostream>

#include "dueno.h"

using namespace std;

class Bici{
    public:
        Bici(){}
        Bici(Dueno propietario, string color, string marca, string serial);
        ~Bici();

        string mostrarNombrePropietario();
        string mostrarEmailPropietario();
        string mostrarDireccionPropietario();
        int mostrarEdadPropietario();
        long int mostrarTelefonoPropietario();
        string mostrarColor();
        string mostrarMarca();
        string mostrarSerial();

        void setPropietario(Dueno propietario);
        void setColor(string color);
        void setMarca(string marca);
        void setSerial(string serial);

    private:
        Dueno propietario;
        string color;
        string marca;
        string serial;
};