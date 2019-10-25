#include <stdio.h>
#include <stdlib.h>


int main()
{


    FILE* pArchive;

    char miNombre[50] ;
    int a[3] = {3,8,9};
    int i = 6;

   pArchive = fopen("miNombre.txt","wb");

    //fread(&i,sizeof(int),1,pArchive);

    printf("%d",i);



       /*fprintf(pArchive,"lolo");
    fprintf(pArchive,"lala");

   while(!feof(pArchive))
   {
       fgets(miNombre,50,pArchive);
       printf("mi nombre es %s ",miNombre);
   }
    ///texto
*/
    fclose(pArchive);

    //

    return 0;
}
