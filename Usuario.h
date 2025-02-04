#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>
using namespace std;


class Usuario
{
    private:
        string nombre;
        string correo;
        int kilometros;

    public:
        Usuario();
        void setNombre();
        void setCorreo();
        void setKilometros();
        string getNombre();
        string getCorreo();
        int getKilometros();
        void acumKilometros();
        bool aplicarDescuento();
        virtual ~Usuario();

};

#endif