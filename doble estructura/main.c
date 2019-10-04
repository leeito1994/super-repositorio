#include "dobleEstructura.h"
#define T 4

int main()
{
    sFecha laFecha[T];
    sPersona laPersona[T];
    sVehiculo vehiculo[T];
    int i;
    hardcodearDatos(laPersona,laFecha,T);
    hardcodearVehiculos(vehiculo,laFecha,laPersona,T);
    mostrarTodo(laPersona,laFecha,vehiculo,T);
    mostrarUnAutito(laPersona,vehiculo,T);
    printf("\nFUNCIONAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

    i = buscarIndicePersona(laPersona,T);

    if(i != -1)
    {
        mostrarUnaPersona(laPersona[i]);
    }
    else
    {
        printf("\nno se encontrooooooooooooooooooooooooooo");
    }
    return 0;
}
