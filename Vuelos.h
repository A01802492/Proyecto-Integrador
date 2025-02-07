#ifndef VUELOS_H
#define VUELOS_H

class Vuelos
{
    private:
        int vuelo;
    public:
        Vuelos();
        void selectVuelo();
        int getVuelo();
        void imprimeInfoVuelo();

        virtual ~Vuelos();
};

#endif