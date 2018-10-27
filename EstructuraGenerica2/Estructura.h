#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define LIBRE -1
#define OCUPADO 0
#define BAJA 1
// Definir estructura
// Setear valores de la misma
// getear valores de la misma
// alta de la estructura
// baja de la estructura
// modificacion de la estructura

typedef struct
{
    int id;
    char* nombre;
    int natural;
    int estado; // -1 LIBRE 0 OCUPADO 1 BAJA
} eGenerica;

/** \brief crea un nuevo vector de estructuras
 *
 * \param eGenerica*
 * \param int
 * \return eGenerica*
 *
 */
eGenerica* eGenerica_crearVector(int);
/** \brief genera el siguiente id de un vector de estructura generica
 *
 * \param eGenerica* vector de estructuras
 * \param int cantidad de elementos
 * \return int -1 Si no se encotro id. sino devolvera el siguiente id disponible en el vector;
 *
 */
int eGenerica_generarId(eGenerica*, int);

int eGenerica_setState(eGenerica*, int);


#endif // ESTRUCTURA_H_INCLUDED
