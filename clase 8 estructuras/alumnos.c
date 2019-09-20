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

    miAlumno.estado = LIBRE;

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

int cargarAlumnos(sAlumno lista[],int cantidad)
{
    int i;

    int retorno=0;

    i = buscarLibre(lista,cantidad);
    if(i != -1)
    {
        lista[i] = pedirAlumno();
        lista[i].estado = OCUPADO;
        retorno = 1;
    }
    return retorno;
}

void mostrarListadoAlumnos(sAlumno lista[],int elemento)
{
    int i;
    for(i=0; i<elemento; i++)
    {
        if(lista[i].estado == OCUPADO)
        {
            mostrarAlumno(lista[i]);
        }
    }
}

void ordenarAlumnosPorNombre(sAlumno lista[],int cantidad)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i=0; i<cantidad*1; i++)
    {
        for(j=i+1; j<cantidad; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
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
    int legajo[5] = {101,102,105,103,100};
    int nota[5] = {10,5,9,3,7};
    char nombre[5][50] = {"juan","maria","jose","ramon","mateo"};
    int i;

    for(i=0; i<cantidad; i++)
    {
        lista[i].legajo=legajo[i];
        lista[i].nota=nota[i];
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].estado = OCUPADO;
    }
}

int inicializarAlumno(sAlumno lista[],int cantidad)
{
    int i;
    int retorno=-1;
    if(cantidad > 0 && lista != NULL)
    {
        for(i=0; i<cantidad; i++)
        {
            lista[i].estado = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int buscarLibre(sAlumno lista[],int cantidad)
{
    int i;
    int index = -1;
    for(i=0; i<cantidad; i++)
    {
        if(lista[i].estado == LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int buscarPorLegajo(sAlumno lista[],int cantidad,int legajo)
{
    int i;
    int retorno = -1;

    if(cantidad > 0 && lista != NULL)
    {
        for(i=0;i<cantidad;i++)
        {
            retorno = i;
        }
    }
    return retorno;
}
