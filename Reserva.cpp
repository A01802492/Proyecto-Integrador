#include "Reserva.h"
#include "Usuario.h"
#include "Vuelos.h"
#include <iostream>
#include <string>
    Vuelos V1;
    Usuario U1;

using namespace std;

Reserva::Reserva()
{
    opcion = 0;
    descuento1 = 0;
    descuento2 = 0;
    descuento3 = 0;
    descuento4 = 0;
    descuento5 = 0;
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
        U1.setNombre();
        U1.setCorreo();
        U1.setKilometros();
        cout << "Usuario creado exitosamente" << endl;
    }
    if (opcion == 2)
    {
        V1.selectVuelo();
        V1.imprimeInfoVuelo();
        if (V1.vuelo < 1 || V1.vuelo > 5){
        
        }
        else{
            cout << "Vuelo seleccionado exitosamente" << endl;
        }
        
    }

    if (opcion == 3)
    {
        V1.imprimeInfoVuelo();
    }

    if (opcion == 4)
    {
        V1.imprimeInfoVuelo();
        cout << "Desea cancelarlo? (1 Si, 0 No)" << endl;
        cin >> cancel;

        if (cancel == 1){
        V1.vuelo = 0;
        }
        else {

        }
    }
}

void Reserva::aplicaDescuento()
{
    if (U1.getKilometros() > 50000){
    descuento1 = 1879-(1879*0.40);
    descuento2 = 22399-(22399*0.40);
    descuento3 = 3272-(3272*0.40);
    descuento4 = 7878-(7878*0.40);
    descuento5 = 4563-(4563*0.40);
    }
    else{
        descuento1 = 1879;
        descuento2 = 22399;
        descuento3 = 3272;
        descuento4 = 7878;
        descuento5 = 4563;
    }
}

float Reserva::getDescuento()
{
    return descuento1;
    return descuento2;
    return descuento3;
    return descuento4;
    return descuento5;
}

void Reserva::imprimeDatos()
{
    cout << "Sus datos son: " << endl;
    cout << "Usuario: " << U1.getNombre() << " Correo: " << U1.getCorreo() << endl;
    V1.imprimeInfoVuelo();
    cout << "Y en vista de que aplica para nuestro descuento o no, ";
    if (V1.vuelo == 1){
        cout << "su total con descuento aplicado sería de: $" << descuento1 << endl;
    }
    if (V1.vuelo == 2){
        cout << "su total con descuento aplicado sería de: $" << descuento2 << endl;
    }
    if (V1.vuelo == 3){
        cout << "su total con descuento aplicado sería de: $" << descuento3 << endl;
    }
    if (V1.vuelo == 4){
        cout << "su total con descuento aplicado sería de: $" << descuento4 << endl;
    }
    if (V1.vuelo == 5){
        cout << "su total con descuento aplicado sería de: $" << descuento5 << endl;
    }
}

void Reserva::despedida()
{
    cout << "Gracias por elegir Choreflights" << endl;
}

Reserva::~Reserva()
{

}