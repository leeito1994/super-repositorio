#include "punterosomemoriadinamica.h"

int main()
{
    sPersona* pPersona;

    pPersona = new_Persona_Parametros(100,40,1.87);


    if(mostrarPersona(pPersona)!=1)
    {
        printf("error al mostrar\n");
    }
    if(deletePersona(pPersona)==1)
    {
        printf("\n\nse borro\n");
    }

    return 0;
}
