#include "Estructura.h"

eGenerica* eGenerica_crearVector(int size)
{
    int i;
    eGenerica* vectorEstructura;
    vectorEstructura = (eGenerica*) malloc(sizeof(eGenerica) * size); // trabajando con heap o monto
    if(vectorEstructura != NULL)
    {
        for(i=0; i<size; i++)
        {
            eGenerica_setState(vectorEstructura + i, LIBRE);
        }
    }

    return vectorEstructura;
}



int eGenerica_setState(eGenerica* this, int newState)
{
    int state = -1;

    if(this != NULL)
    {
        if(newState == BAJA || newState == LIBRE || newState == OCUPADO)
        {
            this->estado = newState;
            state = 0;
        }
        else
        {
            state = -2;
        }
    }

    return state;
}
