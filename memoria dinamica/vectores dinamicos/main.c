#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* miVector;
    int auxVector;
    int i;

    miVector = (int*)malloc(sizeof(int)*5);

    if(miVector != NULL)
    {
        for(i=0; i<5; i++)
        {
            *(miVector+i) = i+1;
        }
        for(i=0; i<5; i++)
        {
            printf("%d\n",*(miVector+i));
        }
        printf("aumento espacio \n");
        auxVector = (int*)realloc(miVector,sizeof(int)*10);
        if(auxVector != NULL)
        {
            miVector = auxVector;
            for(i=5; i<10; i++)
            {
                *(miVector+i) = i+1;
            }
            for(i=0; i<10; i++)
            {
                printf("%d\n",*(miVector+i));
            }
            printf("quito espacio\n");

            miVector = realloc(miVector,sizeof(int)*3);

            for(i=0; i<3; i++)
            {
                printf("%d\n",*(miVector+i));
            }
        }
        else
        {
            printf("no hay espacio");
        }

    }
    else
    {
        printf("no hay espacio ");
    }

    return 0;
}
