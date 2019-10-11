#include "estructura.h"

void cargarDatos(sDato* listaDato,int cantidad)
{
    int i;
      for(i=0;i<cantidad;i++)
    {
        printf("ingrese entero ");
        scanf("%d",&(listaDato+i)->a);
        printf("ingrese flotante ");
        scanf("%f",&(listaDato+i)->b);
        printf("ingrese caracter ");
        fflush(stdin);
        scanf("%c",&(listaDato+i)->c);

    }

}

void mostrarDatos(sDato* listaDatos,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%d---%f---%c\n",(listaDatos+i)->a,(listaDatos+i)->b,(listaDatos+i)->c);
    }

}
