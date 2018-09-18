#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define CANTIDAD 5

int main()
{
    int misNumeros[CANTIDAD];
    int i;
    int j;
    int indice;
    int auxiliar;
    int nuevoValor;

    for (i=0; i < CANTIDAD; i++)
    {
        fflush(stdin);
        scanf("%d", misNumeros+i);
        printf("ingresado el numero en la posicion %d : %d\n", i, misNumeros[i]);

    }
    /*
    for (i=-1; i < CANTIDAD; i++)
    {
        if(i == CANTIDAD - 1)
        {
            pArrayprintf(", %d }", misNumeros[i]);
        }
        else if(i == -1)
        {
            printf("Valores Ingresados: { ");
        }
        else
        {
            printf("%d,  ", misNumeros[i]);
        }
    }

    */
    // METODO DE SORT BURBUJEO de mayor a menor;
    for(i=0; i < CANTIDAD-1; i++)
    {
        for(j=i+1; j < CANTIDAD; j++)
        {
            if(misNumeros[i] < misNumeros[j])
            {
                swapInts(misNumeros, i, j );
            }
        }

    }


    if ( indice <= CANTIDAD && indice >= 1)
    {
        printf("\nNumero %d", misNumeros[indice - 1] );

        fflush(stdin);
        printf("\ningrese un valor nuevo para la posicion:  ");
        scanf("%d", &nuevoValor);
        misNumeros[indice] = auxiliar;
        misNumeros[indice - 1] = nuevoValor;
    }

    for (i=-1; i < CANTIDAD; i++)
    {
        if(i == CANTIDAD - 1)
        {
            printf("%d }", misNumeros[i]);
        }
        else if(i == -1)
        {
            printf("Valores Ingresados: { ");
        }
        else
        {
            printf("%d,  ", misNumeros[i]);
        }
    }

    return 0;
}

int swapInts(int* pArray, int indiceA, int indiceB)
{
    int retorno = -1;
    int auxiliar;

    if(pArray != NULL &&
            indiceA >= 0 &&
            indiceB >= 0 &&
            indiceA != indiceB)
    {
        auxiliar = pArray[indiceA];
        pArray[indiceA] = pArray[indiceB];
        pArray[indiceB] = auxiliar;
        retorno = 0;
    }


    return retorno;
}
