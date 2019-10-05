#include "modeloparcial.h"

void cargarPersonas(sPersona listaPersonas[],int cant)
{
    char nombre[][51]= {"Maria","Ezequiel","German","Yanina"};
    int anio[]= {1990,1980,2000,1995};
    int mes[]= {3,4,12,11};
    int dia[]= {33,22,25,11};
    int id[]= {1,2,3,4};
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
    for(i=0; i<cantidad; i++)
    {
        printf("\n%d---%s---%d/%d/%d\n",persona[i].id,persona[i].nombre,persona[i].fechaNacimiento.dia,persona[i].fechaNacimiento.mes,persona[i].fechaNacimiento.anio);
    }
}

void ordenarPorNombreYNacimiento(sPersona persona[],int cantidad)
{
    int i;
    int j;
    sPersona nombreAux;
    for(i=0; i<cantidad-1; i++)
    {
        for(j=i+1; j<cantidad; j++)
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
                        "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"
                       };
    int dia = {26};
    int mes = {9};
    int anio = {2019};
    int horaIngreso[] = {10,9,8,11,10,11,9,7,7,14};
    int horaSalida[] = {11,11,11,12,14,15,12,10,11,17};
    int idPersona[]= {2,4,1,4,2,2,1,3,4,4};

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

void mostrarAutitos(sPersona persona[], sVehiculos vehiculo[],int cantidadPersonas, int cantidadAutos)
{
    int i;
    int j;
    for(i=0; i<cantidadPersonas; i++)
    {
        for(j=0; j<cantidadAutos; j++)
        {
            if(persona[i].id == vehiculo[j].idPropietario)
            {
                printf("\n%d---%s----%s",persona[i].id,vehiculo[i].patente,persona[i].nombre);
            }
        }
    }
}

void ordenarIds(sPersona persona[], int cantidad)
{
    int i;
    int j;
    sPersona idAux;

    for(i=0; i<cantidad-1; i++)
    {
        for(j=i+1; j<cantidad; j++)
        {
            if(persona[i].id > persona[j].id)
            {

                idAux = persona[i];
                persona[i] = persona[j];
                persona[j] = idAux;

            }

        }
    }
}

int buscarId(sPersona persona[],int cantidad)
{
    int i;
    int id;
    mostrarPersonas(persona,cantidad);
    printf("\ningrese id de persona ");
    fflush(stdin);
    scanf("%d",&id);

    for(i=0; i<cantidad; i++)
    {
        if(id == persona[i].id)
        {
            return id;
        }
    }
}

void mostrarDuenioConAutos(sPersona persona[],sVehiculos vehiculos[],int cantidadPersonas, int cantidadVehiculos)
{
    int id;
    id = buscarId(persona,cantidadPersonas);
    int i;
    int j;

    for(i=0; i<cantidadPersonas; i++)
    {
        if(id == persona[i].id)
        {
            printf("%s\n",persona[i].nombre);
        }
    }

    for(j=0; j<cantidadVehiculos; j++)
    {
        if(id == vehiculos[j].idPropietario)
        {
            printf("%s \n",vehiculos[j].patente);
        }
    }
}

void buscarPorPatente(sVehiculos vehiculo[],sPersona persona [],int cantidadPersonas,int cantidadVehiculos)
{
    char patente;
    int j;
    int i;
    patente = buscarPatente(vehiculo,cantidadVehiculos);

    for(j=0; j<cantidadVehiculos; j++)
    {

        if(strcmp(vehiculo[j].patente,patente)==0)
        {
            printf("%d",vehiculo[j].idPropietario);
        }



    }
}

void mostrarPatentes(sVehiculos vehiculos[],int cantidadVehiculos)
{
    int i;

    for(i=0; i<cantidadVehiculos; i++)
    {
        printf("%s\n",vehiculos[i].patente);
    }
}

int buscarPatente(sVehiculos vehiculo [], int cantidadVehiculos)
{
    int i;
    char patente[8];
    printf("ingrese patente ");
    fflush(stdin);
    gets(patente);

    for(i=0; i<cantidadVehiculos; i++)
    {
        if(strcmp(vehiculo[i].patente,patente)==0)
        {
            return i;
        }
    }
}



