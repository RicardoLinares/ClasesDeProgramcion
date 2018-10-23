#include "persona.h"

ePersona* ePersona_nuevaPersona()
{
    ePersona* nuevaPersona;

    nuevaPersona = (ePersona*) malloc(sizeof(ePersona));
    if(nuevaPersona != NULL)
    {
        nuevaPersona->id = 0;
        strcpy(nuevaPersona->nombre, " ");
        nuevaPersona->edad = 0;
    }

    return nuevaPersona;
}

void ePersona_mostrarPersona(ePersona* this)
{
    if(this!=NULL)
    {
        printf("%d\n", this->id);
        printf("%s\n", this->nombre);
        printf("%d\n", this->edad);
    }
    else
    {
        printf("ERROR: no es una Persona");
    }
}

int ePersona_setId(ePersona* this ,int id)
{
    int estado = 1;

    if(this != NULL && id > 0)
    {
        ePersona->id = id;
        estado = 1;
    }


    return estado;
}
