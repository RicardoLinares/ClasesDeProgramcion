#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int inilizationArrays(int array[], int size)
{
    int i;
    for(i = 0; i < size - 1; i++)
    {
        array[i] = -1;
    }
    return 0;
}
