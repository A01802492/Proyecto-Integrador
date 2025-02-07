#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario()
{
    nombre = " ";
    correo = " ";
    kilometros = 0;
    usuarioExistente = 0;
}

void Usuario::setNombre()
{
    cout << "Ingresa el nombre del usuario: ";
    cin >> nombre;
}

void Usuario::setCorreo()
{
    cout << "Ingresa el correo del usuario: ";
    cin >> correo;
}

void Usuario::setKilometros()
{
    cout << "Ingresa la cantidad de kilometros ya viajados: ";
    cin >> kilometros;
    usuarioExistente = 1;
}

string Usuario::getNombre()
{
    return nombre;
}

string Usuario::getCorreo()
{
    return correo;
}

int Usuario::getKilometros()
{
    return kilometros;
}

int Usuario::getUsuarioExist()
{
    return usuarioExistente;
}

Usuario::~Usuario()
{

}



