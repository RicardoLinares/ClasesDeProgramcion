#include <stdio.h>
#include <stdlib.h>
#include "Estructura.h"
#define TAMBASE 4
int main()
{
    eGenerica* array;

    array = eGenerica_crearVector(TAMBASE);

    printf("%d",array->estado);
    return 0;
}
