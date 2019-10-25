#include "punterosomemoriadinamica.h"

void messi(int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("MESSI PECHO FRIO\n");
    }
}

sPersona* new_persona()
{
    //sPersona miPersona = {100,40,1.87};

    sPersona* miPersona;

    miPersona = malloc(sizeof(sPersona)*1);

    return miPersona;

}

int mostrarPersona(sPersona* unaPersona)
{
    int retorno=-1;
    if(unaPersona != NULL)
    {
        printf("%d---%c---%f",unaPersona->legajo,unaPersona->sexo,unaPersona->altura);
        retorno = 1;
    }

    return retorno;

}

int deletePersona(sPersona* unaPersona)
{
    int retorno=-1;
    if(unaPersona != NULL)
    {
        free(unaPersona);
        retorno = 1;
    }
    return retorno;
}

sPersona* new_Persona_Parametros(int legajo,char sexo,float altura)
{
    sPersona* miPersona = new_persona();///(sPersona*) malloc(sizeof(ePersona));

    if(miPersona != NULL)
    {
        miPersona->legajo = legajo;
        miPersona->sexo = sexo;
        miPersona->altura = altura;
    }
    return miPersona;
}

int setLegajo(sPersona* unaPersona, int legajo)
{
    int seteo = -1;
    if(unaPersona != NULL && legajo > 0)
    {
        unaPersona->legajo = legajo;
        seteo = 1;
    }
    return  seteo;
}

int getLegajo(sPersona* unaPersona)
{
    int legajo=-1;
    if(unaPersona != NULL)
    {
        legajo = unaPersona->legajo;
    }
}
