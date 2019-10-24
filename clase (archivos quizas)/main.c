#include <stdio.h>
#include <stdlib.h>
#define T 50
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    int orden[50];
    char apellido[50];
    int estado;

}sPersona;

void mostrarVector(sPersona*,int);
void inicializar(sPersona*,int);
void ordenar(int*,int);
void swap(sPersona*,sPersona*);
void cargar(sPersona*,int,int);

int main()
{
    sPersona listaDePersonas[T];

    char respuesta;
    int elId = 0;
    int operacion;

    do{

        printf("1. cargar datos\n");
        printf("2. mostrar datos\n");
        printf("3. salir\n");
        printf("elegi opcion ");
        scanf("%d",&operacion);

        elId++;

        switch(operacion)
        {
        case 1:
            cargar(listaDePersonas,T,elId);
            break;
        case 2:
            mostrarVector(listaDePersonas,T);
            break;
        }
    system("pause");
    system("cls");
    }while(respuesta != 's');
   /*
    inicializar(orden,T);
    int i;
    char respuesta;

     for(i=0;i<T;i++)
    {
        printf("ingrese numero ");
        scanf("%d",(listaDePersonas+i)->);
        printf("cargar otro? ");
        fflush(stdin);
        scanf("%c",&respuesta);
        if(respuesta != 's')
        {
        break;
        }

    }
ordenar(orden,T);
   */
    mostrarVector(listaDePersonas,T);

    return 0;
}

void mostrarVector(sPersona* persona,int cantidad)
{
    int i;
       for(i=0;i<cantidad;i++)
    {
        if((persona+i)->estado == OCUPADO)
        {
            printf("%d    %d    %s\n",(persona+i)->id,(persona+i)->orden,(persona+i)->apellido);
        }
    }
}

void inicializar(sPersona* lista, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        (lista+i)->estado == LIBRE;
    }
}

void ordenar(int* vector,int cantidad)
{
    int i;
    int j;

    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(*(vector+i) < *(vector+j))
            {
                swap((vector+i),(vector+j));
            }
        }
    }
}

void swap(sPersona* num1, sPersona* num2)
{
    sPersona aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void cargar(sPersona* persona,int cantidad, int elId)
{
        int i;
        i = buscarLibre(persona,cantidad);
        char respuesta;

        printf("ingrese orden ");
        scanf("%d",&(persona+i)->orden);
        printf("ingrese apellido ");
        fflush(stdin);
        gets(&(persona+i)->apellido);
        (persona+i)->id = elId;
        (persona+i)->estado = OCUPADO;
        printf("cargar otro mas? ");
        scanf("%c",&respuesta);

}

int buscarLibre(sPersona* persona, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if((persona+i)->estado == LIBRE)
        {
            return i;
        }
    }
}
