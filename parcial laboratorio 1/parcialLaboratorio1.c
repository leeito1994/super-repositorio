#include "parcialLaboratorio1.h"
#include "string.h"

void cargarEquipos(sEquipos listaEquipos[],int cantidad)
{
    char nombre[][51]= {"Boca","River","Racing","Sanlorenzo"};
    char localidadEquipo[][51] = {"laBoca","Nuniez","avellaneda","boedo"};
    int codigo[] = {1,2,3,4};
    int i;

    for(i=0; i<cantidad; i++)
    {
        strcpy(listaEquipos[i].nombre,nombre[i]);
        strcpy(listaEquipos[i].localidad,localidadEquipo[i]);
        listaEquipos[i].Codigo = codigo[i];

    }
}

void cargarJugadores(sJugadores listaJugadores[],int cantidad)
{
    char nombre[][51]= {"leandro","santiago","diego","jose"};
    char apellido[][31] = {"martinez","reynoso","caceres","diaz"};
    int codigo[] = {100,101,102,103};
    int codigoEquipo[] = {1,2,3,4};
    char sexo[] = {'m','m','m','m'};
    int dia[] = {15,8,9,28};
    int mes[] = {7,9,11,10};
    int anio[] = {1994,1998,1987,1960};

    int i;

    for(i=0; i<cantidad; i++)
    {
        strcpy(listaJugadores[i].Nombre,nombre[i]);
        strcpy(listaJugadores[i].Apellido,apellido[i]);
        listaJugadores[i].Codigo = codigo[i];
        listaJugadores[i].CodigoEquipo = codigoEquipo[i];
        listaJugadores[i].Sexo = sexo[i];
        listaJugadores[i].FechaNacimiento.dia = dia[i];
        listaJugadores[i].FechaNacimiento.mes = mes[i];
        listaJugadores[i].FechaNacimiento.anio = anio[i];

    }
}

void mostrarJugadores(sJugadores jugadores[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("%12s       %12s       %c    %02d/%02d/%04d\n",jugadores[i].Nombre,jugadores[i].Apellido,jugadores[i].Sexo,jugadores[i].FechaNacimiento);
    }
}

void mostrarReferis(sReferi referis[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("%12s     %12s      %1d       %1c      %02d/%02d/%04d\n",referis[i].nombre,referis[i].apellido,referis[i].sexo,referis[i].FechaNacimientoReferi);
    }
}

void mostrarEquipos(sEquipos equipos[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("%12s    %12s   %02d\n",equipos[i].nombre,equipos[i].localidad,equipos[i].Codigo);
    }
}

void pedirEquipo(sEquipos equipos[],int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        printf("ingrese equipo ");
        fflush(stdin);
        gets(equipos[i].nombre);

        printf("ingrese localidad del equipo ");
        fflush(stdin);
        gets(equipos[i].localidad);

        equipos[i].Codigo++;

    }

}

void pedirJugadores(sJugadores jugadores[],int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
    {
        printf("ingrese nombre ");
    fflush(stdin);
    gets(jugadores[i].Nombre);

    printf("ingrese apellido ");
    fflush(stdin);
    gets(jugadores[i].Apellido);

    printf("ingrese sexo ");
    fflush(stdin);
    scanf("%c",&jugadores[i].Sexo);

    printf("ingrese fecha de nacimiento (dia)" );
    fflush(stdin);
    scanf("%d",&jugadores[i].FechaNacimiento.dia);

    printf("ingrese fecha de nacimiento(mes) ");
    fflush(stdin);
    scanf("%d",&jugadores[i].FechaNacimiento.mes);

    printf("ingrese fecha de nacimiento (anio)");
    fflush(stdin);
    scanf("%d",&jugadores[i].FechaNacimiento.anio);

    jugadores[i].Codigo+1;
    }
}

void pedirReferis(sReferi referis[], int cantidad)
{
    int i;
    int codigo=0;
    for(i=0;i<cantidad;i++)
    {

    printf("ingrese nombre ");
    fflush(stdin);
    gets(referis[i].nombre);

    printf("ingrese apellido ");
    fflush(stdin);
    gets(referis[i].apellido);

    printf("ingrese sexo ");
    fflush(stdin);
    scanf("%c",&referis[i].sexo);

    printf("ingrese fecha de nacimiento (dia)" );
    fflush(stdin);
    scanf("%d",&referis[i].FechaNacimientoReferi.dia);

    printf("ingrese fecha de nacimiento(mes) ");
    fflush(stdin);
    scanf("%d",&referis[i].FechaNacimientoReferi.mes);

    printf("ingrese fecha de nacimiento (anio)");
    fflush(stdin);
    scanf("%d",&referis[i].FechaNacimientoReferi.anio);

    referis[i].codigo+1;
    }
}

void ordenarAlfabeticamenteEquipos(sEquipos equipos[],int cantidad)
{
    int i;
    int j;
    sEquipos equipoAux;

    for(i=0;i<cantidad;i++)
    {
        for(j=0;j<cantidad;j++)
        {
            if(strcmp(equipos[i].nombre,equipos[j].nombre)<0)

            {
                 equipoAux = equipos[i];
            equipos[i] = equipos[j];
            equipos[j] = equipoAux;
            }

        }
    }

}

void ordenarAlfabeticamenteJugadores(sJugadores jugadores[],int cantidad)
{
    int i;
    int j;
    sJugadores jugadoresAux;

    for(i=0;i<cantidad;i++)
    {
        for(j=0;j<cantidad;j++)
        {
            if(strcmp(jugadores[i].Nombre,jugadores[j].Nombre)<0)

            {
                 jugadoresAux = jugadores[i];
            jugadores[i] = jugadores[j];
            jugadores[j] = jugadoresAux;
            }

        }
    }

}
