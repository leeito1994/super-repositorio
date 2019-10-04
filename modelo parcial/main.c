#include "modeloparcial.h"

int main()
{

    sPersona listaPersonas[T];
    //sFecha fechas[T];
    sVehiculos listaAutitos[P];
    int operacion;

    do{
        printf("1. hardcodear personas ");
        printf("\n2. mostrar personas ");
        printf("\n3. ordenar personas ");
        printf("\n4. mostrar duenio con patente ");
        scanf("%d",&operacion);

        switch(operacion)
        {
        case 1:
            cargarPersonas(listaPersonas,T);
            break;
        case 2:
            mostrarPersonas(listaPersonas,T);
            break;
        case 3:
            ordenarPorNombreYNacimiento(listaPersonas,T);
            ordenarIds(listaPersonas,T);
            mostrarPersonas(listaPersonas,T);
            break;
        case 4:
            cargarTwistedMetal(listaAutitos,P);
            //mostrarAutitos(listaPersonas,listaAutitos,T,P);
            mostrarDuenioConAutos(listaPersonas,listaAutitos,T,P);

            break;
        }
        system("pause");
        system("cls");
    }while(operacion != 5);

    printf("Hello world!\n");
    return 0;
}
