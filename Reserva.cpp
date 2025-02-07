#include "Reserva.h"
#include "Usuario.h"
#include "Vuelos.h"
#include <iostream>
#include <string>

using namespace std;

Reserva::Reserva()
{
    opcion = 0;
    descuento = 0;
    cancel = 0;
}

void Reserva::bienvenida()
{
    cout << "Bienvenido a Choreflights" << endl;
    cout << "Qué desea realizar?" << endl;
    cout << "<1> Crear un usuario" << endl;
    cout << "<2> Ver la lista de vuelos" << endl;
    cout << "<3> Ver su reserva" << endl;
    cout << "<4> Cancelar reserva" << endl;
    cout << "<5> Salir" << endl;
    cin >> opcion;
}

int Reserva::getOpcion()
{
    return opcion;
}

void Reserva::proceso1()
{
    if (opcion == 1)
    {
        Usuario U1;
        U1.setNombre();
        U1.setCorreo();
        U1.setKilometros();
        cout << "Usuario creado exitosamente" << endl;
    }
    if (opcion == 2)
    {
        Vuelos V1;
        V1.selectVuelo();
        V1.imprimeInfoVuelo();
        cout << "Vuelo seleccionado exitosamente" << endl;
    }
}

void Reserva::aplicaDescuento()
{
    Usuario U1;
    descuento = U1.getKilometros()-(U1.getKilometros()*0.40);
}

float Reserva::getDescuento()
{
    return descuento;
}

void Reserva::proceso2()
{
    if (opcion == 4)
    {
        Vuelos V1;
        cout << "Su vuelo es el siguiente: " << endl;
        V1.imprimeInfoVuelo();
        cout << "Desea cancelarlo? (1 Si, 0 No)" << endl;
        cin >> cancel;

        if (cancel == 1){
        V1.getVuelo() = 0;
        }
        else {

        }
    }
}

void Reserva::imprimeDatos()
{

}

void Reserva::despedida()
{

}

Reserva::~Reserva()
{

}