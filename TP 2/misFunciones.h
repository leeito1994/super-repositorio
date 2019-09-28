#include <stdio.h>
#include <stdlib.h>
#define OCUPADO 0
#define LIBRE 1
#define T 6

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    int sector;
    float salario;
    int vacio;

}sPersona;

void pedirDatos(sPersona[],int);
void cargarDatos(sPersona[],int);
void mostrar(sPersona[],int);
void inicializarPersonas(sPersona [], int);
int cargaAleatoriaDePersonas(sPersona lista[], int cant);
void hardcodearDatos(sPersona[],int);
void eliminarPersona(sPersona[],int);
int buscarIndice(sPersona[],int);
void mostrarUnaPersona(sPersona);
int modificarEmpleado(sPersona[], int);
int darBaja(sPersona[], int);
void mostrarPorApellidoYSector(sPersona[],int);
void Promedio(sPersona[],int);

