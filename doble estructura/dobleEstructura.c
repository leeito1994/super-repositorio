#include "dobleEstructura.h"
#include "string.h"

void hardcodearDatos(sPersona persona[], sFecha fecha[], int cantidad)
{
    char nombre[4][50] = {"maria","ezquiel","german","yanina"};
    int dia[4] = {33,22,25,11};
    int mes[4] = {3,4,12,11};
    int anio[4] = {1990,1980,2000,1995};
    int i;

    for(i=0; i<cantidad; i++)
    {
        fecha[i].dia = dia[i];
        fecha[i].mes = mes[i];
        fecha[i].anio = anio[i];
        strcpy(persona[i].nombre,nombre[i]);
        persona[i].id = i+1;
    }
}


void mostrarTodo(sPersona persona[], sFecha fecha[], sVehiculo vehiculo[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("ID: %d \n",persona[i].id);
        printf("nombre: %s\n",persona[i].nombre);
        printf("fecha %d %d %d\n",fecha[i].dia,fecha[i].mes,fecha[i].anio);
        printf("patente de vehiculo %s\n",vehiculo[i].patente);
        printf("hora de ingreso %d\n",vehiculo[i].horaIngreso);
        printf("hora de salida %d \n",vehiculo[i].horaSalida);
    }
}

void hardcodearVehiculos(sVehiculo vehiculo[], sFecha fecha[], sPersona persona[], int cantidad)
{
    char patente[4][50] = {"AAA111","BBB222","AAA111BB","OJ222BB"};
    int dia[4] = {26,26,26,26};
    int mes[4] = {9,9,9,9};
    int anio[4] = {2019,2019,2019,2019};
    int hora[4] = {10,9,8,11};
    int salida[4] = {11,11,11,12};
    int i;

    for(i=0; i<cantidad; i++)
    {
        fecha[i].dia = dia[i];
        fecha[i].mes = mes[i];
        fecha[i].anio = anio[i];
        strcpy(vehiculo[i].patente,patente[i]);
        vehiculo[i].horaIngreso = hora[i];
        vehiculo[i].horaSalida = salida[i];
        persona[i].id = i+1;
    }
}

int buscarIndicePersona(sPersona persona[], int cantidad)
{
    int i;
    int id;
    printf("\n ingrese ID ");
    scanf("%d",&id);

    for(i=0;i<cantidad;i++)
    {
        if(id==persona[i].id)
        {
                return i;
        }
    }
    return -1;
}

void mostrarUnaPersona(sPersona persona, sFecha fecha);
{
        printf("ID: %d \n",persona.id);
        printf("nombre: %s\n",persona.nombre);
        printf("Fecha de nacimiento %d %d %d",)
}

