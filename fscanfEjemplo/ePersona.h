#ifndef EPERSONA_H_INCLUDED
#define EPERSONA_H_INCLUDED
#define NAME 50
#define LIBRE -1
#define OCUPADO 1
#define BAJA 0

typedef struct
{
    int id;
    char* name;
    char* lastName;
    int isEmpty;
}ePersona;

int ePersona_setState(ePersona*, int);

int ePersona_setID(ePersona*, int);

int ePersona_setName(ePersona*, char*);

ePersona* ePersona_newPersona(int, char*, char*);

ePersona* ePersona_crearVector(int);


int ePersona_setLastName(ePersona*, char*);
#endif // EPERSONA_H_INCLUDED
