#include <stdio.h>
#include <stdlib.h>
#include "Estructura.h"

int main()
{
    eGenerica asd;

    eGenerica_setState(&asd,0);

    printf("%d",asd.estado);
    return 0;
}
