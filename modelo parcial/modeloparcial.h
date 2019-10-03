#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define T 4
#define P 10

typedef struct
{
    int dia;
    int mes;
    int anio;

}sFecha;

typedef struct
{
    int id;
    sFecha fechaNacimiento;
    char nombre[50];

}sPersona;

typedef struct
{
    char patente[8];
    sFecha fechaIngreso;
    int horaEntrada;
    int horaSalida;
    int idPropietario;

}sVehiculos;

void cargarPersonas(sPersona personas[], int cantidad);
void mostrarPersonas(sPersona [], int);
void cargarTwistedMetal(sVehiculos[],int);
void mostrarAutitos(sPersona[],sVehiculos[],int);
void ordenarPorNombreYNacimiento(sPersona[],int);
//int buscarId(sPersona persona[],int id, int cantidad);
