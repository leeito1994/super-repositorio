#include <stdio.h>
#include <stdlib.h>
#define cantidad 3
void mostrarArray(int elArray[], int cant);
void inicializarArray(int elArray[], int cant, int inicializacion);
void cargaArray(int elArray[], int cant, char[]);
int dameMax(int elArray[], int cant);
int dameIndiceMax(int elArray[], int cant);
int dameMin(int elArray[],int cant);
int dameIndiceMin(int elArray[], int cant);
void MayorMenor(int elArray[], int cant);
void MenorMayor(int elArray[], int cant);

int main()
{
    int myArray[cantidad];
    int max;
    int indiceMax;
    int min;
    int indiceMin;

    inicializarArray(myArray, cantidad,-1);
    cargaArray(myArray,cantidad,"ingrese edad ");
    mostrarArray(myArray,cantidad);

    max = dameMax(myArray,cantidad);
    printf("\nel maximo es %d \n",max);

    min = dameMin(myArray,cantidad);
    printf("\n el minimo es %d \n",min);

    indiceMax = dameIndiceMax(myArray,cantidad);
    printf("\nel indice del maximo es %d\n ",indiceMax);

    indiceMin = dameIndiceMin(myArray,cantidad);
    printf("\n el indice del minimo es %d \n",indiceMin);

    MayorMenor(myArray,cantidad);
    printf("\nde mayor a menor\n ");
    mostrarArray(myArray,cantidad);

    MenorMayor(myArray,cantidad);
    printf("\nde menor a mayor\n");
    mostrarArray(myArray,cantidad);

    return 0;
}

void mostrarArray(int elArray[], int cant)
{
    int indice;

    for (indice=0; indice<cant; indice++)
    {
        printf("\nla edad es %d \n",elArray[indice]);
    }
}


void cargaArray(int elArray[], int cant, char mensaje[])
{
    int indice;

    for (indice=0; indice<cant; indice++)
    {
        printf("\n %s",mensaje);
        scanf("%d",&elArray[indice]);
    }
}

int dameMax(int elArray[], int cant)
{
    int indice;
    int max;

    for (indice=0; indice<cant; indice++)
    {
        if(indice == 0 || elArray[indice] > max)
        {
            max = elArray[indice];
        }
    }
    return max;
}

int dameIndiceMax(int elArray[], int cant)
{
    int indice;
    int max;
    int indiceMax;

    max = dameMax(elArray,cant);

    for (indice=0; indice<cant; indice++)
    {
        if(elArray[indice] == max)
        {
            indiceMax = indice;
        }
    }
    return indiceMax;
}

int dameMin(int elArray[],int cant)
{
    int min;
    int indice;

    for (indice=0; indice<cant; indice++)
    {
        if(indice==0 || elArray[indice] < min)
        {
            min = elArray[indice];
        }
    }

    return min;
}

int dameIndiceMin(int elArray[], int cant)
{
    int min;
    int indice;
    int indiceMin;

    for (indice=0; indice<cant; indice++)
    {
        if(indice==0 || elArray[indice] < min)
        {
            min = elArray[indice];
            indiceMin = indice;
        }
    }

    return indiceMin;
}

void MayorMenor(int elArray[], int cant)
{
    int indice;
    int j;
    int aux;

    for (indice=0; indice<cant-1; indice++)
    {
        for (j=indice+1; j<cant; j++)
        {
            if(elArray[indice] < elArray[j])
            {
                aux = elArray[indice];
                elArray[indice] = elArray[j];
                elArray[j] = aux;
            }
        }
    }
}

void MenorMayor(int elArray[], int cant)
{

    int indice;
    int j;
    int aux;

    for (indice=0; indice<cant-1; indice++)
    {
        for (j=indice+1; j<cant; j++)
        {
            if(elArray[indice] > elArray[j])
            {
                aux = elArray[indice];
                elArray[indice] = elArray[j];
                elArray[j] = aux;
            }
        }
    }
}

void inicializarArray(int elArray[], int cant, int inicializacion)
{

    int indice;

    for(indice=0; indice<cant; indice++)
    {
        elArray[indice] = inicializacion;
    }
}
