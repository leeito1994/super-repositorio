#include <stdio.h>
#include <stdlib.h>
#include "string.h"


typedef struct
{
    int dia;
    int mes;
    int anio;

}sFecha;

typedef struct
{
    int id;
    char nombre[50];
    sFecha fecha;

}sPersona;

typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;

}sVehiculo;

void messi(int);
void mostrarListaDePersonas(sPersona[],int);
void mostrarlistaAutitos(sVehiculo[],int);
void mostrarUnaPersona(sPersona);
void mostrarUnAutito(sVehiculo);
int buscarPersona(sPersona[],int);
void mostrarAutosId(sVehiculo [],sPersona[],int,int);


