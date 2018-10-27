#include <stdio.h>
#include <stdlib.h>
// leer archivo
// trabajar en memoria

int main()
{
    FILE* pArchivo;
    int i = 0;
    char texto[10][50];
    char otro[50];
    /*pArchivo = fopen("saludo.txt","w");
    fprintf(pArchivo,"Hola \nQue \nHace ");
    fclose(pArchivo);*/

    pArchivo = fopen("saludo.txt","r");
    if(pArchivo != NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(texto[i], 50, pArchivo);
            i++;
        }

        fclose(pArchivo);
        for(i=0;i<10;i++)
        {
            printf("%s", texto[i]);
        }
    }
    return 0;
}
