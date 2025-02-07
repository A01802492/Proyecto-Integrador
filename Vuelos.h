#ifndef VUELOS_H
#define VUELOS_H
#include <string>

using namespace std;

class Vuelos
{
    private:
        
    public:
        int fecha;
        int vuelo;
        int pasajeros;
        string destino;
        Vuelos();
        void selectFecha();
        int Fecha();
        void setPasajeros();
        int getPasajeros();
        void selectVuelo();
        int getVuelo();
        void imprimeInfoVuelo();
        string getDestino();

        virtual ~Vuelos();
};

#endif