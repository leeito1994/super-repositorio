#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void cargarConDatosEnteros(int [], int cantidad);
void cargarNombres(char[][50], int cantidad);
int dameMax(int [], int cantidad);
int indiceMaxIndice(int[],int cantidad);
void mostrarElNombreMax(char [][50],int [],int cantidad);

int main()
{
   int nota[TAM];
   char nombres [TAM][50];
   int indice;
   int maximo;
   int indiceDelMax;

   /*for(indice=0;indice<3;indice++)
   {
       printf("ingrese el name! ");
       gets(nombres[indice]);

       printf("ingrese edad sin mentirme ");
       scanf("%d",&edades[indice]);

       fflush(stdin);
   }*/
   cargarConDatosEnteros(nota,TAM);
   cargarNombres(nombres,TAM);
   dameMaxIndice(nota,TAM);
   indiceDelMax = dameMaxIndice(nota,TAM);
   nombres[indiceDelMax];

   for(indice=0;indice<TAM;indice++)
   {
       printf("\nel nombre es %s y su nota es %d ",nombres[indice],nota[indice]);
   }

}

void cargarConDatosEnteros(int array[], int cantidad)

{
    int aux[] = {4,10,8,2};
    int i;
    for(i=0;i<cantidad;i++)
    {
          //  array[i]=i*10;
          array[i] = aux[i];
    }
}

void cargarNombres(char array[][50], int cantidad)
{
    char aux[][50] = {"alfredo","rogelio","julieta","pablo"};
    int i;

    for(i=0;i<cantidad;i++)
    {
        strcpy(array[i],aux[i]);
    }
}

int dameMaxIndice(int array[],int cantidad)
{
    int i;
    int max;
    int indiceMax;
    max = dameMax(array,cantidad);

    for(i=0;i<cantidad;i++)
    {
        if(array[i] == max)
        {
            indiceMax = i;
        }
    }
    return indiceMax;
}

int dameMax(int array[], int cantidad)
{
    int i;
    int max;


    for(i=0;i<cantidad;i++)
    {
        if(i == 0 || array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void mostrarElNombreMax(char arrayPalabras[][50],int array[],int cantidad)
{
    int i;
    int indice;
    indice = dameMaxIndice(array,cantidad);
    arrayPalabras[indice];
}


