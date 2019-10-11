#include <stdio.h>
#include <stdlib.h>
#define EQUIPOS 3
#define JUGADORES 3
#define REFERI 3

typedef struct
{
    int dia;
    int mes;
    int anio;

}sFecha;

typedef struct
{
    int Codigo;// (autoincremental)
    char nombre [51];//(m�ximo 51 caracteres) Validar
    char localidad [31];//(maximo 33 caracteres) Validar

} sEquipos;

typedef struct
{
    int Codigo; //(autoincremental)
    char Apellido[31]; //(m�ximo 31 caracteres) Validar
    char Nombre[51]; //(m�ximo 31 caracteres) Validar
    int CodigoEquipo;//( debe existir ) Validar
    char Sexo; //( F | M ) Validar
    sFecha FechaNacimiento; //Validar d�a, mes y a�o

} sJugadores;

typedef struct
{
    int codigo;// (autoincremental)
    char apellido[51];// (m�ximo 31 caracteres) Validar
    char nombre[51];// (m�ximo 31 caracteres) Validar
    char  sexo;// ( F | M ) Validar
    char email[31];// (m�ximo 31 caracteres) Validar
    sFecha FechaNacimientoReferi; //Validar d�a, mes y a�o

} sReferi;

typedef struct
{
    int Codigo; //(autoincremental)
    int CodigoVisitante;// (debe existir) Validar
    int CodigoLocal; //(debe existir) Validar
    int CodigoReferi; //(debe existir) Validar
    sFecha Fecha; //( Validar d�a, mes y a�o )

} sPartido;

void cargarEquipos(sEquipos listaEquipos[],int cantidad);
void cargarJugadores(sJugadores listaJugadores[],int cantidad);
void mostrarEquipos(sEquipos equipos[], int cantidad);
void cargarReferis(sReferi[],int);
void pedirEquipo(sEquipos[],int);
void pedirJugadores(sJugadores[],int);
void mostrarReferis(sReferi referis[], int cantidad);
void ordenarAlfabeticamenteEquipos(sEquipos[],int);
void ordenarAlfabeticamenteJugadores(sJugadores jugadores[],int cantidad);
