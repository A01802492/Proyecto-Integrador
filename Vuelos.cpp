#include <iostream>
#include "Vuelos.h"

using namespace std;

Vuelos::Vuelos()
{
    vuelo = 0;
    fecha = 0;
}

void Vuelos::selectFecha()
{
    cout << "En qué fecha le gustaría viajar del mes de febrero? (Ingrese el número del día)";
    cin >> fecha;
}

int Vuelos::Fecha()
{
    return fecha;
}

void Vuelos::selectVuelo()
{
    if (fecha == 1){
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

    if (fecha == 2){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre      |  Precio  |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Aeroméxico    |  $2,150  |   Brasil  |  8 hrs 30 min  |  6,755  |   AM  |    180    |" << endl;
    cout << "|  2  |     Emirates    | $18,750  |    Dubái  |  15 hrs 20 min | 12,340  |   EK  |    410    |" << endl;
    cout << "|  3  |  AmericanAir    |  $5,320  |     USA   |  5 hrs 15 min  |  4,120  |   AA  |    220    |" << endl;
    cout << "|  4  |     Iberia      |  $7,890  |   España  |  11 hrs 45 min |  8,940  |   IB  |    250    |" << endl;
    cout << "|  5  |    Lufthansa    |  $9,230  |  Alemania |  13 hrs 10 min | 10,120  |   LH  |    280    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 3){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre      |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |      Delta      |  $3,450  |     Italia   |  10 hrs 20 min |  8,150  |   DL  |    230    |" << endl;
    cout << "|  2  |    QatarAir     | $17,890  |     Catar    |  14 hrs 50 min | 11,900  |   QR  |    380    |" << endl;
    cout << "|  3  |      Avianca    |  $2,780  |   Argentina  |  7 hrs 10 min  |  5,920  |   AV  |    190    |" << endl;
    cout << "|  4  | BritishAirways  |  $6,950  | Reino Unido  |  9 hrs 45 min  |  7,850  |   BA  |    260    |" << endl;
    cout << "|  5  |      LATAM      |  $3,980  |     Chile    |  6 hrs 30 min  |  5,430  |   LA  |    210    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 4){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino     |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |      KLM       |  $8,320  |  Países Bajos |  10 hrs 50 min |  8,560  |   KL  |    275    |" << endl;
    cout << "|  2  |     AirFrance  |  $9,450  |    Francia    |  11 hrs 30 min |  9,120  |   AF  |    290    |" << endl;
    cout << "|  3  |    CopaAir     |  $2,650  |   Panamá      |  4 hrs 15 min  |  3,750  |   CM  |    180    |" << endl;
    cout << "|  4  | TurkishAirlines|  $12,780 |    Turquía    |  13 hrs 40 min | 10,850  |   TK  |    320    |" << endl;
    cout << "|  5  |     JetBlue    |  $1,980  |    Perú       |  5 hrs 50 min  |  4,600  |   JB  |    200    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 5){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |      Ryanair   |  $1,250  |    Irlanda   |  3 hrs 10 min  |  2,300  |   FR  |    180    |" << endl;
    cout << "|  2  |  SingaporeAir  | $14,990  |  Singapur    |  18 hrs 05 min | 13,950  |   SQ  |    350    |" << endl;
    cout << "|  3  |    AlaskaAir   |  $3,870  |Estados Unidos|  6 hrs 25 min  |  5,100  |   AS  |    200    |" << endl;
    cout << "|  4  |      SwissAir  |  $8,750  |  Suiza       |  12 hrs 15 min |  9,450  |   LX  |    280    |" << endl;
    cout << "|  5  |     Aeroflot   |  $9,990  |  Rusia       |  14 hrs 30 min | 11,200  |   SU  |    310    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 6){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino   |    Duración   |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Emirates    | $15,600  |     India    |  16 hrs 10 min | 12,800  |   EK  |    390    |" << endl;
    cout << "|  2  |    Volaris     |  $2,150  |   Guatemala  |  2 hrs 40 min  |  1,780  |   VO  |    160    |" << endl;
    cout << "|  3  |    Lufthansa   |  $9,870  |     Austria  |  12 hrs 55 min | 10,300  |   LH  |    270    |" << endl;
    cout << "|  4  |   Air Canada   |  $4,320  |    Canadá    |  5 hrs 10 min  |  4,200  |   AC  |    225    |" << endl;
    cout << "|  5  |     Iberia     |  $7,980  |     España   |  10 hrs 45 min |  8,750  |   IB  |    260    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 7){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino   |    Duración   |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Aeroméxico  |  $3,750  |    Cuba      |  3 hrs 50 min  |  2,900  |   AM  |    180    |" << endl;
    cout << "|  2  |     Delta      |  $6,890  |  Argentina   |  9 hrs 30 min  |  7,600  |   DL  |    240    |" << endl;
    cout << "|  3  |     Avianca    |  $2,970  |  Ecuador     |  4 hrs 05 min  |  3,350  |   AV  |    190    |" << endl;
    cout << "|  4  |  BritishAirways|  $8,450  |   Alemania   |  11 hrs 20 min |  9,100  |   BA  |    280    |" << endl;
    cout << "|  5  |     KLM        |  $9,980  | Países Bajos |  12 hrs 15 min |  9,750  |   KL  |    290    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 8){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino   |    Duración   |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    LATAM       |  $3,250  |   Bolivia    |  4 hrs 20 min  |  3,600  |   LA  |    185    |" << endl;
    cout << "|  2  |    Emirates    | $16,450  |  Australia   |  17 hrs 10 min | 13,500  |   EK  |    400    |" << endl;
    cout << "|  3  |   Air France   |  $9,750  |    Francia   |  11 hrs 50 min |  9,200  |   AF  |    275    |" << endl;
    cout << "|  4  |  Qatar Airways | $14,300  |     Qatar    |  14 hrs 45 min | 11,850  |   QR  |    360    |" << endl;
    cout << "|  5  |     CopaAir    |  $2,480  |   Costa Rica |  2 hrs 55 min  |  2,150  |   CM  |    170    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 9){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino   |    Duración   |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Aeroflot    |  $10,250 |    Rusia     |  14 hrs 20 min | 11,500  |   SU  |    320    |" << endl;
    cout << "|  2  |      Iberia    |  $8,350  |    España    |  10 hrs 55 min |  8,900  |   IB  |    260    |" << endl;
    cout << "|  3  |   TurkishAir   | $12,100  |   Turquía    |  13 hrs 35 min | 10,750  |   TK  |    300    |" << endl;
    cout << "|  4  |  AmericanAir   |  $5,750  |    México    |  4 hrs 45 min  |  3,900  |   AA  |    220    |" << endl;
    cout << "|  5  |   Swiss Air    |  $9,620  |   Suiza      |  12 hrs 10 min |  9,500  |   LX  |    280    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 10){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino   |    Duración   |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Volaris    |  $2,180  |    Honduras  |  2 hrs 35 min  |  1,900  |   VO  |    160    |" << endl;
    cout << "|  2  |    Lufthansa   |  $9,870  |  Alemania    |  11 hrs 50 min |  9,400  |   LH  |    290    |" << endl;
    cout << "|  3  |   SingaporeAir | $15,320  |  Singapur    |  18 hrs 15 min | 14,000  |   SQ  |    380    |" << endl;
    cout << "|  4  |      KLM       |  $8,640  | Países Bajos |  10 hrs 25 min |  8,250  |   KL  |    270    |" << endl;
    cout << "|  5  |     Delta      |  $6,530  |  Canadá      |  5 hrs 50 min  |  4,500  |   DL  |    230    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 11){
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

    if (fecha == 12){
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

    if (fecha == 13){
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

    if (fecha == 14){
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

    if (fecha == 15){
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

    if (fecha == 16){
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

    if (fecha == 17){
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

    if (fecha == 18){
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

    if (fecha == 19){
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

    if (fecha == 20){
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

    if (fecha == 21){
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

    if (fecha == 22){
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

    if (fecha == 23){
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

    if (fecha == 24){
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

    if (fecha == 25){
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

    if (fecha == 26){
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

    if (fecha == 27){
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

    if (fecha == 28){
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
    else{
        cout << "Esa fecha de vuelo no está disponible" << endl;
    }
}

int Vuelos::getVuelo()
{
    return vuelo;
}

void Vuelos::imprimeInfoVuelo()
{
    if (fecha == 1){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 2){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 3){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 4){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 5){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 6){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 7){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 8){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 9){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 10){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 11){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 12){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 13){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 14){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 15){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 16){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 17){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 18){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 19){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 20){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 21){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 22){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 23){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 24){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 25){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 26){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 27){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }

    if (fecha == 28){
        if (vuelo == 1)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     | $1,879  |   Cancún  | 2 hrs 45 min  | 1,661  |   XA  |    150    |" << endl;
        
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
        
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
        
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
        
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
       
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }
}

Vuelos::~Vuelos()
{

}