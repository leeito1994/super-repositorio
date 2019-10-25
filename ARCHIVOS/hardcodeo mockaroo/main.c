#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id[50];
    char nombre[50];
    char apellido[50];
    char mail[50];
    float sueldo[50];

}sEmpleado;

int main()
{
    FILE* pArchivo;
    //char lector[1000];
    char id[50];
    char nombre[50];
    char apellido[50];
    char mail[50];
    float sueldo[50];
    int i=0;

    sEmpleado lista[50];
    sEmpleado unEmpleado;

    pArchivo = fopen("Empleados.csv","r");

    fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,mail,sueldo);

    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,mail,sueldo);

        unEmpleado.id = atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        strcpy(unEmpleado.apellido,apellido);
        strcpy(unEmpleado.mail,mail);
        unEmpleado.sueldo = atof(sueldo);

        lista[i]=unEmpleado;
        i++;

        //printf("%d   %s   %s   %s   %f\n",id,nombre,apellido,mail,sueldo);
    }
    // scanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,mail,sueldo);


    fclose(pArchivo);

    for(i=0;i<50;i++)
    {
        printf("%d   %s   %s   %s   %f\n",lista[i].id,lista[i].nombre,lista[i].apellido,lista[i].mail,lista[i].sueldo);
    }
    //puts(lector);

    return 0;
}
