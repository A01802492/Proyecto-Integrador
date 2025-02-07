#include "Reserva.h"
#include "Usuario.h"
#include "Vuelos.h"
#include <iostream>
#include <string>
    Vuelos V1;
    Usuario U1;

using namespace std;

Reserva::Reserva()
{
    opcion = 0;
    descuento1 = 0;
    descuento2 = 0;
    descuento3 = 0;
    descuento4 = 0;
    descuento5 = 0;
    cancel = 0;
}

void Reserva::bienvenida()
{
    cout << "Bienvenido a ViajandoAndo" << endl;
    cout << "Qué desea realizar?" << endl;
    cout << "<1> Crear un usuario" << endl;
    cout << "<2> Ver la lista de vuelos" << endl;
    cout << "<3> Ver su reserva" << endl;
    cout << "<4> Cancelar reserva" << endl;
    cout << "<5> Salir" << endl;
    cin >> opcion;
}

int Reserva::getOpcion()
{
    return opcion;
}

void Reserva::proceso1()
{
    if (opcion == 1)
    {
        U1.setNombre();
        U1.setCorreo();
        U1.setKilometros();
        cout << "Usuario creado exitosamente" << endl;
    }
    if (opcion == 2)
    {
        if (U1.usuarioExistente == 1){
            V1.selectFecha();
            V1.selectVuelo();
            V1.imprimeInfoVuelo();
            if (V1.vuelo < 1 || V1.vuelo > 5){
        
            }
            else{
                cout << "Vuelo seleccionado exitosamente" << endl;
            }
        }
        else{
            cout << "Primero cree un usuario por favor" << endl;
        }
    }

    if (opcion == 3)
    {
        if (U1.usuarioExistente == 1){
        V1.imprimeInfoVuelo();
        }
        else{
            cout << "Primero cree un usuario por favor" << endl;
        }
    }

    if (opcion == 4)
    {
        if (U1.usuarioExistente == 1){
        V1.imprimeInfoVuelo();
        cout << "Desea cancelarlo? (1 Si, 0 No)" << endl;
        cin >> cancel;

        if (cancel == 1){
            cout << "Reserva cancelada exitosamente" << endl;
        V1.vuelo = 0;
        }
        else {

        }
        }
        else{
            cout << "Primero cree un usuario por favor" << endl;
        }
    }
}

