#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ePersona.h"
int ePersona_setState(ePersona* this, int newState)
{
    int state = -1;

    if(this != NULL)
    {
        if(newState == 1 || newState == -1 || newState == 1)
        {
            this->isEmpty = newState;
            state = 0;
        }
        else
        {
            state = -2;
        }
    }

    return state;
}

int ePersona_setID(ePersona* this, int newState)
{
    int state = -1;

    if(this != NULL)
    {
        if(newState > 0)
        {
            this->id = newState;
            state = 0;
        }
        else
        {
            state = -2;
        }
    }

    return state;
}

int ePersona_setName(ePersona* this, char* newName)
{
    int state = -1;
    int len;
    if(this != NULL && newName != NULL)
    {
        len = strlen(newName);
        if(len < NAME)
        {
            this->name = newName;
            state = 0;
        }
        else
        {
            state = -2;
        }
    }

    return state;
}


int ePersona_setLastName(ePersona* this, char* newLastName)
{
    int state = -1;
    int len;
    if(this != NULL && newLastName != NULL)
    {
        len = strlen(newLastName);
        if(len < NAME)
        {
            this->lastName = newLastName;
            state = 0;
        }
        else
        {
            state = -2;
        }
    }

    return state;
}
ePersona* ePersona_crearVector(int size)
{
    int i;
    ePersona* vectorEstructura;
    vectorEstructura = (ePersona*) malloc(sizeof(ePersona) * size); // trabajando con heap o monto
    if(vectorEstructura != NULL)
    {
        for(i=0; i<size; i++)
        {
            ePersona_setState(vectorEstructura + i, -1);
        }
    }

    return vectorEstructura;
}
ePersona* ePersona_newPersona(int id, char* name, char* lastName)
{
    int i;
    ePersona* estructura;
    estructura = (ePersona*) malloc(sizeof(ePersona)); // trabajando con heap o monto
    if(estructura != NULL)
    {
        ePersona_setName(estructura, name);
        ePersona_setLastName(estructura, lastName);
        ePersona_setID(estructura, id);
        ePersona_setState(estructura, 1);
    }

    return estructura;
}
