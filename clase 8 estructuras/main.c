#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#define A 3

int main()
{
    sAlumno listaAlumnos[A];
    int i;
    int opcion;

    //cargarAlumnos(listaAlumnos,A);
    mostrarListadoAlumnos(listaAlumnos,A);

    do
    {
        printf("1.cargar alumnos: \n");
        printf("2. mostrar alumnos \n");
        printf("3. ordenar alumnos por nombre\n");
        printf("elija opcion ");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            //cargarAlumnos(listaAlumnos,A);
            hardcodearAlumnos(listaAlumnos,A);
            break;

        case 2:
            mostrarListadoAlumnos(listaAlumnos,A);
            break;

        case 3:
            ordenarAlumnosPorNombre(listaAlumnos,A);
            break;

        case 4:
            mostrarListadoAlumnos(listaAlumnos,A);
            break;

        }

 system("pause");
 system("cls");
    }while (opcion != 5);

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
