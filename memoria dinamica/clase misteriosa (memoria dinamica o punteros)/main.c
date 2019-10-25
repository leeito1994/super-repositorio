#include "punterosomemoriadinamica.h"

int main()
{
    int i;
    sPersona* lista[3];
    sPersona* unaPersona;
    int legajo;
    char sexo;
    float altura;

    for(i=0;i<3;i++)
    {

        printf("ingrese legajo ");
        scanf("%d",&legajo);
        printf("ingrese sexo ");
        scanf("%c",&sexo);
        printf("ingrese altura ");
        scanf("%f",&altura);

        unaPersona = new_Persona_Parametros(legajo,sexo,altura);

        lista[i] = unaPersona;
    }

    for(i=0;i<3;i++)
    {
        mostrarPersona(lista[i]);
    }

   /* sPersona* pPersona;

    pPersona = new_Persona_Parametros(100,40,1.87);
    if(setLegajo(pPersona,-2)==1)
    {
        if(getLegajo(pPersona)>0)
        {
           mostrarPersona(pPersona);
        }
        else
        {
            printf("no se encontro");
        }
    }

    if(mostrarPersona(pPersona)!=1)
    {
        printf("error al mostrar\n");
    }
    if(deletePersona(pPersona)==1)
    {
        printf("\n\nse borro\n");
    }
*/
    return 0;
}