void Reserva::aplicaDescuento()
{
    if (V1.fecha == 1){
        if (U1.getKilometros() > 50000){
            descuento1 = 1879-(1879*0.40);
            descuento2 = 22399-(22399*0.40);
            descuento3 = 3272-(3272*0.40);
            descuento4 = 7878-(7878*0.40);
            descuento5 = 4563-(4563*0.40);
        }
        else{
            descuento1 = 1879;
            descuento2 = 22399;
            descuento3 = 3272;
            descuento4 = 7878;
            descuento5 = 4563;
        }
    } 

    if (V1.fecha == 2){
        if (U1.getKilometros() > 50000){
            descuento1 = 2150-(2150*0.40);
            descuento2 = 18750-(18750*0.40);
            descuento3 = 5320-(5320*0.40);
            descuento4 = 7890-(7890*0.40);
            descuento5 = 9230-(9320*0.40);
        }
        else{
            descuento1 = 2150;
            descuento2 = 18750;
            descuento3 = 5320;
            descuento4 = 7890;
            descuento5 = 9230;
        }
    }

    if (V1.fecha == 3){
        if (U1.getKilometros() > 50000){
            descuento1 = 3450-(3450*0.40);
            descuento2 = 17890-(17890*0.40);
            descuento3 = 2780-(2780*0.40);
            descuento4 = 6950-(6950*0.40);
            descuento5 = 3980-(3980*0.40);
        }
        else{
            descuento1 = 3450;
            descuento2 = 17890;
            descuento3 = 2780;
            descuento4 = 6950;
            descuento5 = 3980;
        }
    }

    if (V1.fecha == 4){
        if (U1.getKilometros() > 50000){
            descuento1 = 8320-(8320*0.40);
            descuento2 = 9450-(9450*0.40);
            descuento3 = 2650-(2650*0.40);
            descuento4 = 12780-(12780*0.40);
            descuento5 = 1980-(1980*0.40);
        }
        else{
            descuento1 = 8320;
            descuento2 = 9450;
            descuento3 = 2650;
            descuento4 = 12780;
            descuento5 = 1980;
        }
    } 

    if (V1.fecha == 5){
        if (U1.getKilometros() > 50000){
            descuento1 = 1250-(1250*0.40);
            descuento2 = 14990-(14990*0.40);
            descuento3 = 3870-(3870*0.40);
            descuento4 = 8750-(8750*0.40);
            descuento5 = 9990-(9990*0.40);
        }
        else{
            descuento1 = 1250;
            descuento2 = 14990;
            descuento3 = 3870;
            descuento4 = 8750;
            descuento5 = 9990;
        }
    }

    if (V1.fecha == 6){
        if (U1.getKilometros() > 50000){
            descuento1 = 15600-(15600*0.40);
            descuento2 = 2150-(2150*0.40);
            descuento3 = 9870-(9870*0.40);
            descuento4 = 4320-(4320*0.40);
            descuento5 = 7980-(7980*0.40);
        }
        else{
            descuento1 = 15600;
            descuento2 = 2150;
            descuento3 = 9870;
            descuento4 = 4320;
            descuento5 = 7980;
        }
    }

    if (V1.fecha == 7){
        if (U1.getKilometros() > 50000){
            descuento1 = 3750-(3750*0.40);
            descuento2 = 6890-(6890*0.40);
            descuento3 = 2970-(2970*0.40);
            descuento4 = 8450-(8450*0.40);
            descuento5 = 9980-(9980*0.40);
        }
        else{
            descuento1 = 3750;
            descuento2 = 6890;
            descuento3 = 2970;
            descuento4 = 8450;
            descuento5 = 9980;
        }
    } 

    if (V1.fecha == 8){
        if (U1.getKilometros() > 50000){
            descuento1 = 3250-(3250*0.40);
            descuento2 = 16450-(16450*0.40);
            descuento3 = 9750-(9750*0.40);
            descuento4 = 14300-(14300*0.40);
            descuento5 = 2480-(2480*0.40);
        }
        else{
            descuento1 = 3250;
            descuento2 = 16450;
            descuento3 = 9750;
            descuento4 = 14300;
            descuento5 = 2480;
        }
    }

    if (V1.fecha == 9){
        if (U1.getKilometros() > 50000){
            descuento1 = 10250-(10250*0.40);
            descuento2 = 8350-(8350*0.40);
            descuento3 = 12100-(12100*0.40);
            descuento4 = 5750-(5750*0.40);
            descuento5 = 9620-(9620*0.40);
        }
        else{
            descuento1 = 10250;
            descuento2 = 8350;
            descuento3 = 12100;
            descuento4 = 5750;
            descuento5 = 9620;
        }
    }

    if (V1.fecha == 10){
        if (U1.getKilometros() > 50000){
            descuento1 = 2180-(2180*0.40);
            descuento2 = 9870-(9870*0.40);
            descuento3 = 15320-(15320*0.40);
            descuento4 = 8640-(8640*0.40);
            descuento5 = 6530-(6530*0.40);
        }
        else{
            descuento1 = 2180;
            descuento2 = 9870;
            descuento3 = 15320;
            descuento4 = 8640;
            descuento5 = 6530;
        }
    } 

    if (V1.fecha == 11){
        if (U1.getKilometros() > 50000){
            descuento1 = 3120-(3120*0.40);
            descuento2 = 16990-(16990*0.40);
            descuento3 = 9250-(9250*0.40);
            descuento4 = 7850-(7850*0.40);
            descuento5 = 4420-(4420*0.40);
        }
        else{
            descuento1 = 3120;
            descuento2 = 16990;
            descuento3 = 9250;
            descuento4 = 7850;
            descuento5 = 4420;
        }
    }

    if (V1.fecha == 12){
        if (U1.getKilometros() > 50000){
            descuento1 = 5750-(5750*0.40);
            descuento2 = 3450-(3450*0.40);
            descuento3 = 14850-(14850*0.40);
            descuento4 = 8990-(8990*0.40);
            descuento5 = 12200-(12200*0.40);
        }
        else{
            descuento1 = 5750;
            descuento2 = 3450;
            descuento3 = 14850;
            descuento4 = 8990;
            descuento5 = 12200;
        }
    }

    if (V1.fecha == 13){
        if (U1.getKilometros() > 50000){
            descuento1 = 2280-(2280*0.40);
            descuento2 = 6750-(6750*0.40);
            descuento3 = 9980-(9980*0.40);
            descuento4 = 2900-(2900*0.40);
            descuento5 = 17300-(17300*0.40);
        }
        else{
            descuento1 = 2280;
            descuento2 = 6750;
            descuento3 = 9980;
            descuento4 = 2900;
            descuento5 = 17300;
        }
    } 

    if (V1.fecha == 14){
        if (U1.getKilometros() > 50000){
            descuento1 = 3150-(3150*0.40);
            descuento2 = 8750-(8750*0.40);
            descuento3 = 5420-(5420*0.40);
            descuento4 = 12600-(12600*0.40);
            descuento5 = 15750-(15750*0.40);
        }
        else{
            descuento1 = 3150;
            descuento2 = 8750;
            descuento3 = 5420;
            descuento4 = 12600;
            descuento5 = 15750;
        }
    }

    if (V1.fecha == 15){
        if (U1.getKilometros() > 50000){
            descuento1 = 6250-(6250*0.40);
            descuento2 = 3980-(3980*0.40);
            descuento3 = 9120-(9120*0.40);
            descuento4 = 14950-(14950*0.40);
            descuento5 = 8420-(8420*0.40);
        }
        else{
            descuento1 = 6250;
            descuento2 = 3980;
            descuento3 = 9120;
            descuento4 = 14950;
            descuento5 = 8420;
        }
    }

    if (V1.fecha == 16){
        if (U1.getKilometros() > 50000){
            descuento1 = 16800-(16800*0.40);
            descuento2 = 2350-(2350*0.40);
            descuento3 = 9670-(9670*0.40);
            descuento4 = 3120-(3120*0.40);
            descuento5 = 12350-(12350*0.40);
        }
        else{
            descuento1 = 16800;
            descuento2 = 2350;
            descuento3 = 9670;
            descuento4 = 3120;
            descuento5 = 12350;
        }
    } 

    if (V1.fecha == 17){
        if (U1.getKilometros() > 50000){
            descuento1 = 3250-(3250*0.40);
            descuento2 = 9850-(9850*0.40);
            descuento3 = 8900-(8900*0.40);
            descuento4 = 6450-(6450*0.40);
            descuento5 = 14700-(14700*0.40);
        }
        else{
            descuento1 = 3250;
            descuento2 = 9850;
            descuento3 = 8900;
            descuento4 = 6450;
            descuento5 = 14700;
        }
    }

    if (V1.fecha == 18){
        if (U1.getKilometros() > 50000){
            descuento1 = 3780-(3780*0.40);
            descuento2 = 6890-(6890*0.40);
            descuento3 = 15600-(15600*0.40);
            descuento4 = 9250-(9250*0.40);
            descuento5 = 8780-(8780*0.40);
        }
        else{
            descuento1 = 3780;
            descuento2 = 6890;
            descuento3 = 15600;
            descuento4 = 9250;
            descuento5 = 8780;
        }
    }

    if (V1.fecha == 19){
        if (U1.getKilometros() > 50000){
            descuento1 = 16500-(16500*0.40);
            descuento2 = 2450-(2450*0.40);
            descuento3 = 9720-(9720*0.40);
            descuento4 = 3180-(3180*0.40);
            descuento5 = 12450-(12450*0.40);
        }
        else{
            descuento1 = 16500;
            descuento2 = 2450;
            descuento3 = 9720;
            descuento4 = 3180;
            descuento5 = 12450;
        }
    } 

    if (V1.fecha == 20){
        if (U1.getKilometros() > 50000){
            descuento1 = 3320-(3320*0.40);
            descuento2 = 9980-(9980*0.40);
            descuento3 = 8850-(8850*0.40);
            descuento4 = 6500-(6500*0.40);
            descuento5 = 14750-(14750*0.40);
        }
        else{
            descuento1 = 3320;
            descuento2 = 9980;
            descuento3 = 8850;
            descuento4 = 6500;
            descuento5 = 14750;
        }
    }

    if (V1.fecha == 21){
        if (U1.getKilometros() > 50000){
            descuento1 = 3850-(3850*0.40);
            descuento2 = 7100-(7100*0.40);
            descuento3 = 15900-(15900*0.40);
            descuento4 = 9500-(9500*0.40);
            descuento5 = 8900-(8900*0.40);
        }
        else{
            descuento1 = 3850;
            descuento2 = 7100;
            descuento3 = 15900;
            descuento4 = 9500;
            descuento5 = 8900;
        }
    }

    if (V1.fecha == 22){
        if (U1.getKilometros() > 50000){
            descuento1 = 16700-(16700*0.40);
            descuento2 = 2500-(2500*0.40);
            descuento3 = 9800-(9800*0.40);
            descuento4 = 3250-(3250*0.40);
            descuento5 = 12550-(12550*0.40);
        }
        else{
            descuento1 = 16700;
            descuento2 = 2500;
            descuento3 = 9800;
            descuento4 = 3250;
            descuento5 = 12550;
        }
    } 

    if (V1.fecha == 23){
        if (U1.getKilometros() > 50000){
            descuento1 = 3400-(3400*0.40);
            descuento2 = 9950-(9950*0.40);
            descuento3 = 8920-(8920*0.40);
            descuento4 = 6600-(6600*0.40);
            descuento5 = 14850-(14850*0.40);
        }
        else{
            descuento1 = 3400;
            descuento2 = 9950;
            descuento3 = 8920;
            descuento4 = 6600;
            descuento5 = 14850;
        }
    }

    if (V1.fecha == 24){
        if (U1.getKilometros() > 50000){
            descuento1 = 3900-(3900*0.40);
            descuento2 = 7200-(7200*0.40);
            descuento3 = 15850-(15850*0.40);
            descuento4 = 9600-(9600*0.40);
            descuento5 = 8950-(8950*0.40);
        }
        else{
            descuento1 = 3900;
            descuento2 = 7200;
            descuento3 = 15850;
            descuento4 = 9600;
            descuento5 = 8950;
        }
    }

    if (V1.fecha == 25){
        if (U1.getKilometros() > 50000){
            descuento1 = 16900-(16900*0.40);
            descuento2 = 2600-(2600*0.40);
            descuento3 = 9850-(9850*0.40);
            descuento4 = 3300-(3300*0.40);
            descuento5 = 12600-(12600*0.40);
        }
        else{
            descuento1 = 16900;
            descuento2 = 2600;
            descuento3 = 9850;
            descuento4 = 3300;
            descuento5 = 12600;
        }
    } 

    if (V1.fecha == 26){
        if (U1.getKilometros() > 50000){
            descuento1 = 3500-(3500*0.40);
            descuento2 = 9990-(9990*0.40);
            descuento3 = 8970-(8970*0.40);
            descuento4 = 6700-(6700*0.40);
            descuento5 = 14900-(14900*0.40);
        }
        else{
            descuento1 = 3500;
            descuento2 = 9990;
            descuento3 = 8970;
            descuento4 = 6700;
            descuento5 = 14900;
        }
    }

    if (V1.fecha == 27){
        if (U1.getKilometros() > 50000){
            descuento1 = 3780-(3780*0.40);
            descuento2 = 7300-(7300*0.40);
            descuento3 = 16200-(16200*0.40);
            descuento4 = 9700-(9700*0.40);
            descuento5 = 9050-(4563*0.40);
        }
        else{
            descuento1 = 3780;
            descuento2 = 7300;
            descuento3 = 16200;
            descuento4 = 9700;
            descuento5 = 9050;
        }
    }

    if (V1.fecha == 28){
        if (U1.getKilometros() > 50000){
            descuento1 = 17000-(17000*0.40);
            descuento2 = 2700-(2700*0.40);
            descuento3 = 9900-(9900*0.40);
            descuento4 = 3350-(3350*0.40);
            descuento5 = 12750-(12750*0.40);
        }
        else{
            descuento1 = 17000;
            descuento2 = 2700;
            descuento3 = 9900;
            descuento4 = 3350;
            descuento5 = 12750;
        }
    }

}

