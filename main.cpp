#include "Usuario.h"
#include "Vuelos.h"
#include "Reserva.h"
#include <iostream>

using namespace std;

int main()
{
    Reserva R1;

    R1.bienvenida();
    R1.proceso1();
    R1.bienvenida();
    R1.proceso1();
    R1.aplicaDescuento();
    R1.bienvenida();

}