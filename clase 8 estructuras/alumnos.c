#include "alumnos.h"


void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d\n",unAlumno.legajo,unAlumno.nombre,unAlumno.nota);
}

sAlumno pedirAlumno()

{
    sAlumno miAlumno;

     printf("ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("ingrese nota: ");
    scanf("%d",&miAlumno.nota);

    return miAlumno;
}

int compararAlumnoPorLegajo(sAlumno unAlumno,sAlumno otroAlumno)
{
    int comp=0;
    if(unAlumno.legajo == otroAlumno.legajo)
    {
        comp =1;
    }
    return comp;
}

void cargarAlumnos(sAlumno lista[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        /*printf("ingrese legajo: ");
        scanf("%d",&listaAlumnos[i].legajo);*/
        lista[i] = pedirAlumno();
    }
}

void mostrarListadoAlumnos(sAlumno lista[],int elemento)
{
    int i;
     for(i=0;i<elemento;i++)
    {
        mostrarAlumno(lista[i]);
    }
}

void ordenarAlumnosPorNombre(sAlumno lista[],int cantidad)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i=0;i<cantidad*1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)<0)
            {
                auxAlumno = lista[i];
                lista[i] = lista[j];
                lista[j] = auxAlumno;
            }
        }
    }
}

void hardcodearAlumnos(sAlumno lista[],int cantidad)
{
    int legajo[3] = {101,102,105};
    int nota[3] = {10,5,9};
    char nombre[3][50] = {"juan","maria","jose"};
    int i;

    for(i=0;i<cantidad;i++)
    {
        lista[i].legajo=legajo[i];
        lista[i].nota=nota[i];
        strcpy(lista[i].nombre,nombre[i]);
    }
}
