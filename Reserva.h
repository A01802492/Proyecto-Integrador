#ifndef RESERVA_H
#define RESERVA_H
#include "Usuario.h"
#include "Vuelos.h"

class Reserva
{
    private:
        int opcion;
        float descuento;
        int cancel;

    public:
    Reserva();
    void bienvenida();
    int getOpcion();
    void proceso1();
    void proceso2();
    void aplicaDescuento();
    float getDescuento();
    void imprimeDatos();
    void despedida();


    virtual ~Reserva();

};


#endif