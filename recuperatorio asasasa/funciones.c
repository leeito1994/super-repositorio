#include "funciones.h"
#include "stdio.h"
#include "string.h"

void cargarEdades(int numeros[], int cantidad) //FUNCION PARA HARCODEAR!!!
{
   int i;
   int aux[]={22,33,18,55};
   for(i=0;i<cantidad;i++)
   {
       numeros[i] = aux[i];
   }
}

void mostrarNumeros(int numeros[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%d\n",numeros[i]);
    }

}

void cargarPalabrasTest(char nombres[][50],int cantidad) //FUNCION PARA HARDCODEAR PALABRAS!!!
{
    int i;
    char aux[][50]= {"Alfredo","Rogelio","Julieta","Pablo"};
    for(i=0;i<cantidad;i++)
    {
        strcpy(nombres[i],aux[i]);
    }
}

void mostrarPalabrasTest(char nombres[][50],int cantidad)
{
     int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n%s",nombres[i]);
    }
}

void apellidos(char apellido[][50],int cantidad)
{
    char aux[][50] = {"mercurio","agua","roberto","mccartney"};
    int i;
    for(i=0;i<cantidad;i++)
    {
        strcpy(apellido[i],aux[i]);
    }
}

void mostrarTodo(char nombre[][50], char apellido[][50], int edad[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
         printf("\n%s---%s---%d",nombre[i],apellido[i],edad[i]);
    }


}

void ordenarEdades(char nombres[][50],char apellidos[][50],int edad[],int cantidad)
{
    int i;
    int j;
    int aux;
    char auxNombre[50];
    char auxApellido[50];
    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(edad[i] > edad[j])
            {
                aux = edad[i];
                edad[i] = edad[j];
                edad[j] = aux;

               strcpy (auxNombre,nombres[i]);
               strcpy (nombres[i],nombres[j]);
               strcpy (nombres[j],auxNombre);

               strcpy (auxApellido,apellidos[i]);
               strcpy (apellidos[i],apellidos[j]);
               strcpy (apellidos[j],auxApellido);


            }
        }
    }

}

