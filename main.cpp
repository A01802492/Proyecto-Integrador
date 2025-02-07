#include "Usuario.h"
#include "Vuelos.h"
#include "Reserva.h"
#include <iostream>

using namespace std;

int main()
{
    Reserva R1;

    R1.bienvenida();
    while (R1.opcion > 0 && R1.opcion < 5){
    R1.proceso1();
    R1.bienvenida();
    }
    R1.setkilometrosFinales();
    R1.aplicaDescuento();
    R1.imprimeDatos();
    R1.despedida();
    return 0;
}