#include "stdio.h"
#include "string.h"

typedef struct
{
    int legajo;
    char nombre[50];
    int nota;

}sAlumno;

void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();
int compararAlumnoPorLegajo(sAlumno,sAlumno);
void cargarAlumnos(sAlumno[],int);
void mostrarListadoAlumnos(sAlumno[],int);

void ordenarAlumnosPorNombre(sAlumno[],int cantidad);


void hardcodearAlumnos(sAlumno[],int cantidad);
