#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///int* pEntero = (int*)calloc(sizeof(int)*5); <--- ASI ES EN CALLOC
    int* pEntero = (int*)calloc(sizeof(int),5); ///INICIALIZA EN CERO
    int i;

    free(pEntero);

    for(i=0;i<5;i++)
    {
        printf("%d-",*(pEntero+i));
    }

    //free(pEntero);

    return 0;
}
