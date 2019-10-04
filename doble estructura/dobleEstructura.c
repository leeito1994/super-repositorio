#include "dobleEstructura.h"
#include "string.h"

void hardcodearDatos(sPersona persona[], sFecha fecha[], int cantidad)
{

    int dia[4] = {33,22,25,11};
    int mes[4] = {3,4,12,11};
    int anio[4] = {1990,1980,2000,1995};
    int id[4] = {100,102,105,121};
    int i;

    for(i=0; i<cantidad; i++)
    {
        fecha[i].dia = dia[i];
        fecha[i].mes = mes[i];
        fecha[i].anio = anio[i];
        persona[i].id = id[i];
    }
}

void hardcodePersonas(sPersona listaPersonas[],int cant)
{
    char nombre[][51]= {"Maria","Ezequiel","German","Yanina"};
    int anio[]= {1990,1980,2000,1995};
    int mes[]= {3,4,12,11};
    int dia[]= {33,22,25,11};
    int id[]={100,101,105,106};
    int i;

    for(i=0; i<cant; i++)
    {
        listaPersonas[i].id =id[i];
        listaPersonas[i].fechaNac.anio = anio[i];
        listaPersonas[i].fechaNac.mes = mes[i];
        listaPersonas[i].fechaNac.dia = dia[i];
        strcpy(listaPersonas[i].nombre, nombre[i]);
    }
}

void mostrarTodo(sPersona persona[], sFecha fecha[], sVehiculo vehiculo[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        //printf("\n  %04d %12s  %02d/ %02d/ %04d   %08s   %02d   %02d",persona[i].id,persona[i].nombre,fecha[i].dia,fecha[i].mes,fecha[i].anio,vehiculo[i].patente,vehiculo[i].horaIngreso,vehiculo[i].horaSalida);

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
    int id[4] = {100,102,105,121};
    int i;

    for(i=0; i<cantidad; i++)
    {
        fecha[i].dia = dia[i];
        fecha[i].mes = mes[i];
        fecha[i].anio = anio[i];
        strcpy(vehiculo[i].patente,patente[i]);
        vehiculo[i].horaIngreso = hora[i];
        vehiculo[i].horaSalida = salida[i];
        vehiculo[i].idDuenio = id[i];
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

void mostrarUnaPersona(sPersona persona)
{
        printf("ID: %d \n",persona.id);
        printf("nombre: %s\n",persona.nombre);
}

void mostrarUnAutito(sVehiculo vehiculos,sPersona personas[],int cantidad)
{
    int i;
    printf("%d %d %d %s",vehiculos.fechaIngreso,vehiculos.horaSalida,vehiculos.idDuenio,vehiculos.patente);
    for(i=0;i<cantidad;i++)
    {
        if(vehiculos.idDuenio == personas[i].id)
        {
            printf("%s ",personas[i].nombre);
            break;
        }
    }
}

void mostrarAutitos(sVehiculo autitos[],sPersona personas[] int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        mostrarUnAutito();
    }
}
