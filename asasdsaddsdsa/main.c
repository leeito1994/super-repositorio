#include "asd.h"
#define A 3

int main()
{

    sPersona Personas[A];
    int listaPersonas[A];
    int opcion;

    sPersona pedirPersona();
   /* cargarPersona(listaPersonas,A);
    mostrarListaPersonas(listaPersonas,A);

*/
    do
    {
        printf("1.cargar alumnos: \n");
        printf("2. mostrar alumnos \n");
        printf("elija opcion ");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            //cargarAlumnos(listaAlumnos,A);
            cargarPersona(listaPersonas,A);
            break;

        case 2:
            mostrarListaPersonas(listaPersonas,A);
            break;
        }

        }while (opcion != 5);
    return 0;
}
