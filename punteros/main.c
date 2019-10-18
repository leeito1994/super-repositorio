#include "punteros.h"

int main()
{/*
    CONCEPTO BASICO DE PUNTERO

    int unEntero=10;
    int* puntero = NULL;
    int* otroPuntero;

    puntero = &unEntero;
    printf("ingrese numero ");
    scanf("%d",puntero);

    if(puntero != NULL)
    {
        otroPuntero = puntero;
        printf("%d",*otroPuntero);
        //printf("%d",unEntero); // 10
    }
    else{
        printf("no se inicializo ");
    }


    //printf("el numero es %d\n",*puntero);
*/

    ///int* puntero;
    int vector[5];
    ///int i;
    int contadorID=0;

    cargarVector(vector,5);
    mostrarVector(vector,5);
    incrementoId(&contadorID);
    printf("siguiente ID %d \n",contadorID);
     incrementoId(&contadorID);
    printf("siguiente ID %d \n",contadorID);

    ///puntero = &vector; ///FUNCIONA PERO NO ES RECOMENDABLE
    ///puntero = vector;  ///LA CORRECTA
    ///puntero = &vector[0]; ///FUNCIONA PERO NO ES RECOMENDABLE

    return 0;
}
