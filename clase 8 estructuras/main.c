#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#define A 5

int main()
{
    sAlumno listaAlumnos[A];
    //int i;
    int opcion;
    int index;

    if(inicializarAlumno(listaAlumnos,A)==0)
    {
        do
        {
            printf("1.cargar alumnos: \n");
            printf("2. mostrar alumnos \n");
            printf("3. ordenar alumnos por nombre\n");
            printf("4. buscar por legajo\n");
            printf("5. eliminar salumno\n");
            printf("elija opcion ");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                /*if(cargarAlumnos(listaAlumnos,A)==1)
                {
                    printf("\ncarga exitosa!\n");
                }
                else
                {
                    printf("\ncarga fallida\n");
                }
                */
                hardcodearAlumnos(listaAlumnos,A);
                break;

            case 2:
                mostrarListadoAlumnos(listaAlumnos,A);
                break;

            case 3:
                ordenarAlumnosPorNombre(listaAlumnos,A);
                break;

            case 4:
                index = buscarPorLegajo(listaAlumnos,A);
                mostrarAlumno(listaAlumnos[index]);
                break;
            case 5:
                darBaja(listaAlumnos,A);
                break;

            }

            system("pause");
            system("cls");
        }
        while (opcion != 6);
    }
    else
    {
        printf("hubo un problemon!!");
    }

    //cargarAlumnos(listaAlumnos,A);
    //mostrarListadoAlumnos(listaAlumnos,A);



    /*sAlumno miAlumno;//={100,"pepe",7};
    sAlumno otroAlumno;

    miAlumno = pedirAlumno();
    otroAlumno = pedirAlumno();

    if(compararAlumnoPorLegajo(miAlumno, otroAlumno))
    {
        printf("\nlos alumnos tienen el mismo legajo ");
    }
    else
    {
        printf("\nno tienen el mismo legajo ");
    }

    //mostrarAlumno(miAlumno);
    */
    return 0;

}
