#include "modeloparcial.h"

/*int buscarId(sPersona persona[],int id, int cantidad)
{
    int i;
    int retorno = -1;
    for(i=0;i<cantidad;i++)
    {
        if(id == persona[i].id)
        {
            retorno = i;
        }
    }
    return retorno;
}*/

void cargarPersonas(sPersona listaPersonas[],int cant)
{
    char nombre[][51]= {"Maria","Ezequiel","German","Yanina"};
    int anio[]= {1990,1980,2000,1995};
    int mes[]= {3,4,12,11};
    int dia[]= {33,22,25,11};
    int id[]={100,101,105,106};
    int i;

    for(i=0; i<cant; i++)
    {
        listaPersonas[i].id = id[i];
        listaPersonas[i].fechaNacimiento.anio = anio[i];
        listaPersonas[i].fechaNacimiento.mes = mes[i];
        listaPersonas[i].fechaNacimiento.dia = dia[i];
        strcpy(listaPersonas[i].nombre, nombre[i]);
    }
}

 void mostrarPersonas(sPersona persona[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n%d---%s---%d/%d/%d\n",persona[i].id,persona[i].nombre,persona[i].fechaNacimiento.dia,persona[i].fechaNacimiento.mes,persona[i].fechaNacimiento.anio);
    }
}

void ordenarPorNombreYNacimiento(sPersona persona[],int cantidad)
{
    int i;
    int j;
    sPersona nombreAux;
    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(persona[i].fechaNacimiento.anio < persona[j].fechaNacimiento.anio)
            {
                nombreAux = persona[i];
                persona[i] = persona[j];
                persona[j] = nombreAux;
            }

            if(strcmp(persona[i].nombre,persona[j].nombre)>0)
            {
                nombreAux = persona[i];
                persona[i] = persona[j];
                persona[j] = nombreAux;
            }
        }
    }
}

void cargarTwistedMetal(sVehiculos listaAutitos[],int cantidad)
{
    int i;
    char patente[][8]= {"AAA111", "BBB222", "AAA222", "WWW777",
                        "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"};
    int dia = {26};
    int mes = {9};
    int anio = {2019};
    int horaIngreso[] = {10,9,8,11,10,11,9,7,7,14};
    int horaSalida[] = {11,11,11,12,14,15,12,10,11,17};
    int idPersona[]={101,106,100,106,101,101,100,105,106,106};

    for(i=0; i<cantidad; i++)
    {
        strcpy(listaAutitos[i].patente,patente[i]);
        listaAutitos[i].fechaIngreso.dia = dia;
        listaAutitos[i].fechaIngreso.mes = mes;
        listaAutitos[i].fechaIngreso.anio = anio;
        listaAutitos[i].horaEntrada = horaIngreso[i];
        listaAutitos[i].horaSalida = horaSalida[i];
        listaAutitos[i].idPropietario = idPersona[i];
    }
}

void mostrarAutitos(sPersona persona[], sVehiculos vehiculo[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n%d---%s----%s",persona[i].id,vehiculo[i].patente,persona[i].nombre);
    }
}


