#include "misFunciones.h"

int main()
{
    int operacion;
    int respuesta;
    int flag1=0;

    sPersona lasPersonas[T];
    inicializarPersonas(lasPersonas,T);


    do{
        printf("1. cargar empleados \n");
        printf("2. modificar empleados \n");
        printf("3. dar de baja\n");
        printf("4. mostrar lista de empleados \n");
        printf("5. para salir \n");
        printf("6. ordenar secot y apellido \n");
        printf("eleji una opcion amigo \n");
        scanf("%d",&operacion);

        switch(operacion)
        {
        case 1:
            hardcodearDatos(lasPersonas,T);
            /*if(cargaAleatoriaDePersonas(lasPersonas,T)==0)
            {
                printf("se cargo un empleado con exito \n");
            }*/
            flag1=1;
            break;
        case 2:
            if(flag1 == 1)
            {
                if(modificarEmpleado(lasPersonas,T)==0)
                    printf("se modifico con exito\n");
            }
            else
            {
                printf("ERROR, se necesita ingresar empleados\n ");
            }

            break;
        case 3:
                if(flag1 == 1)
                {
                if(darBaja(lasPersonas,T)==0)
                printf("se elimino con exito\n");
                }
                else
                {
                    printf("ERROR, se necesita ingresar empleados \n");
                }

            break;
        case 4:
                if(flag1 == 1)
                {
                printf("ID\t     NOMBRE\t   APELLIDO\tSECTOR\t      SALARIO\t");
                mostrar(lasPersonas,T);
                }
            else
            {
                printf("ERROR, se necesita ingresar empleados \n");
            }
                break;
        case 6:
            mostrarPorApellidoYSector(lasPersonas,T);
        }

        system("pause");
        system("cls");

    }while(operacion != 5);

    return 0;
}
