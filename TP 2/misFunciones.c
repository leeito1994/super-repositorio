#include "misFunciones.h"
#include "string.h"

void pedirDatos(sPersona persona[],int cantidad)
{
    printf("ingrese nombre ");
    fflush(stdin);
    gets(persona[cantidad].nombre);

    printf("ingrese apellido ");
    fflush(stdin);
    gets(persona[cantidad].apellido);

    printf("ingrese sector ");
    scanf("%d",&persona[cantidad].sector);

    printf("ingrese salario ");
    scanf("%f",&persona[cantidad].salario);

    persona[cantidad].vacio = OCUPADO;

}
void cargarDatos(sPersona persona[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        pedirDatos(persona,cantidad);
    }
}

void mostrar(sPersona persona[],int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(persona[i].vacio == OCUPADO)
        {
            printf("\n %02d %15s %15s       %d %20f\t",persona[i].id,persona[i].nombre,persona[i].apellido,persona[i].sector,persona[i].salario);
        }
    }
}

void mostrarUnaPersona(sPersona persona)
{
    printf("\n%02d %15s %15s       %d %20f\t\n",persona.id,persona.nombre,persona.apellido,persona.sector,persona.salario);
}

void inicializarPersonas(sPersona persona[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        persona[i].vacio = LIBRE;
    }
}

int cargaAleatoriaDePersonas(sPersona lista[], int cant)
{
    int i;
    int flagEncontro = 0;
    for(i=0; i<cant; i++)
    {
        if(lista[i].vacio==LIBRE)
        {
            pedirDatos(lista, i);
            lista[i].id = i+1;
            flagEncontro = 1;

            return 0;
            break;
        }
    }

    if(flagEncontro==0)
    {
        printf("NO HAY ESPACIO \n");
    }
}

void hardcodearDatos(sPersona lista[],int cantidad)
{
    int i;
    char nombres[6][51] = {"leandro","santiago","facundo","agustina","fernando","cristian"};
    char apellidos[6][51] = {"martinez","coletta","dmonkeyl","salafia","herrera","guerrero"};
    int sectores[6] = {1,1,2,3,4,3};
    float salario[6] = {12000,10000,20000,15000,18000,13000};
    for(i=0; i<cantidad; i++)
    {
        strcpy(lista[i].nombre,nombres[i]);
        strcpy(lista[i].apellido,apellidos[i]);
        lista[i].sector = sectores[i];
        lista[i].salario = salario[i];
        lista[i].vacio = OCUPADO;
        lista[i].id = i+1;
    }
}

int buscarIndice(sPersona lista[],int cantidad)
{
    int i;
    int id;
    printf("ingrese ID del empleado ");
    scanf("%d",&id);
    for(i=0; i<cantidad; i++)
    {
        if(id == lista[i].id)
        {
            return i;
        }
    }

    return -1;
}

int modificarEmpleado(sPersona persona[], int cantidad)
{
    int i;
    int operacion;

    i = buscarIndice(persona,cantidad);
    if(i != -1)
    {
        printf("que desea modificar?\n");
        printf("1. nombre\n");
        printf("2. apellido\n");
        printf("3. sector\n");
        printf("4. salario\n");
        scanf("%d",&operacion);
        switch(operacion)
        {
        case 1:
            printf("ingrese nuevo nombre");
            fflush(stdin);
            gets(persona[i].nombre);
            return 0;
            break;
        case 2:
            printf("ingrese apellido nuevo ");
            fflush(stdin);
            gets(persona[i].apellido);
            return 0;
            break;
        case 3:
            printf("ingrese sector nuevo ");
            fflush(stdin);
            scanf("%d",&persona[i].sector);
            return 0;
            break;
        case 4:
            printf("ingrese nuevo salario ");
            fflush(stdin);
            scanf("%f",&persona[i].salario);
            return 0;
            break;
        }
    }
    return -1;
}


int darBaja(sPersona persona[], int cantidad)
{
    int i;

        i = buscarIndice(persona,cantidad);
        if(i !=-1)
        {
            persona[i].vacio = LIBRE;
            return 0;
        }
return -1;
}

void mostrarPorApellidoYSector(sPersona persona[],int cantidad)
{
    int i;
    int j;
    sPersona apellidoAux;
    sPersona sectorAux;

    for(i=0; i<cantidad-1; i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(persona[i].sector<persona[j].sector)
            {
                sectorAux = persona[i];
                persona[i] = persona[j];
                persona[j] = sectorAux;
            }

                if(persona[i].sector==persona[j].sector);
                {
                apellidoAux = persona[i];
                persona[i] = persona[j];
                persona[j] = apellidoAux;
                }

            }
        }
}

void Promedio(sPersona persona[],int cantidad)
{

}



