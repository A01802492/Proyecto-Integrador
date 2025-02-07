#include <iostream>
#include "Vuelos.h"

using namespace std;

Vuelos::Vuelos()
{
    vuelo = 0;
}

void Vuelos::selectVuelo()
{
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
    cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
    cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
    cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
    cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
}

int Vuelos::getVuelo()
{
    return vuelo;
}

void Vuelos::imprimeInfoVuelo()
{
    while (vuelo > 0 && vuelo < 6){
    if (vuelo == 1)
    {
        cout << "El vuelo que seleccionó es: " << endl;
        cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
        cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        break;
    }
    if (vuelo == 2)
    {
        cout << "El vuelo que seleccionó es: " << endl;
        cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
        cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        break;
    }
    if (vuelo == 3)
    {
        cout << "El vuelo que seleccionó es: " << endl;
        cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
        cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        break;
    }
    if (vuelo == 4)
    {
        cout << "El vuelo que seleccionó es: " << endl;
        cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
        cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        break;
    }
    if (vuelo == 5)
    {
        cout << "El vuelo que seleccionó es: " << endl;
        cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
        cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        break;
    }
    else
    {
        cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
    }
  }
}

Vuelos::~Vuelos()
{

}