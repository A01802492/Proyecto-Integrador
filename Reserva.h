#ifndef RESERVA_H
#define RESERVA_H
#include "Usuario.h"
#include "Vuelos.h"

class Reserva
{
    private:
        float descuento;
        int cancel;

    public:
    int opcion;
    Reserva();
    void bienvenida();
    int getOpcion();
    void proceso1();
    void aplicaDescuento();
    float getDescuento();
    void imprimeDatos();
    void despedida();


    virtual ~Reserva();

};


#endif