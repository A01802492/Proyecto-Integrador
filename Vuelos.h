#ifndef VUELOS_H
#define VUELOS_H

class Vuelos
{
    private:
        
    public:
        int vuelo;
        Vuelos();
        void selectVuelo();
        int getVuelo();
        void imprimeInfoVuelo();

        virtual ~Vuelos();
};

#endif