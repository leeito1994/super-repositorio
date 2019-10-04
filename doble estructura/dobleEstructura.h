#include <stdio.h>
#include <stdlib.h>

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

void hardcodearDatos(sPersona[], sFecha[], int);
void mostrarTodo (sPersona[], sFecha[] , sVehiculo[],int);
void hardcodearVehiculos(sVehiculo[], sFecha[], sPersona[],int);
int buscarIndicePersona(sPersona[], int);
void mostrarUnaPersona(sPersona);
void mostrarUnAutito(sVehiculo,sPersona[],int);



