#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int len;
    int i;
    Employee* aux;
    LinkedList* listaEmpleados = ll_newLinkedList();

/*

    Employee* e1 = employee_newParametros("100","maria","10");
    e1->sueldo = 1000;
    Employee* e2 = employee_newParametros("90","pedro","15");
    e2->sueldo = 1800;
    Employee* e3 = employee_newParametros("101","ramiro","20");
    e3->sueldo = 900;
    Employee* e4 = employee_newParametros("99","susana","10");
    e4->sueldo = 1200;

    ll_add(listaEmpleados,e1);
    ll_add(listaEmpleados,e2);
    ll_add(listaEmpleados,e3);
    ll_add(listaEmpleados,e4);

    /************************************************************

    len = ll_len(listaEmpleados);
    printf("Hay %d empleados cargados\n",len);

    for(i=0;i<len;i++)
    {
        aux = (Employee*)ll_get(listaEmpleados,i);
        printf("%d----%s----%d----%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
    }

    printf("quito 1 y muestro ");

    aux=ll_pop(listaEmpleados,1);

    printf("\n EMPLEADO QUITEADO %d----%s----%d----%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);

    len = ll_len(listaEmpleados);
    printf("\nHay %d empleados cargados\n",len);

       for(i=0;i<len;i++)
    {
        aux = (Employee*)ll_get(listaEmpleados,i);
        printf("%d----%s----%d----%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
    }


    ll_sort(listaEmpleados,comparaPorNombre,1);

     len = ll_len(listaEmpleados);
    printf("\nHay %d empleados cargados\n",len);

       for(i=0;i<len;i++)
    {
        aux = (Employee*)ll_get(listaEmpleados,i);
        printf("%d----%s----%d----%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
    }
*/


    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);
    return 0;
}
