#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

#define CANTIDAD 10


int main()
{

    int array[CANTIDAD];
    int i;

    inilizationArrays(array, CANTIDAD);

    for(i = 0; i < CANTIDAD - 1; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
