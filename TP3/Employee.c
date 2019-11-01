#include "Employee.h"
#include "string.h"

Employee* employee_newParametros(char* idStr, char* nombreStr, char* horaStr)
{
    Employee* empleado;
    empleado =(Employee*)malloc(sizeof(Employee));

    empleado->id = atoi(idStr);
    strcpy(empleado->nombre,nombreStr);
    empleado->horasTrabajadas = atoi(horaStr);

    return empleado;
}

int comparaPorNombre(void* p1 ,void* p2)
{
    Employee* e1 = (Employee*) p1;
    Employee* e2 = (Employee*) p2;

    return strcmp(e1->nombre,e2->nombre);
}
