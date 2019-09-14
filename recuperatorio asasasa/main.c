#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 4

int main()
{
    int edades[T] = {22,33,18,55};
    char listadoNombres[T][50];
    char listadoApellidos[T][50];

    cargarEdades(edades,T);
    mostrarNumeros(edades,T);
    cargarPalabrasTest(listadoNombres,T);
    mostrarPalabrasTest(listadoNombres,T);
    apellidos(listadoApellidos,T);
    ordenarEdades(listadoNombres,listadoApellidos,edades,T);

    mostrarTodo(listadoNombres,listadoApellidos,edades,T);


    return 0;
}
