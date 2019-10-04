#include "lalala.h"
#define T 10
#define A 4

int main()
{

    int i;
    sFecha laFecha[A];
    sPersona laPersona[A];
    sVehiculo vehiculo[T];

    hardcodePersonas(laPersona,A);
    hardcodeoAutos(vehiculo,T);

    mostrarListaDePersonas(laPersona,A);
    mostrarlistaAutitos(vehiculo,T);


    i = buscarPersona(laPersona,A);
    if(i != -1)
    {
       mostrarAutosId(vehiculo[i].patente,laPersona[i].nombre,i,T);
    }
    return 0;
}

