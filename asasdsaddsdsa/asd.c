#include "asd.h"

sPersona pedirPersona()
{
    sPersona laPersona;

    int i;

        printf("ingrese nombre ");
        fflush(stdin);
        gets(laPersona.nombre);

        printf("ingrese apellido ");
        fflush(stdin);
        gets(laPersona.apellido);

        printf("ingrese dni ");
        scanf("%f",&laPersona.dni);

        return laPersona;

}

void cargarPersona(sPersona lista[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        lista[i] = pedirPersona();
    }
}

void mostrarPersona(sPersona persona)
{
    printf("%s---%s----%f\n",persona.nombre,persona.apellido,persona.dni);
}

void mostrarListaPersonas(sPersona lista[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        mostrarPersona(lista[i]);
    }
}

void ingresarPersonaAleatoria(sPersona persona[], int cantidad)
{
    int i;
    int flagEncontro =0;
    for(i=0;i<cantidad;i++)
    {
        if(persona[i].estaVacio == 1)
        {
            pedirPersona(p,i);
            flagEncontro=1;
            break;
        }
    }
    if(flagEncontro==0)
    {
        printf("no hay espacio para cargar ");
    }
}
