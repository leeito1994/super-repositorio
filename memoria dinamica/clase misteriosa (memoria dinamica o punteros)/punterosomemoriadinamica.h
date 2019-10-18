#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    //char nombre[50];
    int edad;
    float altura;

}sPersona;

void messi (int);

sPersona* new_persona(); ///constructor por defecto
int mostrarPersona(sPersona*);
int deletePersona(sPersona*);
sPersona* new_Persona_Parametros(int,int,float);
