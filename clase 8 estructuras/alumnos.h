#include "stdio.h"
#include "string.h"
#define OCUPADO 1
#define LIBRE 0

typedef struct
{
    int legajo;
    char nombre[50];
    int nota;
    int estado;

}sAlumno;

void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();
int compararAlumnoPorLegajo(sAlumno,sAlumno);
int cargarAlumnos(sAlumno[],int);
void mostrarListadoAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno[],int cantidad);
void hardcodearAlumnos(sAlumno[],int cantidad);
int inicializarAlumno(sAlumno[],int);
int buscarLibre(sAlumno[],int);
int buscarPorLegajo(sAlumno[],int,int);

