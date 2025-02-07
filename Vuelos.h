#ifndef VUELOS_H
#define VUELOS_H

class Vuelos
{
    private:
        
    public:
        int fecha;
        int vuelo;
        Vuelos();
        void selectFecha();
        int Fecha();
        void selectVuelo();
        int getVuelo();
        void imprimeInfoVuelo();

        virtual ~Vuelos();
};

#endif