#include "modeloparcial.h"

int main()
{
    int i;

    sPersona listaPersonas[T];
    sVehiculos listaAutitos[P];
    int operacion;

    do{
        printf("1. hardcodear personas ");
        printf("\n2. mostrar personas ");
        printf("\n3. ordenar personas ");
        printf("\n4. buscar duenio y mostrar patentes ");
        printf("\n5. buscar por patente ");
        scanf("%d",&operacion);

        switch(operacion)
        {
        case 1:
            cargarPersonas(listaPersonas,T);
            cargarTwistedMetal(listaAutitos,P);
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
            mostrarDuenioConAutos(listaPersonas,listaAutitos,T,P);
            break;
        case 5:
            mostrarPatentes(listaAutitos,P);
            buscarPorPatente(listaPersonas,listaAutitos,T,P);



            break;
        }
        system("pause");
        system("cls");
    }while(operacion != 6);

    printf("Hello world!\n");
    return 0;
}
