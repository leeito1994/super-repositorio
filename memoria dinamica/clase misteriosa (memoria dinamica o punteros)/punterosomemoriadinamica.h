#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char sexo;
    //int edad;
    float altura;

}sPersona;

void messi (int);

sPersona* new_persona(); ///constructor por defecto
sPersona* new_Persona_Parametros(int,char,float); ///constructor

int mostrarPersona(sPersona*);
int deletePersona(sPersona*);
int setLegajo(sPersona* unaPersona, int legajo);

