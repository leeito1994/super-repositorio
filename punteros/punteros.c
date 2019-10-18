#include "punteros.h"

void cargarVector(int* vector,int cantidad)
{
    int i;
     for(i=0;i<cantidad;i++)
    {
        printf("ingrese numero ");
        scanf("%d",vector+i);
    }
}

void mostrarVector(int* vector,int cantidad)
{
    int i;
       for(i=0;i<cantidad;i++)
    {
        printf("%d\n",*(vector+i));
    }
}

void incrementoId(int* ultimoId)
{
    *ultimoId = *ultimoId+1;
}
