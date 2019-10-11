#include "parcialLaboratorio1.h"

int main()
{
    int operacion;
    sEquipos ListaDeEquipos[EQUIPOS];
    sJugadores listaDeJugadores[JUGADORES];
    sReferi listaDeReferis[REFERI];
    int codigo=0;
    do
    {

        printf("1. pedir equipo\n");
        printf("2. pedir jugadores\n");
        printf("3. pedir referis \n");
        printf("4. mostrar equipos \n");
        printf("5. mostrar jugadores \n");
        printf("6. mostrar referis\n");
        scanf("%d",&operacion);

        switch(operacion)
        {
        case 1:

            pedirEquipo(ListaDeEquipos,EQUIPOS);
            break;
        case 2:
            pedirJugadores(listaDeJugadores,JUGADORES);
            break;
        case 3:
            pedirReferis(listaDeReferis,REFERI);
            break;
        case 4:
            printf("    NOMBRE          LOCALIDAD         ID\n");
            ordenarAlfabeticamenteEquipos(ListaDeEquipos,EQUIPOS);
            mostrarEquipos(ListaDeEquipos,EQUIPOS);
            break;
        case 5:
            printf("    NOMBRE          APELLIDO        SEXO           FECHA NAC\n");
            ordenarAlfabeticamenteJugadores(listaDeJugadores,JUGADORES);
            mostrarJugadores(listaDeJugadores,JUGADORES);
            break;
        case 6:
            printf("    NOMBRE          APELLIDO        SEXO        FECHA NAC\n");
            mostrarReferis(listaDeReferis,REFERI);
        }

        system("pause");
        system("cls");

    }
    while(operacion != 0);

    return 0;
}