float Reserva::getDescuento()
{
    return descuento1;
    return descuento2;
    return descuento3;
    return descuento4;
    return descuento5;
}

void Reserva::imprimeDatos()
{
    if (U1.usuarioExistente == 1){
    cout << "Sus datos son: " << endl;
    cout << "Usuario: " << U1.getNombre() << " Correo: " << U1.getCorreo() << endl;
    cout << "Para la fecha " << V1.fecha << " de Febrero. "; 
    V1.imprimeInfoVuelo();
    cout << "Y en vista de que aplica para nuestro descuento o no, ";
    if (V1.vuelo == 1){
        cout << "su total con descuento aplicado sería de: $" << descuento1 << endl;
    }
    if (V1.vuelo == 2){
        cout << "su total con descuento aplicado sería de: $" << descuento2 << endl;
    }
    if (V1.vuelo == 3){
        cout << "su total con descuento aplicado sería de: $" << descuento3 << endl;
    }
    if (V1.vuelo == 4){
        cout << "su total con descuento aplicado sería de: $" << descuento4 << endl;
    }
    if (V1.vuelo == 5){
        cout << "su total con descuento aplicado sería de: $" << descuento5 << endl;
    }
    }
    else{
        cout << "No se creó un usuario correctamente" << endl;
    }
}

void Reserva::despedida()
{
    cout << "Gracias por elegir ViajandoAndo" << endl;
}

Reserva::~Reserva()
{

}