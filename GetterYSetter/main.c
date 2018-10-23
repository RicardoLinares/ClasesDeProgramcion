#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
int main()
{

    ePersona* persona;

    persona = ePersona_nuevaPersona();
    if(persona != NULL)
    {
        ePersona_mostrarPersona(persona);
    }
    return 0;
}
