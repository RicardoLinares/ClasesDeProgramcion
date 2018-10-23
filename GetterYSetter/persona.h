#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define NAME 31
typedef struct
{
    int id;
    char nombre[NAME];
    int edad;
}ePersona;


ePersona* ePersona_nuevaPersona();

ePersona* ePersona_nuevaPersonaParametros(int, char*, int);

int ePersona_setId(ePersona*,int)
int ePersona_setNombre(ePersona*,char*)
int ePersona_setEdad(ePersona*,int)

int ePersona_getId(ePersona*,int)
int ePersona_getNombre(ePersona*,char*)
int ePersona_getEdad(ePersona*,int)


void ePersona_mostrarPersona(ePersona*);






#endif // PERSONA_H_INCLUDED
