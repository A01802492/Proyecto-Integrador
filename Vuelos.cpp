#include <iostream>
#include "Vuelos.h"
#include <string>

using namespace std;

Vuelos::Vuelos()
{
    vuelo = 0;
    fecha = 0;
    pasajeros = 0;
    destino = " ";
}

void Vuelos::selectFecha()
{
    cout << "En qué fecha le gustaría viajar del mes de febrero? (Ingrese el número del día): ";
    cin >> fecha;
}

int Vuelos::Fecha()
{
    return fecha;
}

void Vuelos::setPasajeros()
{
    cout << "Cuántos pasajeros viajarán?: ";
    cin >> pasajeros;
    cout << "Checando disponibilidad... " << endl;
}

int Vuelos::getPasajeros()
{
    return pasajeros;
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
    cout << "| No. |     Nombre      |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Aeroméxico    |  $2,150  |    Brasil    |  8 hrs 30 min  |  6,755  |   AM  |    180    |" << endl;
    cout << "|  2  |     Emirates    | $18,750  |     Dubái    |  15 hrs 20 min | 12,340  |   EK  |    410    |" << endl;
    cout << "|  3  |  AmericanAir    |  $5,320  |Estados Unidos|  5 hrs 15 min  |  4,120  |   AA  |    220    |" << endl;
    cout << "|  4  |     Iberia      |  $7,890  |    España    |  11 hrs 45 min |  8,940  |   IB  |    250    |" << endl;
    cout << "|  5  |    Lufthansa    |  $9,230  |   Alemania   |  13 hrs 10 min | 10,120  |   LH  |    280    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 3){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre      |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |      Delta      |  $3,450  |     Italia   |  10 hrs 20 min |  8,150  |   DL  |    230    |" << endl;
    cout << "|  2  |    QatarAir     | $17,890  |     Qatar    |  14 hrs 50 min | 11,900  |   QR  |    380    |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
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
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Avianca    |  $3,120  |  El Salvador |  2 hrs 50 min  |  2,100  |   AV  |    175    |" << endl;
    cout << "|  2  |    Emirates    | $16,990  |   Dubái      |  15 hrs 40 min | 12,700  |   EK  |    390    |" << endl;
    cout << "|  3  |   Air France   |  $9,250  |   Francia    |  11 hrs 10 min |  9,000  |   AF  |    280    |" << endl;
    cout << "|  4  |  BritishAirways|  $7,850  |   Inglaterra |  10 hrs 30 min |  8,600  |   BA  |    265    |" << endl;
    cout << "|  5  |     LATAM      |  $4,420  |   Brasil     |  6 hrs 20 min  |  5,200  |   LA  |    210    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 12){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |      Delta     |  $5,750  |   Argentina  |  9 hrs 15 min  |  7,500  |   DL  |    240    |" << endl;
    cout << "|  2  |     Aeroméxico |  $3,450  |   Colombia   |  4 hrs 05 min  |  3,400  |   AM  |    185    |" << endl;
    cout << "|  3  |    QatarAir    | $14,850  |     Qatar    |  14 hrs 20 min | 11,750  |   QR  |    360    |" << endl;
    cout << "|  4  |     KLM        |  $8,990  | Países Bajos |  10 hrs 40 min |  8,500  |   KL  |    275    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,200  |   Turquía    |  13 hrs 30 min | 10,800  |   TK  |    310    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 13){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Volaris     |  $2,280  |    Perú      |  5 hrs 10 min  |  4,200  |   VO  |    170    |" << endl;
    cout << "|  2  |  AmericanAir   |  $6,750  |   Canadá     |  5 hrs 40 min  |  4,700  |   AA  |    225    |" << endl;
    cout << "|  3  |   Lufthansa    |  $9,980  |   Alemania   |  12 hrs 00 min |  9,600  |   LH  |    290    |" << endl;
    cout << "|  4  |   CopaAir      |  $2,900  |   Panamá     |  3 hrs 25 min  |  2,800  |   CM  |    180    |" << endl;
    cout << "|  5  |    Emirates    | $17,300  |  Australia   |  17 hrs 45 min | 14,200  |   EK  |    400    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 14){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Avianca    |  $3,150  |  Ecuador     |  4 hrs 15 min  |  3,500  |   AV  |    190    |" << endl;
    cout << "|  2  |    Iberia      |  $8,750  |  España      |  10 hrs 40 min |  8,700  |   IB  |    270    |" << endl;
    cout << "|  3  |   Air Canada   |  $5,420  |  Canadá      |  6 hrs 05 min  |  5,100  |   AC  |    230    |" << endl;
    cout << "|  4  |  TurkishAir    | $12,600  |  Turquía     |  13 hrs 50 min | 10,900  |   TK  |    320    |" << endl;
    cout << "|  5  |   SingaporeAir | $15,750  |  Singapur    |  18 hrs 30 min | 14,150  |   SQ  |    380    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 15){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Delta      |  $6,250  |   Brasil     |  7 hrs 10 min  |  5,800  |   DL  |    240    |" << endl;
    cout << "|  2  |   Aeroméxico   |  $3,980  |   Chile      |  5 hrs 30 min  |  4,500  |   AM  |    200    |" << endl;
    cout << "|  3  |     KLM        |  $9,120  | Países Bajos |  11 hrs 15 min |  9,000  |   KL  |    280    |" << endl;
    cout << "|  4  |    QatarAir    | $14,950  |   Qatar      |  15 hrs 10 min | 12,000  |   QR  |    350    |" << endl;
    cout << "|  5  |  BritishAirways|  $8,420  |   Inglaterra |  10 hrs 55 min |  8,900  |   BA  |    275    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 16){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Emirates     | $16,800  |   Dubái      |  15 hrs 20 min | 12,500  |   EK  |    380    |" << endl;
    cout << "|  2  |   Volaris      |  $2,350  |   Guatemala  |  2 hrs 30 min  |  1,750  |   VO  |    160    |" << endl;
    cout << "|  3  |   Air France   |  $9,670  |   Francia    |  11 hrs 25 min |  9,250  |   AF  |    290    |" << endl;
    cout << "|  4  |   CopaAir      |  $3,120  |   Panamá     |  3 hrs 40 min  |  2,950  |   CM  |    185    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,350  |   Turquía    |  13 hrs 45 min | 10,850  |   TK  |    310    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 17){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Avianca    |  $3,250  |   Bolivia    |  4 hrs 30 min  |  3,700  |   AV  |    180    |" << endl;
    cout << "|  2  |   Lufthansa    |  $9,850  |   Alemania   |  12 hrs 20 min |  9,500  |   LH  |    295    |" << endl;
    cout << "|  3  |    Iberia      |  $8,900  |   España     |  10 hrs 50 min |  8,850  |   IB  |    275    |" << endl;
    cout << "|  4  |  AmericanAir   |  $6,450  |   Canadá     |  5 hrs 25 min  |  4,600  |   AA  |    230    |" << endl;
    cout << "|  5  |    QatarAir    | $14,700  |   Qatar      |  14 hrs 40 min | 11,950  |   QR  |    355    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 18){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Aeroméxico  |  $3,780  |   Honduras   |  3 hrs 20 min  |  2,650  |   AM  |    175    |" << endl;
    cout << "|  2  |    Delta       |  $6,980  |   Argentina  |  9 hrs 45 min  |  7,800  |   DL  |    245    |" << endl;
    cout << "|  3  |   SingaporeAir | $15,600  |   Singapur   |  18 hrs 40 min | 14,300  |   SQ  |    385    |" << endl;
    cout << "|  4  |    KLM         |  $9,250  | Países Bajos |  10 hrs 55 min |  8,900  |   KL  |    280    |" << endl;
    cout << "|  5  |   BritishAirways| $8,780  |  Inglaterra  |  10 hrs 45 min |  8,750  |   BA  |    270    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 19){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Emirates   | $16,500  |   Dubái      |  15 hrs 30 min | 12,600  |   EK  |    390    |" << endl;
    cout << "|  2  |      Volaris   |  $2,450  |   Guatemala  |  2 hrs 40 min  |  1,800  |   VO  |    165    |" << endl;
    cout << "|  3  |   Air France   |  $9,720  |   Francia    |  11 hrs 35 min |  9,300  |   AF  |    295    |" << endl;
    cout << "|  4  |   CopaAir      |  $3,180  |   Panamá     |  3 hrs 50 min  |  2,900  |   CM  |    190    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,450  |   Turquía    |  13 hrs 55 min | 10,950  |   TK  |    315    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 20){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Avianca    |  $3,320  |   Ecuador    |  4 hrs 20 min  |  3,600  |   AV  |    185    |" << endl;
    cout << "|  2  |   Lufthansa    |  $9,980  |   Alemania   |  12 hrs 10 min |  9,550  |   LH  |    290    |" << endl;
    cout << "|  3  |    Iberia      |  $8,850  |   España     |  10 hrs 35 min |  8,700  |   IB  |    270    |" << endl;
    cout << "|  4  |  AmericanAir   |  $6,500  |   Canadá     |  5 hrs 20 min  |  4,500  |   AA  |    225    |" << endl;
    cout << "|  5  |    QatarAir    | $14,750  |   Qatar      |  14 hrs 50 min | 11,900  |   QR  |    350    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 21){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |    Aeroméxico  |  $3,850  |   Perú       |  5 hrs 15 min  |  4,300  |   AM  |    190    |" << endl;
    cout << "|  2  |       Delta    |  $7,100  |   Argentina  |  9 hrs 30 min  |  7,650  |   DL  |    250    |" << endl;
    cout << "|  3  |  SingaporeAir  | $15,900  |   Singapur   |  18 hrs 20 min | 14,400  |   SQ  |    390    |" << endl;
    cout << "|  4  |        KLM     |  $9,500  | Países Bajos |  11 hrs 00 min |  8,950  |   KL  |    285    |" << endl;
    cout << "|  5  | BritishAirways |  $8,900  |  Inglaterra  |  10 hrs 50 min |  8,800  |   BA  |    275    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 22){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Emirates   | $16,700  |   Dubái      |  15 hrs 40 min | 12,700  |   EK  |    395    |" << endl;
    cout << "|  2  |     Volaris    |  $2,500  |   Costa Rica |  2 hrs 50 min  |  1,900  |   VO  |    170    |" << endl;
    cout << "|  3  |   Air France   |  $9,800  |   Francia    |  11 hrs 45 min |  9,400  |   AF  |    300    |" << endl;
    cout << "|  4  |   CopaAir      |  $3,250  |   Panamá     |  3 hrs 30 min  |  2,850  |   CM  |    180    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,550  |   Turquía    |  13 hrs 35 min | 10,900  |   TK  |    320    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 23){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Avianca      |  $3,400  |   Bolivia    |  4 hrs 25 min  |  3,750  |   AV  |    185    |" << endl;
    cout << "|  2  |   Lufthansa    |  $9,950  |   Alemania   |  12 hrs 15 min |  9,600  |   LH  |    295    |" << endl;
    cout << "|  3  |   Iberia       |  $8,920  |   España     |  10 hrs 40 min |  8,800  |   IB  |    280    |" << endl;
    cout << "|  4  |   AmericanAir  |  $6,600  |   Canadá     |  5 hrs 15 min  |  4,550  |   AA  |    230    |" << endl;
    cout << "|  5  |   QatarAir     | $14,850  |   Qatar      |  14 hrs 55 min | 11,950  |   QR  |    360    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 24){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Aeroméxico   |  $3,900  |   Perú       |  5 hrs 10 min  |  4,350  |   AM  |    195    |" << endl;
    cout << "|  2  |      Delta     |  $7,200  |   Argentina  |  9 hrs 40 min  |  7,700  |   DL  |    255    |" << endl;
    cout << "|  3  |  SingaporeAir  | $15,850  |   Singapur   |  18 hrs 10 min | 14,350  |   SQ  |    380    |" << endl;
    cout << "|  4  |       KLM      |  $9,600  | Países Bajos |  11 hrs 05 min |  8,980  |   KL  |    290    |" << endl;
    cout << "|  5  | BritishAirways |  $8,950  |  Inglaterra  |  10 hrs 55 min |  8,850  |   BA  |    275    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 25){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Emirates   | $16,900  |   Dubái      |  15 hrs 50 min | 12,800  |   EK  |    400    |" << endl;
    cout << "|  2  |     Volaris    |  $2,600  |   El Salvador|  2 hrs 55 min  |  2,000  |   VO  |    175    |" << endl;
    cout << "|  3  |   Air France   |  $9,850  |   Francia    |  11 hrs 50 min |  9,500  |   AF  |    305    |" << endl;
    cout << "|  4  |   CopaAir      |  $3,300  |   Panamá     |  3 hrs 35 min  |  2,900  |   CM  |    185    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,600  |   Turquía    |  13 hrs 45 min | 11,000  |   TK  |    325    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 26){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |   Avianca      |  $3,500  |   Ecuador    |  4 hrs 15 min  |  3,650  |   AV  |    190    |" << endl;
    cout << "|  2  |   Lufthansa    |  $9,990  |   Alemania   |  12 hrs 05 min |  9,700  |   LH  |    300    |" << endl;
    cout << "|  3  |   Iberia       |  $8,970  |   España     |  10 hrs 45 min |  8,900  |   IB  |    285    |" << endl;
    cout << "|  4  |   AmericanAir  |  $6,700  |   Canadá     |  5 hrs 10 min  |  4,600  |   AA  |    235    |" << endl;
    cout << "|  5  |   QatarAir     | $14,900  |   Qatar      |  14 hrs 40 min | 11,850  |   QR  |    365    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 27){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Aeroméxico |  $3,780  |   Chile      |  5 hrs 25 min  |  4,450  |   AM  |    195    |" << endl;
    cout << "|  2  |       Delta    |  $7,300  |   Brasil     |  7 hrs 30 min  |  5,900  |   DL  |    250    |" << endl;
    cout << "|  3  |  SingaporeAir  | $16,200  |   Singapur   |  18 hrs 25 min | 14,500  |   SQ  |    385    |" << endl;
    cout << "|  4  |        KLM     |  $9,700  | Países Bajos |  11 hrs 20 min |  9,000  |   KL  |    290    |" << endl;
    cout << "|  5  | BritishAirways |  $9,050  |  Inglaterra  |  11 hrs 00 min |  8,950  |   BA  |    280    |" << endl;
    cout << "Seleccione el número del vuelo que desea tomar: ";
    cin >> vuelo;
    }

    if (fecha == 28){
    cout << "La lista de vuelos es la siguiente: " << endl;
    cout << "| No. |     Nombre     |  Precio  |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
    cout << "|  1  |     Emirates   | $17,000  |   Dubái      |  15 hrs 55 min | 12,850  |   EK  |    405    |" << endl;
    cout << "|  2  |     Volaris    |  $2,700  |   Nicaragua  |  2 hrs 45 min  |  1,950  |   VO  |    170    |" << endl;
    cout << "|  3  |   Air France   |  $9,900  |   Francia    |  11 hrs 40 min |  9,450  |   AF  |    310    |" << endl;
    cout << "|  4  |   CopaAir      |  $3,350  |   Panamá     |  3 hrs 25 min  |  2,850  |   CM  |    180    |" << endl;
    cout << "|  5  |   TurkishAir   | $12,750  |   Turquía    |  13 hrs 50 min | 11,100  |   TK  |    330    |" << endl;
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
            destino = "Cancún";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  | JapanAirlines  | $22,399 |   Japón   | 16 hrs 15 min | 11,324 |   JA  |    405    |" << endl;
            destino = "Japón";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  | CanadaAirlines | $3,272  |   Canadá  | 4 hrs 33 min  | 4,093  |   CF  |    145    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Condor     | $7,878  |  Alemania | 16 hrs 10 min | 9,570  |   D   |    155    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Volaris     | $4,563  |  Colombia | 3 hrs 21 min  | 3,177  |   HK  |    145    |" << endl;
            destino = "Colombia";
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
            cout << "|  1  |   Aeroméxico   |  $2,150 |   Brasil  |  8 hrs 30 min |  6,755 |   AM  |    180    |" << endl;
            destino = "Brasil";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Emirates   | $18,750 |    Dubái  |  15 hrs 20 min| 12,340 |   EK  |    410    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |     Destino    |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |  AmericanAir   |  $5,320 | Estados Unidos |  5 hrs 15 min |  4,120 |   AA  |    220    |" << endl;
            destino = "Estados Unidos";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     Iberia     |  $7,89  |   España  |  11 hrs 45 min|  8,940 |   IB  |    250    |" << endl;
            destino = "España";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Lufthansa   |  $9,230 |  Alemania |  13 hrs 10 min| 10,120 |   LH  |    280    |" << endl;
            destino = "Alemania";
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
            cout << "|  1  |      Delta     |  $3,450 |   Italia  |  10 hrs 20 min|  8,150 |   DL  |    230    |" << endl;
            destino = "Italia";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |    QatarAir    | $17,890 |   Qatar   |  14 hrs 50 min| 11,900 |   QR  |    380    |" << endl;
            destino = "Qatar";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |     Avianca    |  $2,780 | Argentina |  7 hrs 10 min |  5,920 |   AV  |    190    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  | BritishAirways |  $6,950 |Reino Unido| 9 hrs 45 min  |  7,850 |   BA  |    260    |" << endl;
            destino = "Reino Unido";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio  |  Destino  |    Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |      LATAM     |  $3,980 |  Chile    | 6 hrs 30 min  |  5,430 |   LA  |    210    |" << endl;
            destino = "Chile";
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
            cout << "| No. |     Nombre     | Precio  |  Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |      KLM       |  $8,320 |Países Bajos|  10 hrs 50 min |  8,560  |   KL  |    275    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  2  |     AirFrance  |  $9,450  |    Francia    |  11 hrs 30 min |  9,120  |   AF  |    290    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  3  |    CopaAir     |  $2,650  |   Panamá      |  4 hrs 15 min  |  3,750  |   CM  |    180    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino     |     Duración   |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  | TurkishAirlines|  $12,780 |    Turquía    |  13 hrs 40 min | 10,850  |   TK  |    320    |" << endl;
            destino = "Turquía";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  5  |     JetBlue    |  $1,980  |    Perú       |  5 hrs 50 min  |  4,600  |   JB  |    200    |" << endl;
            destino = "Perú";
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
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |      Ryanair   |  $1,250  |    Irlanda   |  3 hrs 10 min  |  2,300  |   FR  |    180    |" << endl;
            destino = "Irlanda";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  2  |  SingaporeAir  | $14,990  |  Singapur    |  18 hrs 05 min | 13,950  |   SQ  |    350    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |    AlaskaAir   |  $3,870  |Estados Unidos|  6 hrs 25 min  |  5,100  |   AS  |    200    |" << endl;
            destino = "Estados Unidos";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |      SwissAir  |  $8,750  |   Suiza     |  12 hrs 15 min |  9,450  |   LX  |    280    |" << endl;
            destino = "Suiza";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |     Aeroflot   |  $9,990  |  Rusia    |  14 hrs 30 min | 11,200  |   SU  |    310    |" << endl;
            destino = "Rusia";
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
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Emirates    | $15,600  |     India    |  16 hrs 10 min | 12,800  |   EK  |    390    |" << endl;
            destino = "India";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Volaris     |  $2,150  |   Guatemala  |  2 hrs 40 min  |  1,780  |   VO  |    160    |" << endl;
            destino = "Guatemala";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  3  |    Lufthansa   |  $9,870  |    Austria  |  12 hrs 55 min | 10,300  |   LH  |    270    |" << endl;
            destino = "Austria";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |   Air Canada   |  $4,320  |    Canadá   |  5 hrs 10 min  |  4,200  |   AC  |    225    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  5  |     Iberia     |  $7,980  |     España   |  10 hrs 45 min |  8,750  |   IB  |    260    |" << endl;
            destino = "España";
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
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Aeroméxico  |  $3,750  |    Cuba      |  3 hrs 50 min  |  2,900  |   AM  |    180    |" << endl;
            destino = "Cuba";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Delta      |  $6,890  |  Argentina |  9 hrs 30 min  |  7,600  |   DL  |    240    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |     Avianca    |  $2,970  |  Ecuador   |  4 hrs 05 min  |  3,350  |   AV  |    190    |" << endl;
            destino = "Ecuador";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |  BritishAirways|  $8,450  |   Alemania  |  11 hrs 20 min |  9,100  |   BA  |    280    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |     KLM        |  $9,980  | Países Bajos |  12 hrs 15 min |  9,750  |   KL  |    290    |" << endl;
            destino = "Países Bajos";
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
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |    LATAM       |  $3,250  |   Bolivia   |  4 hrs 20 min  |  3,600  |   LA  |    185    |" << endl;
            destino = "Bolivia";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Emirates    | $16,450  |  Australia |  17 hrs 10 min | 13,500  |   EK  |    400    |" << endl;
            destino = "Australia";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     |  Precio  |  Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,750  |   Francia  |  11 hrs 50 min |  9,200  |   AF  |    275    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |  Qatar Airways | $14,300  |   Qatar   |  14 hrs 45 min | 11,850  |   QR  |    360    |" << endl;
            destino = "Qatar";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  5  |     CopaAir    |  $2,480  |   Costa Rica |  2 hrs 55 min  |  2,150  |   CM  |    170    |" << endl;
            destino = "Costa Rica";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Aeroflot    |  $10,250 |   Rusia   |  14 hrs 20 min | 11,500  |   SU  |    320    |" << endl;
            destino = "Rusia";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  2  |      Iberia    |  $8,350  |    España    |  10 hrs 55 min |  8,900  |   IB  |    260    |" << endl;
            destino = "España";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  3  |   TurkishAir   | $12,100  |   Turquía   |  13 hrs 35 min | 10,750  |   TK  |    300    |" << endl;
            destino = "Turquía";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |  AmericanAir   |  $5,750  |    México  |  4 hrs 45 min  |  3,900  |   AA  |    220    |" << endl;
            destino = "México";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  5  |   Swiss Air    |  $9,620  |   Suiza   |  12 hrs 10 min |  9,500  |   LX  |    280    |" << endl;
            destino = "Suiza";
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
            cout << "| No. |     Nombre     | Precio   |  Destino.    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Volaris    |  $2,180  |    Honduras  |  2 hrs 35 min  |  1,900  |   VO  |    160    |" << endl;
            destino = "Honduras";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Lufthansa   |  $9,870  |  Alemania |  11 hrs 50 min |  9,400  |   LH  |    290    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   SingaporeAir | $15,320  |  Singapur  |  18 hrs 15 min | 14,000  |   SQ  |    380    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |      KLM       |  $8,640  | Países Bajos |  10 hrs 25 min |  8,250  |   KL  |    270    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |     Delta      |  $6,530  |  Canadá  |  5 hrs 50 min  |  4,500  |   DL  |    230    |" << endl;
            destino = "Canadá";
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
            cout << "| No. |     Nombre     | Precio   |  Destino     |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Avianca    |  $3,120  |  El Salvador |  2 hrs 50 min  |  2,100  |   AV  |    175    |" << endl;
            destino = "El Salvador";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Emirates    | $16,990  |   Dubái   |  15 hrs 40 min | 12,700  |   EK  |    390    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,250  |   Francia  |  11 hrs 10 min |  9,000  |   AF  |    280    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |  BritishAirways|  $7,850  |   Inglaterra |  10 hrs 30 min |  8,600  |   BA  |    265    |" << endl;
            destino = "Inglaterra";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |     LATAM      |  $4,420  |   Brasil |  6 hrs 20 min  |  5,200  |   LA  |    210    |" << endl;
            destino = "Brasil";
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
            cout << "| No. |     Nombre     | Precio   |  Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |      Delta     |  $5,750  |   Argentina |  9 hrs 15 min  |  7,500  |   DL  |    240    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Aeroméxico |  $3,450  |   Colombia |  4 hrs 05 min  |  3,400  |   AM  |    185    |" << endl;
            destino = "Colombia";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |    QatarAir    | $14,850  |    Qatar   |  14 hrs 20 min | 11,750  |   QR  |    360    |" << endl;
            destino = "Qatar";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |     KLM        |  $8,990  | Países Bajos |  10 hrs 40 min |  8,500  |   KL  |    275    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,200  |   Turquía  |  13 hrs 30 min | 10,800  |   TK  |    310    |" << endl;
            destino = "Turquía";
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
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Volaris     |  $2,280  |    Perú    |  5 hrs 10 min  |  4,200  |   VO  |    170    |" << endl;
            destino = "Perú";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |  AmericanAir   |  $6,750  |   Canadá  |  5 hrs 40 min  |  4,700  |   AA  |    225    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Lufthansa    |  $9,980  |   Alemania  |  12 hrs 00 min |  9,600  |   LH  |    290    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $2,900  |   Panamá   |  3 hrs 25 min  |  2,800  |   CM  |    180    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    Emirates    | $17,300  |  Australia |  17 hrs 45 min | 14,200  |   EK  |    400    |" << endl;
            destino = "Australia";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Avianca    |  $3,150  |  Ecuador  |  4 hrs 15 min  |  3,500  |   AV  |    190    |" << endl;
            destino = "Ecuador";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Iberia      |  $8,750  |  España   |  10 hrs 40 min |  8,700  |   IB  |    270    |" << endl;
            destino = "España";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air Canada   |  $5,420  |  Canadá   |  6 hrs 05 min  |  5,100  |   AC  |    230    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |  TurkishAir    | $12,600  |  Turquía  |  13 hrs 50 min | 10,900  |   TK  |    320    |" << endl;
            destino = "Turquía";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   SingaporeAir | $15,750  |  Singapur |  18 hrs 30 min | 14,150  |   SQ  |    380    |" << endl;
            destino = "Singapur";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Delta      |  $6,250  |   Brasil  |  7 hrs 10 min  |  5,800  |   DL  |    240    |" << endl;
            destino = "Brasil";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Aeroméxico   |  $3,980  |   Chile   |  5 hrs 30 min  |  4,500  |   AM  |    200    |" << endl;
            destino = "Chile";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |     KLM        |  $9,120  | Países Bajos |  11 hrs 15 min |  9,000  |   KL  |    280    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |    QatarAir    | $14,950  |   Qatar   |  15 hrs 10 min | 12,000  |   QR  |    350    |" << endl;
            destino = "Qatar";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |  BritishAirways|  $8,420  |   Inglaterra |  10 hrs 55 min |  8,900  |   BA  |    275    |" << endl;
            destino = "Inglaterra";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |   Emirates     | $16,800  |   Dubái   |  15 hrs 20 min | 12,500  |   EK  |    380    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Volaris      |  $2,350  |   Guatemala  |  2 hrs 30 min  |  1,750  |   VO  |    160    |" << endl;
            destino = "Guatemala";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,670  |   Francia |  11 hrs 25 min |  9,250  |   AF  |    290    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $3,120  |   Panamá  |  3 hrs 40 min  |  2,950  |   CM  |    185    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,350  |   Turquía |  13 hrs 45 min | 10,850  |   TK  |    310    |" << endl;
            destino = "Turquía";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Avianca    |  $3,250  |   Bolivia |  4 hrs 30 min  |  3,700  |   AV  |    180    |" << endl;
            destino = "Bolivia";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Lufthansa    |  $9,850  |  Alemania |  12 hrs 20 min |  9,500  |   LH  |    295    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |    Iberia      |  $8,900  |   España   |  10 hrs 50 min |  8,850  |   IB  |    275    |" << endl;
            destino = "España";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |  AmericanAir   |  $6,450  |   Canadá   |  5 hrs 25 min  |  4,600  |   AA  |    230    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    QatarAir    | $14,700  |   Qatar    |  14 hrs 40 min | 11,950  |   QR  |    355    |" << endl;
            destino = "Qatar";
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
            cout << "| No. |     Nombre     | Precio   |   Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Aeroméxico  |  $3,780  |   Honduras |  3 hrs 20 min  |  2,650  |   AM  |    175    |" << endl;
            destino = "Honduras";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |    Delta       |  $6,980  |  Argentina |  9 hrs 45 min  |  7,800  |   DL  |    245    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   SingaporeAir | $15,600  |  Singapur |  18 hrs 40 min | 14,300  |   SQ  |    385    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |    KLM         |  $9,250  | Países Bajos |  10 hrs 55 min |  8,900  |   KL  |    280    |" << endl;
            destino = "Países Bajos";
        }   
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   BritishAirways| $8,780  |  Inglaterra  |  10 hrs 45 min |  8,750  |   BA  |    270    |" << endl;
            destino = "Inglaterra";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Emirates   | $16,500  |   Dubái   |  15 hrs 30 min | 12,600  |   EK  |    390    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino     |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |      Volaris   |  $2,450  |   Guatemala  |  2 hrs 40 min  |  1,800  |   VO  |    165    |" << endl;
            destino = "Guatemala";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,720  |   Francia |  11 hrs 35 min |  9,300  |   AF  |    295    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $3,180  |   Panamá  |  3 hrs 50 min  |  2,900  |   CM  |    190    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,450  |   Turquía  |  13 hrs 55 min | 10,950  |   TK  |    315    |" << endl;
            destino = "Turquía";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Avianca    |  $3,320  |   Ecuador |  4 hrs 20 min  |  3,600  |   AV  |    185    |" << endl;
            destino = "Ecuador";
        }   
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Lufthansa    |  $9,980  |  Alemania |  12 hrs 10 min |  9,550  |   LH  |    290    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |    Iberia      |  $8,850  |  España   |  10 hrs 35 min |  8,700  |   IB  |    270    |" << endl;
            destino = "España";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |     Duración   |  Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |  AmericanAir   |  $6,500  |  Canadá    |  5 hrs 20 min  |  4,500  |   AA  |    225    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |    QatarAir    | $14,750  |   Qatar   |  14 hrs 50 min | 11,900  |   QR  |    350    |" << endl;
            destino = "Qatar";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |    Aeroméxico  |  $3,850  |   Perú    |  5 hrs 15 min  |  4,300  |   AM  |    190    |" << endl;
            destino = "Perú";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |       Delta    |  $7,100  | Argentina  |  9 hrs 30 min  |  7,650  |   DL  |    250    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |  SingaporeAir  | $15,900  |  Singapur   |  18 hrs 20 min | 14,400  |   SQ  |    390    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |        KLM     |  $9,500  | Países Bajos |  11 hrs 00 min |  8,950  |   KL  |    285    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  | BritishAirways |  $8,900  |  Inglaterra  |  10 hrs 50 min |  8,800  |   BA  |    275    |" << endl;
            destino = "Inglaterra";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Emirates   | $16,700  |   Dubái   |  15 hrs 40 min | 12,700  |   EK  |    395    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Volaris    |  $2,500  |   Costa Rica |  2 hrs 50 min  |  1,900  |   VO  |    170    |" << endl;
            destino = "Costa Rica";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,800  |   Francia  |  11 hrs 45 min |  9,400  |   AF  |    300    |" << endl;
            destino = "Francia";
        }   
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $3,250  |   Panamá  |  3 hrs 30 min  |  2,850  |   CM  |    180    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,550  |   Turquía  |  13 hrs 35 min | 10,900  |   TK  |    320    |" << endl;
            destino = "Turquía";
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
            cout << "| No. |     Nombre     | Precio   |   Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |   Avianca      |  $3,400  |   Bolivia  |  4 hrs 25 min  |  3,750  |   AV  |    185    |" << endl;
            destino = "Bolivia";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Lufthansa    |  $9,950  |   Alemania  |  12 hrs 15 min |  9,600  |   LH  |    295    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Iberia       |  $8,920  |   España   |  10 hrs 40 min |  8,800  |   IB  |    280    |" << endl;
            destino = "España";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   AmericanAir  |  $6,600  |   Canadá  |  5 hrs 15 min  |  4,550  |   AA  |    230    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   QatarAir     | $14,850  |   Qatar   |  14 hrs 55 min | 11,950  |   QR  |    360    |" << endl;
            destino = "Qatar";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  1  |   Aeroméxico   |  $3,900  |   Perú    |  5 hrs 10 min  |  4,350  |   AM  |    195    |" << endl;
            destino = "Perú";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |      Delta     |  $7,200  |  Argentina |  9 hrs 40 min  |  7,700  |   DL  |    255    |" << endl;
            destino = "Argentina";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |  SingaporeAir  | $15,850  |   Singapur  |  18 hrs 10 min | 14,350  |   SQ  |    380    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |       KLM      |  $9,600  | Países Bajos |  11 hrs 05 min |  8,980  |   KL  |    290    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |    Destino   |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  | BritishAirways |  $8,950  |  Inglaterra  |  10 hrs 55 min |  8,850  |   BA  |    275    |" << endl;
            destino = "Inglaterra";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Emirates   | $16,900  |   Dubái   |  15 hrs 50 min | 12,800  |   EK  |    400    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino    |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Volaris    |  $2,600  |  El Salvador|  2 hrs 55 min  |  2,000  |   VO  |    175    |" << endl;
            destino = "El Salvador";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,850  |   Francia  |  11 hrs 50 min |  9,500  |   AF  |    305    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $3,300  |   Panamá  |  3 hrs 35 min  |  2,900  |   CM  |    185    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,600  |   Turquía  |  13 hrs 45 min | 11,000  |   TK  |    325    |" << endl;
            destino = "Turquía";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |   Avianca      |  $3,500  |  Ecuador  |  4 hrs 15 min  |  3,650  |   AV  |    190    |" << endl;
            destino = "Ecuador";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |   Lufthansa    |  $9,990  |  Alemania  |  12 hrs 05 min |  9,700  |   LH  |    300    |" << endl;
            destino = "Alemania";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Iberia       |  $8,970  |  España   |  10 hrs 45 min |  8,900  |   IB  |    285    |" << endl;
            destino = "España";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |   AmericanAir  |  $6,700  |   Canadá   |  5 hrs 10 min  |  4,600  |   AA  |    235    |" << endl;
            destino = "Canadá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  5  |   QatarAir     | $14,900  |   Qatar   |  14 hrs 40 min | 11,850  |   QR  |    365    |" << endl;
            destino = "Qatar";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Aeroméxico |  $3,780  |   Chile   |  5 hrs 25 min  |  4,450  |   AM  |    195    |" << endl;
            destino = "Chile";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |       Delta    |  $7,300  |   Brasil   |  7 hrs 30 min  |  5,900  |   DL  |    250    |" << endl;
            destino = "Brasil";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |  SingaporeAir  | $16,200  |  Singapur |  18 hrs 25 min | 14,500  |   SQ  |    385    |" << endl;
            destino = "Singapur";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino     |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  4  |        KLM     |  $9,700  | Países Bajos |  11 hrs 20 min |  9,000  |   KL  |    290    |" << endl;
            destino = "Países Bajos";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |   Destino   |   Duración     |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  | BritishAirways |  $9,050  |  Inglaterra |  11 hrs 00 min |  8,950  |   BA  |    280    |" << endl;
            destino = "Inglaterra";
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
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  1  |     Emirates   | $17,000  |   Dubái   |  15 hrs 55 min | 12,850  |   EK  |    405    |" << endl;
            destino = "Dubái";
        }
        if (vuelo == 2)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino   |    Duración    |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  2  |     Volaris    |  $2,700  |  Nicaragua |  2 hrs 45 min  |  1,950  |   VO  |    170    |" << endl;
            destino = "Nicaragua";
        }
        if (vuelo == 3)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  3  |   Air France   |  $9,900  |  Francia  |  11 hrs 40 min |  9,450  |   AF  |    310    |" << endl;
            destino = "Francia";
        }
        if (vuelo == 4)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |    Duración    |  Km     | Avión | Pasajeros |" << endl;
            cout << "|  4  |   CopaAir      |  $3,350  |   Panamá  |  3 hrs 25 min  |  2,850  |   CM  |    180    |" << endl;
            destino = "Panamá";
        }
        if (vuelo == 5)
        {
            cout << "El vuelo que seleccionó es: " << endl;
            cout << "| No. |     Nombre     | Precio   |  Destino  |     Duración   |   Km    | Avión | Pasajeros |" << endl;
            cout << "|  5  |   TurkishAir   | $12,750  |  Turquía  |  13 hrs 50 min | 11,100  |   TK  |    330    |" << endl;
            destino = "Turquía";
        }
        if (vuelo < 1 || vuelo > 5)
        {
            cout << "Seleccionó una opción incorrecta, intente de nuevo" << endl;
        }
    }
}

string Vuelos::getDestino()
{
    return destino;
}

Vuelos::~Vuelos()
{

}