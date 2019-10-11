#include "estructura.h"

int main()
{
    /*sDato unDato = {1,5.3,'B'};
    sDato* pDato;

    pDato = &unDato;

    printf("%d---%f---%c",pDato->a,pDato->b,pDato->c);
*/

    sDato unDato[2] = {{2,3.26,'C'},{1,5.3,'B'}};
    sDato* pDato;

    pDato = unDato;

  cargarDatos(unDato,2);
    mostrarDatos(unDato,2);


    return 0;
}
