#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ePersona .h
#define NAME 50
typedef struct
{
    int id;
    char* name;
    char* lastName;
    int isEmpty;
}ePersona;
//...

// ePersona .c
ePersona* ePersona_crearVector(int size)
{
    int i;
    ePersona* vectorEstructura;
    vectorEstructura = (ePersona*) malloc(sizeof(ePersona) * size); // trabajando con heap o monto
    if(vectorEstructura != NULL)
    {
        for(i=0; i<size; i++)
        {
            eGenerica_setState(vectorEstructura + i, LIBRE);
            eGenerica_setState(vectorEstructura + i, LIBRE);
            eGenerica_setState(vectorEstructura + i, LIBRE);
        }
    }

    return vectorEstructura;
}
int ePersona_setState(ePersona* this, int newState)
{
    int state = -1;

    if(this != NULL)
    {
        if(newState == BAJA || newState == LIBRE || newState == OCUPADO)
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
    if(this != NULL && newName != NULL)
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
int main()
{
   char name[500], lastName[500], id[500],isEmpty[500];
   int cont=1;

   FILE * pFile;

   pFile = fopen ("data.csv", "r");

   while(!feof(pFile))
   {

       if(cont %250 == 0)
       {
           system("pause");
       }
       cont++;



       fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

       printf("%s - %s, %s - %s\n", id, name, lastName, isEmpty);

   }

   fclose(pFile);

   return(0);
}
