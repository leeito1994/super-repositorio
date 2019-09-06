#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat
    */

   /* char palabra[10];
    char palabra2[10];
    char todo[50];
    int comp;

    printf("ingrese una palabra ");

    gets(palabra);

    strcpy(palabra2,"Perro");


    if(stricmp(palabra2,palabra)==0)
    {
        printf("son iguales \n");
    }else
    {
        printf("no son iguales \n");
    }

    strcat(todo,palabra);
    strcat(todo,palabra2);
    strcat(todo," chau");

    printf(" todo %s",todo);

    //TAREA
    //nombre[15] = german
    //apellido[15]  = scarafilo
    //apellidoNombre[]

    //la primera palabra mayuscula de cada palabra.

    */


    char nombre[15] = "leandro";
    char apellido[15] = "leandro";
    char apellidoNombre[35];

    printf("%s %s\n",nombre,apellido);

    strcpy(apellido,nombre);

    if(nombre,apellido == 0)
    {
        printf("son iguales");
    }else
    {
        printf("no son iguales");
    }

    return 0;
}
