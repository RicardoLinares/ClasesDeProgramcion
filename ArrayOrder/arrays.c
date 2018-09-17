#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"


int inilizationAndPrint(int array[], int size, int primerValor)
{
    inilizationArrayInterger(array, size, primerValor);
    printArrayInterger(array, size);
}


int inilizationArrayInterger(int array[], int size, int primerValor)
{
    for(size-- ; 0 <= size; size--)
    {
        array[size] = primerValor;
    }
    return 0;
}


int printArrayInterger(int array[], int size)
{
    int index;
    for(index = 0; index < size; index++)
    {
        printf("%d\n", array[index]);
    }

    return 0;
}
