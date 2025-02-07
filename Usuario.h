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
        int usuarioExistente;
        Usuario();
        void setNombre();
        void setCorreo();
        void setKilometros();
        int getUsuarioExist();
        string getNombre();
        string getCorreo();
        int getKilometros();
        virtual ~Usuario();

};

#endif